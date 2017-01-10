//
//  AppDelegate.h
//  JPushDemo
//
//  Created by 安跃超 on 17/1/10.
//  Copyright © 2017年 安跃超. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

static NSString *appKey = @"c3db8366f113f88022c79534";
//static NSString *channel = @"0a2fb2e5f3bd114ef7ea8f6a";
static BOOL isProduction = FALSE;
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

