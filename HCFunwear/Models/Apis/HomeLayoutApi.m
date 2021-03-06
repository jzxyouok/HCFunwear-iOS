//
//  HomeLayoutApi.m
//  HCFunwear
//
//  Created by 刘海川 on 16/8/12.
//  Copyright © 2016年 Haichuan Liu. All rights reserved.
//

#import "HomeLayoutApi.h"

@implementation HomeLayoutApi

- (YTKRequestMethod)requestMethod {
    return YTKRequestMethodGet;
}

- (id)requestArgument {
    return @{
             @"a": @"getAppLayoutV2",
             @"m": @"Home",
             @"page":@"home",
             @"token":@""
             };
}

- (NSInteger)cacheTimeInSeconds {
    return 5;
}

@end
