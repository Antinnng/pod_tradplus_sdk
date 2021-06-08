#import "MSNativeAdAdapter.h"

@class MSAdConfiguration;

@interface TradPlusAdNativeVideoAdAdapter : NSObject <MSNativeAdAdapter>

@property (nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, readonly) NSArray *impressionTrackerURLs;
@property (nonatomic, readonly) NSArray *clickTrackerURLs;
@property (nonatomic) MSAdConfiguration *adConfiguration;

- (instancetype)initWithAdProperties:(NSMutableDictionary *)properties;

- (void)handleVideoViewImpression;
- (void)handleVideoViewClick;
- (void)handleVideoHasProgressedToTime:(NSTimeInterval)playbackTime;

@end
