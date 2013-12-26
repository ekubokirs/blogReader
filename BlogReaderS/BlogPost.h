//
//  BlogPost.h
//  BlogReaderS
//
//  Created by Emilia Kirschenbaum on 10/29/13.
//  Copyright (c) 2013 BedTimeTaco. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property(strong, nonatomic) NSString *title;
@property(strong, nonatomic) NSString *author;
@property(strong, nonatomic) NSString *thumbnail;
@property(strong, nonatomic) NSString *date;
@property(strong, nonatomic) NSURL *url;

//Designated Initializer
- (id) initWithTitle: (NSString *)title;
+ (id) blogPostWithTitle: (NSString *)title;

- (NSURL *) thumbnailURL;
- (NSString *) formattedDate;
@end

