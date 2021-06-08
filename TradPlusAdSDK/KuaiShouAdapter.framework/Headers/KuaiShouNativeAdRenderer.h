#import <TradPlusAds/MSNativeAdRenderer.h>
#import <TradPlusAds/MSNativeAdRendererSettings.h>

@class MSNativeAdRendererConfiguration;
@class MSStaticNativeAdRendererSettings;


@interface KuaiShouNativeAdRenderer : NSObject <MSNativeAdRenderer>

@property (nonatomic, readonly) MSNativeViewSizeHandler viewSizeHandler;

+ (MSNativeAdRendererConfiguration *)rendererConfigurationWithRendererSettings:(id<MSNativeAdRendererSettings>)rendererSettings;


- (void)changeRenderingViewClass:(Class)renderingViewClass;
@end


