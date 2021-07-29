#import <VungleSDK/VungleSDK.h>

@protocol MSVungleRouterDelegate;
@class VungleInstanceMediationSettings;

@interface MSVungleRouter : NSObject <VungleSDKDelegate>

@property (nonatomic, weak) id<MSVungleRouterDelegate> delegate;

extern NSString *const kVungleAppIdKey;
extern NSString *const kVunglePlacementIdKey;
extern NSString *const kVungleFlexViewAutoDismissSeconds;
extern NSString *const kVungleUserId;
extern NSString *const kVungleOrdinal;

+ (MSVungleRouter *)sharedRouter;



- (void)initializeSdkWithInfo:(NSDictionary *)info;
- (void)requestInterstitialAdWithCustomEventInfo:(NSDictionary *)info delegate:(id<MSVungleRouterDelegate>)delegate;
- (void)requestRewardedVideoAdWithCustomEventInfo:(NSDictionary *)info delegate:(id<MSVungleRouterDelegate>)delegate;
- (BOOL)isAdAvailableForPlacementId:(NSString *)placementId;
- (void)presentInterstitialAdFromViewController:(UIViewController *)viewController options:(NSDictionary *)options forPlacementId:(NSString *)placementId;
- (void)presentRewardedVideoAdFromViewController:(UIViewController *)viewController customerId:(NSString *)customerId settings:(VungleInstanceMediationSettings *)settings forPlacementId:(NSString *)placementId;
- (void)updateConsentStatus:(VungleConsentStatus)status;
- (VungleConsentStatus) getCurrentConsentStatus;
- (void)clearDelegateForPlacementId:(NSString *)placementId;

//v5.7.4.0
//初始化传入 appid
- (void)initializeSdkWithAppId:(NSString *)appId;
//获取bidToken
- (NSString *)getbidToken;

///MREC 用于原生广告
- (void)requestMRECAdWithCustomEventInfo:(NSDictionary *)info delegate:(id<MSVungleRouterDelegate>)delegate;
- (BOOL)addAdViewToView:(UIView *)publisherView placementID:(NSString *)placementID error:(NSError **)error;
@end

@protocol MSVungleRouterDelegate <NSObject>

///缓存加载成功
- (void)vungleAdDidLoad;
///广告即将开始播放
- (void)vungleAdWillAppear;
//v5.7.4增加的确认展现时回调
- (void)vungleAdDidShow;
- (void)vungleAdWillDisappear;
- (void)vungleAdWasTapped;
- (void)vungleAdDidFailToPlay:(NSError *)error;
///缓存加载失败
- (void)vungleAdDidFailToLoad:(NSError *)error;

@optional

- (void)vungleAdShouldRewardUser;

@end
