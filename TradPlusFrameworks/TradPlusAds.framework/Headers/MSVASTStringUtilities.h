//
//  MSVASTStringUtilities.h
//  AdExpress
//
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MSVASTStringUtilities : NSObject

+ (double)doubleFromString:(NSString *)string;
+ (BOOL)stringRepresentsNonNegativePercentage:(NSString *)string;
+ (BOOL)stringRepresentsNonNegativeDuration:(NSString *)string;
+ (NSInteger)percentageFromString:(NSString *)string;
+ (NSTimeInterval)timeIntervalFromString:(NSString *)string;
+ (NSString *)stringFromTimeInterval:(NSTimeInterval)timeInterval;

@end
