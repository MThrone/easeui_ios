//
//  LoginViewController.m
//  EaseIMKitDemo
//
//  Created by 杜洁鹏 on 2020/11/5.
//  Copyright © 2020 djp. All rights reserved.
//

#import "LoginViewController.h"
#if __has_include(<Hyphenate/Hyphenate.h>)
#import <Hyphenate/Hyphenate.h>
#elseif __has_include(<HyphenateLite/HyphenateLite.h>)
#import <HyphenateLite/HyphenateLite.h>
#endif

@interface LoginViewController ()
@property (weak, nonatomic) IBOutlet UITextField *usernameTextField;
@property (weak, nonatomic) IBOutlet UITextField *pwdTextField;

@end

@implementation LoginViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}


- (IBAction)loginAction:(id)sender {

}

@end
