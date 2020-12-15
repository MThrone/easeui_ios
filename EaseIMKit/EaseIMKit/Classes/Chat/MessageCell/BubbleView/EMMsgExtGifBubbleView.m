//
//  EMMsgExtGifBubbleView.m
//  EaseIMKit
//
//  Created by XieYajie on 2019/2/14.
//  update © 2020 zhangchong. All rights reserved.
//

#import "EMMsgExtGifBubbleView.h"

#import "EaseEmoticonGroup.h"

@implementation EMMsgExtGifBubbleView

- (instancetype)initWithDirection:(EMMessageDirection)aDirection
                             type:(EMMessageType)aType
                        viewModel:(EaseChatViewModel *)viewModel
{
    self = [super initWithDirection:aDirection type:aType viewModel:viewModel];
    if (self) {
        self.gifView = [[FLAnimatedImageView alloc] init];
        [self addSubview:self.gifView];
        [self.gifView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.edges.equalTo(self);
            make.width.height.lessThanOrEqualTo(@100);
        }];
    }
    
    return self;
}

#pragma mark - Setter

- (void)setModel:(EaseMessageModel *)model
{
    EMMessageType type = model.type;
    if (type == EMMessageTypeExtGif) {
        NSString *name = [(EMTextMessageBody *)model.message.body text];
        EaseEmoticonGroup *group = [EaseEmoticonGroup getGifGroup];
        for (EaseEmoticonModel *model in group.dataArray) {
            if ([model.name isEqualToString:name]) {
                NSBundle *resource_bundle = [NSBundle bundleWithPath:[[NSBundle mainBundle] pathForResource:@"/Frameworks/EaseIMKit.framework" ofType:nil]];
                NSString *path = [resource_bundle pathForResource:model.original ofType:@"gif"];
                NSData *imageData = [NSData dataWithContentsOfFile:path];
                self.gifView.animatedImage = [FLAnimatedImage animatedImageWithGIFData:imageData];;
                break;
            }
        }
    }
}

@end
