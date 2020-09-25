//
//  MsEvent.h
//  TradPlusSDKSample
//
//  Created by ms-mac on 2019/11/5.
//  Copyright © 2019 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MsCommon.h"

NS_ASSUME_NONNULL_BEGIN


@interface MsEvent : NSObject
@property (nonatomic, strong) NSMutableArray *arrUploadInfo;//for test

+ (MsEvent *)sharedInstance;

- (void)uploadEvent:(MSEventType)evid info:(NSDictionary * _Nullable)info;
- (void)uploadEvent:(MSEventType)evid info:(NSDictionary * _Nullable)info level:(int)level;
@end

NS_ASSUME_NONNULL_END
