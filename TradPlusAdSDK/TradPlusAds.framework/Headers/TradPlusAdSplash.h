//
//  TradPlusAdSplash.h
//  TradPlusAds
//
//  Created by xuejun on 2021/9/13.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADSplashDelegate;

@interface TradPlusAdSplash : NSObject

/// 设置广告位ID
- (void)setAdUnitID:(NSString *)adUnitID;

///返回下一个Ready的AD信息 无广告时返回nil
- (nullable NSDictionary *)getReadyAdInfo;

///返回当前显示的AD信息
- (nullable NSDictionary *)getCurrentAdInfo;

///加载广告
- (void)loadAdWithWindow:(UIWindow *)window bottomView:(nullable UIView *)bottomView;

/// 显示广告
- (void)show;

@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, readonly) NSString *unitID;

@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;

@property (nonatomic,weak) id <TradPlusADSplashDelegate> delegate;

@end

@protocol TradPlusADSplashDelegate <NSObject>

///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpSplashAdLoaded:(NSDictionary *)adInfo;
///AD加载失败
- (void)tpSplashAdLoadFailWithError:(NSError *)error;
///AD展现
- (void)tpSplashAdImpression:(NSDictionary *)adInfo;
///AD展现失败
- (void)tpSplashAdShow:(NSDictionary *)adInfo didFailWithError:(NSError *)error;
///AD被点击
- (void)tpSplashAdClicked:(NSDictionary *)adInfo;
///AD关闭
- (void)tpSplashAdDismissed:(NSDictionary *)adInfo;
@optional
///bidding开始
- (void)tpSplashAdBidStart:(NSDictionary *)adInfo;
///bidding结束
- (void)tpSplashAdBidEnd:(NSDictionary *)adInfo success:(BOOL)success DEPRECATED_MSG_ATTRIBUTE("Please use tpSplashAdBidEnd:error:");
///bidding结束 error = nil 表示成功
- (void)tpSplashAdBidEnd:(NSDictionary *)adInfo error:(NSError *)error;
///开始加载
- (void)tpSplashAdLoadStart:(NSDictionary *)adInfo;
//多缓存情况下，当每个广告源加载成功后会都会回调一次。
- (void)tpSplashAdOneLayerLoaded:(NSDictionary *)adInfo;
//多缓存情况下，当每个广告源加载失败后会都会回调一次。
- (void)tpSplashAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;
///加载流程全部结束
- (void)tpSplashAdAllLoaded:(BOOL)success;
@end

NS_ASSUME_NONNULL_END
