
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#if __has_include(<Hyphenate/Hyphenate.h>)
#import <Hyphenate/Hyphenate.h>
#elseif __has_include(<HyphenateLite/HyphenateLite.h>)
#import <HyphenateLite/HyphenateLite.h>
#endif

#import <Masonry/Masonry.h>

#import "EaseEnums.h"
#import "EaseDefines.h"

#import "EaseAlertController.h"
#import "EaseAlertView.h"

#import "EaseEmojiHelper.h"
#import "UIViewController+HUD.h"
#import "UIColor+EaseUI.h"

#define UIColorFromRGB(rgbValue)  UIColorFromRGBA(rgbValue, 1.0)

#define UIColorFromRGBA(rgbValue,a)  ([UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:a])

