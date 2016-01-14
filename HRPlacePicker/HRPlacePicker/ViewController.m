//
//  ViewController.m
//  HRPlacePicker
//
//  Created by ZhangHeng on 15/8/17.
//  Copyright (c) 2015年 ZhangHeng. All rights reserved.
//

#import "ViewController.h"
#import "HRLocationPicker.h"

@interface ViewController ()<HRLocationPicker>
{
    HRLocationPicker *picker;
}
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    picker = [[HRLocationPicker alloc] init];
    [self.view addSubview:picker];
    picker.delegate = self;
    
    UITapGestureRecognizer *tap  = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(showPicker:)];
    [self.view addGestureRecognizer:tap];
}

-(void)showPicker:(UITapGestureRecognizer *)tap{
    if(![self.view.subviews containsObject:picker]){
        [self.view addSubview:picker];
        picker.delegate = self;
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark- picker Delegate
-(void)didSelectLocation:(NSString *)placeString{
    
    
    NSLog(@"你选择的地址是:%@",placeString);
}

@end
