//
//  VungleInstanceMediationSettings.h
//  MeetSocialSDK
//
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<MeetSocial/MeetSocial.h>)
#import <MeetSocial/MeetSocial.h>
#else
#import <TradPlusAds/MSMediationSettingsProtocol.h>
#endif

/*
 * `VungleInstanceMediationSettings` allows the application to provide per-instance properties
 * to configure aspects of Vungle ads. See `MSMediationSettingsProtocol` to see how mediation settings
 * are used.
 */
@interface VungleInstanceMediationSettings : NSObject <MSMediationSettingsProtocol>

/*
 * An NSString that's used as an identifier for a specific user, and is passed along to Vungle
 * when the rewarded video ad is played.
 */
@property (nonatomic, copy) NSString *userIdentifier;

@property (nonatomic, assign) NSUInteger ordinal;

@property (nonatomic, assign) NSTimeInterval flexViewAutoDismissSeconds;
@end
