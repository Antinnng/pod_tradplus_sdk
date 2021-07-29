//  激励视频广告
//  MsRewardedVideoAd.h
//  TradPlusDemo
//
//  Created by ms-mac on 2017/1/12.
//  Copyright © 2017年 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MSRewardedVideoReward.h"

NS_ASSUME_NONNULL_BEGIN

@protocol MsRewardedVideoAdDelegate;

@interface MsRewardedVideoAd : NSObject
@property (nonatomic, weak, nullable) id<MsRewardedVideoAdDelegate> delegate;
@property (nonatomic, readonly) BOOL isAdLoading;
@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, readonly) BOOL isAdReadyWithDirection; //filter ad by screen direction.
@property (nonatomic, readonly) BOOL isNetWorkAdReady  __deprecated_msg("Use `entryAdScenario` instead.");
//头条优量汇广告位是否开启模版渲染，默认为YES。**v4.8.1开始 在TradPlus后台设置
//@property (nonatomic) BOOL isPangleTemplateRender __deprecated;
@property (nonatomic, readonly) int readyAdCount;
@property (nonatomic, readonly) int cacheNum;
@property (nonatomic, strong) NSString *channelName;          //渠道名

//相关回调时可以访问到的具体渠道信息。
@property (nonatomic, strong) NSMutableDictionary *dicChannelInfo;

//流量分组
@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;

- (void)setAdUnitID:(NSString *)adUnitID;
- (void)setAdUnitID:(NSString *)adUnitID isAutoLoad:(BOOL)isAutoLoad;
- (void)loadAd;
- (NSString *)getLoadDetailInfo;
- (NSString *)getLoadDetailStatus;
- (BOOL)showAdFromRootViewController:(nullable UIViewController *)rootViewController;
- (BOOL)showAdFromRootViewController:(nullable UIViewController *)rootViewController sceneId:(nullable NSString *)sceneId;

//filter ad by screen direction.
- (BOOL)showAdWithDirectionFromRootViewController:(nullable UIViewController *)rootViewController __deprecated;
//850埋点 用于统计广告展示前的广告ready比率
- (void)entryAdScenario; //没有设置广告场景
- (void)entryAdScenario:(nullable NSString *)sceneId; //后台设置了广告场景



/// 设置服务器端奖励验证用户数据
/// @param userID 用户唯一识别码 必填
/// @param customData 附加信息 根据平台要求填写
- (void)setServerSideVerificationOptionsWithUserID:(nonnull NSString *)userID customData:(nullable NSString *)customData;

@end

@protocol MsRewardedVideoAdDelegate <NSObject>
@optional
- (void)rewardedVideoAdDidLoaded:(MsRewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAd:(MsRewardedVideoAd *)rewardedVideoAd didFailedWithError:(NSError *)error;
- (void)rewardedVideoAdShown:(MsRewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAdDidFailToPlay:(MsRewardedVideoAd *)rewardedVideoAd error:(NSError *)error;
- (void)rewardedVideoAdClicked:(MsRewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAdDismissed:(MsRewardedVideoAd *)rewardedVideoAd;
//have reward
- (void)rewardedVideoAdShouldReward:(MsRewardedVideoAd *)rewardedVideoAd reward:(MSRewardedVideoReward *)reward;
//no reward
- (void)rewardedVideoAdShouldNotReward:(MsRewardedVideoAd *)rewardedVideoAd;

- (void)rewardedVideoAdAllLoaded:(MsRewardedVideoAd *)rewardedVideoAd readyCount:(int)readyCount;
- (void)rewardedVideoAdOneLayerLoaded:(MsRewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAdOneLayer:(MsRewardedVideoAd *)rewardedVideoAd didFailWithError:(NSError *)error;
- (void)rewardedVideoAdBidStart:(MsRewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAdBidEnd:(MsRewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAdLoadStart:(MsRewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAdPlayStart:(MsRewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAdPlayEnd:(MsRewardedVideoAd *)rewardedVideoAd;

//for debug
- (void)loadingInfoChangedR:(MsRewardedVideoAd *)rewardedVideoAd;

@end

NS_ASSUME_NONNULL_END
