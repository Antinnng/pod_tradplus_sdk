//
//  MSVASTMediaFile.h
//  AdExpress
//
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MSVASTModel.h"

@interface MSVASTMediaFile : MSVASTModel

@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, copy, readonly) NSString *delivery;
@property (nonatomic, copy, readonly) NSString *mimeType;
@property (nonatomic, readonly) double bitrate;
@property (nonatomic, readonly) CGFloat width;
@property (nonatomic, readonly) CGFloat height;
@property (nonatomic, copy, readonly) NSURL *URL;

@end
