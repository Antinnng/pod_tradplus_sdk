//
//  MSRewardedVideoConnection.h
//  MsSDK
//  Copyright © 2016 MeetSocial. All rights reserved.
//

@class MSRewardedVideoConnection;

@protocol MSRewardedVideoConnectionDelegate <NSObject>

- (void)rewardedVideoConnectionCompleted:(MSRewardedVideoConnection *)connection url:(NSURL *)url;

@end

@interface MSRewardedVideoConnection : NSObject

- (instancetype)initWithUrl:(NSURL *)url delegate:(id<MSRewardedVideoConnectionDelegate>)delegate;
- (void)sendRewardedVideoCompletionRequest;

@end
