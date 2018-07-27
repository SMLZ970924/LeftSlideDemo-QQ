//
//  AppDelegate.h
//  LeftSlide
//
//  Created by SMLZ on 2017/3/16.
//  Copyright © 2017年 SMLZ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

