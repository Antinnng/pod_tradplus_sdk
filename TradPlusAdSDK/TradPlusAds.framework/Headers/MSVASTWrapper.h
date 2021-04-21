//
//  MSVASTWrapper.h
//  AdExpress
//
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSVASTModel.h"

@class MSVASTResponse;

@interface MSVASTWrapper : MSVASTModel

@property (nonatomic, readonly) NSArray *creatives;
@property (nonatomic, readonly) NSArray *errorURLs;
@property (nonatomic, readonly) NSArray *extensions;
@property (nonatomic, readonly) NSArray *impressionURLs;
@property (nonatomic, copy, readonly) NSURL *VASTAdTagURI;
@property (nonatomic, readonly) MSVASTResponse *wrappedVASTResponse;

@end
