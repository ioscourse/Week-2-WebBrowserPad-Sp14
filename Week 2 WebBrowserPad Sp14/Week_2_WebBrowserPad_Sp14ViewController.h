//
//  Week_2_WebBrowserPad_Sp14ViewController.h
//  Week 2 WebBrowserPad Sp14
//
//  Created by Charles Konkol on 1/17/14.
//  Copyright (c) 2014 Chuck Konkol. All rights reserved.
//update
//

#import <UIKit/UIKit.h>

@interface Week_2_WebBrowserPad_Sp14ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *txtURL;
- (IBAction)btnGo:(id)sender;
@property (strong, nonatomic) IBOutlet UIWebView *webview;

@end
