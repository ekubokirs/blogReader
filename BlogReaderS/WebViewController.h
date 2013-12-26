//
//  WebViewController.h
//  BlogReaderS
//
//  Created by Emilia Kirschenbaum on 11/4/13.
//  Copyright (c) 2013 BedTimeTaco. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController
@property (strong, nonatomic) NSURL *blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end
