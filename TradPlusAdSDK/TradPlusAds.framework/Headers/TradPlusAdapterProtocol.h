
#import <Foundation/Foundation.h>

@protocol TradPlusAdapterProtocol <NSObject>

@required

///获取buyeruid
+ (NSString *)getBuyeruidWithInfo:(NSDictionary *)infoDic;
///获取版本号
+ (NSString *)sdkVersion;

@end
