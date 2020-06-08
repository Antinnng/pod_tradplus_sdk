//
//  MSIdentityProvider.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MSIdentityProvider : NSObject

+ (NSString *)identifier;
+ (NSString *)obfuscatedIdentifier;
+ (BOOL)advertisingTrackingEnabled;

/**
 * A Boolean value indicating whether the MeetSocial SDK should create a MeetSocial ID that can be used
 * for frequency capping when Limit ad tracking is on & the IDFA we get is
 * 00000000-0000-0000-0000-000000000000.
 *
 * When set to NO, the SDK will not create a MeetSocial ID in the above case. When set to YES, the
 * SDK will generate a MeetSocial ID. The default value is YES.
 *
 */
+ (void)setFrequencyCappingIdUsageEnabled:(BOOL)frequencyCappingIdUsageEnabled;
+ (BOOL)frequencyCappingIdUsageEnabled;

@end
