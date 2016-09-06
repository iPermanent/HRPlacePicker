//
//  HRLocationPicker.h
//  HRPlacePicker
//
//  Created by ZhangHeng on 15/8/17.
//  Copyright (c) 2015年 ZhangHeng. All rights reserved.
//

//frame不需要设置，初始化使用init即可

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger,PlaceLoadType){
    PlaceLoadOnce = 1,  //一次载入所有，后期查内存中数据
    PlaceLoadDynamic    //每次改变都查数据库，动态加载，减少内存使用
} ;

@protocol HRLocationPicker <NSObject>

-(void)didSelectLocation:(NSString *)placeString;

@end

@interface HRLocationPicker : UIView

-(id)initWithLoadType:(PlaceLoadType)loadType;

@property(nonatomic,weak)id<HRLocationPicker>delegate;

@end
