//
//  DoubleBannerViewCell.h
//  HCFunwear
//
//  Created by 刘海川 on 16/7/4.
//  Copyright © 2016年 Haichuan Liu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DoubleBannerView.h"
#import "HCHomeModuleCellProtocol.h"

@interface DoubleBannerViewCell : UICollectionViewCell <HCHomeModuleCellProtocol>

@property (nonatomic, strong) DoubleBannerView *doubleBannerView;

@end
