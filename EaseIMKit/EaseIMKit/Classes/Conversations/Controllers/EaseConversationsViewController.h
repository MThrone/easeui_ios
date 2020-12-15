//
//  EaseConversationsViewController.h
//  EaseIMKit
//
//  Created by 杜洁鹏 on 2020/10/29.
//

#import <UIKit/UIKit.h>
#if __has_include(<Hyphenate/Hyphenate.h>)
#import <Hyphenate/Hyphenate.h>
#elseif __has_include(<HyphenateLite/HyphenateLite.h>)
#import <HyphenateLite/HyphenateLite.h>
#endif
#import "EaseBaseTableViewController.h"

#import "EaseConversationViewModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol EaseConversationsViewControllerDelegate <EaseBaseViewControllerDelegate>

@optional

- (UITableViewCell *)easeTableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;

- (NSArray<UIContextualAction *> *)easeTableView:(UITableView *)tableView
           trailingSwipeActionsForRowAtIndexPath:(NSIndexPath *)indexPath
                                         actions:(NSArray<UIContextualAction *> *)actions;

- (void)easeTableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath;

- (id<EaseUserDelegate>)easeUserDelegateAtConversationId:(NSString *)conversationId
                                        conversationType:(EMConversationType)type;

@end

@interface EaseConversationsViewController : EaseBaseTableViewController
@property (nonatomic, strong) NSMutableArray *dataAry;
@property (nonatomic) id <EaseConversationsViewControllerDelegate> delegate;
- (instancetype)initWithModel:(EaseConversationViewModel *)aModel;
@end

NS_ASSUME_NONNULL_END
