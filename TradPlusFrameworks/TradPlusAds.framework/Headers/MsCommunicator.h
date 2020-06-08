//
//  MsCommunicator.h
//  TradPlusDemo
//
//  Created by ms-mac on 2016/11/30.
//  Copyright © 2016年 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MsCommunicator : NSObject

@property (nonatomic, assign, readonly) BOOL loading;

- (void)loadURL:(NSURL *)URL completeHandler:(void (^)(NSDictionary *dicRep, NSError *error))handler;
- (void)loadURL:(NSURL *)URL withData:(NSDictionary *)dicData completeHandler:(void (^)(NSDictionary *dicRep, NSError *error))handler;
- (void)cancel;

@end
