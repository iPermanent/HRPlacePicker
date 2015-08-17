//
//  HRLocationPicker.h
//  HRPlacePicker
//
//  Created by ZhangHeng on 15/8/17.
//  Copyright (c) 2015年 ZhangHeng. All rights reserved.
//

//frame不需要设置，初始化使用init即可

#import <UIKit/UIKit.h>

@protocol HRLocationPicker <NSObject>

-(void)didSelectLocation:(NSString *)placeString;

@end

@interface HRLocationPicker : UIView
@property(nonatomic,weak)id<HRLocationPicker>delegate;

@end
