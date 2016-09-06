//
//  HRLocationItem.h
//  HRPlacePicker
//
//  Created by ZhangHeng on 15/8/17.
//  Copyright (c) 2015年 ZhangHeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HRLocationItem : NSObject
@property(nonatomic,assign)int      locationId;
@property(nonatomic,assign)int      fatherId;
@property(nonatomic,strong)NSString *locationName;
@property(nonatomic,strong)NSMutableArray   *subPlaces;

@end
