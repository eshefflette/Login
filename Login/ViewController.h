//
//  ViewController.h
//  Login
//
//  Created by Eric Svendsen Shefflette on 9/8/13.
//  Copyright (c) 2013 Eric Svendsen Shefflette. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameText;
@property (weak, nonatomic) IBOutlet UITextField *passwordText;
- (IBAction)loginClick:(id)sender;

- (IBAction)backgroundClick:(id)sender;

@end
