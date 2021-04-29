//
//  MMRConstants.h
//  MsSDK
//
//  Copyright (c) 2016 TradPlusAd. All rights reserved.
//

enum {
    MMRAdViewStateHidden,
    MMRAdViewStateDefault,
    MMRAdViewStateExpanded,
    MMRAdViewStateResized
};
typedef NSUInteger MMRAdViewState;

enum {
    MMRAdViewPlacementTypeInline,
    MMRAdViewPlacementTypeInterstitial
};
typedef NSUInteger MMRAdViewPlacementType;

extern NSString *const gOrientationPropertyForceOrientationPortraitKey;
extern NSString *const gOrientationPropertyForceOrientationLandscapeKey;
extern NSString *const gOrientationPropertyForceOrientationNoneKey;
