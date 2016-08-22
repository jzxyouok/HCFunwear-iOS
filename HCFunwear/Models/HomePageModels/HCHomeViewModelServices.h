//  HCHomeViewModelServices.h
//  HCFunwear
//
//  Created by 刘海川 on 16/8/22.
//  Copyright © 2016年 Haichuan Liu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HCHomeLayoutService.h"

@protocol HCHomeViewModelServices <NSObject>

- (void)pushViewModel:(id)viewModel;

- (id<HCHomeLayoutService>)getHomeLayoutService;

@end