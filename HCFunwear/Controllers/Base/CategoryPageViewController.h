//
//  CategoryPageViewController.h
//  HCFunwear
//
//  Created by 刘海川 on 16/7/7.
//  Copyright © 2016年 Haichuan Liu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TopCategoryView.h"
#import "CategoryPageViewModel.h"

@interface CategoryPageViewController : UIViewController <TopCategoryViewDelegate,UIScrollViewDelegate>

- (instancetype)initWithViewModel:(CategoryPageViewModel *)viewModel;

@end
