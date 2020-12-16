//
//  EMConversation+EaseUI.h
//  EaseIMKit
//
//  Created by 杜洁鹏 on 2020/11/14.
//

#if __has_include(<Hyphenate/Hyphenate.h>)
#import <Hyphenate/Hyphenate.h>
#endif
#if __has_include(<HyphenateLite/HyphenateLite.h>)
#import <HyphenateLite/HyphenateLite.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@interface EMConversation (EaseUI)

- (void)setTop:(BOOL)isTop;
- (BOOL)isTop;

- (void)setShowName:(NSString *)aShowName;
- (NSString *)showName;

- (void)setDraft:(NSString *)aDraft;
- (NSString *)draft;

- (BOOL)remindMe;

- (void)setLatestUpdateTime:(long long)latestUpdateTime;

- (long long)latestUpdateTime;
@end

NS_ASSUME_NONNULL_END
