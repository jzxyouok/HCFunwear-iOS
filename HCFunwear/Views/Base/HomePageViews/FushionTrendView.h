//
//  FushionTrendView.h
//  HCFunwear
//
//  Created by 刘海川 on 16/7/4.
//  Copyright © 2016年 Haichuan Liu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HCModule.h"

@interface FushionTrendView : UIView <UICollectionViewDataSource,UICollectionViewDelegate>

@property (nonatomic, strong) HCModule *module;

- (void)reloadData;

@end
