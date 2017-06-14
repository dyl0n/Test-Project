//
//  AppDelegate.h
//  Test Project
//
//  Created by Dylan Saldana on 6/13/17.
//  Copyright © 2017 Dyl0n and Arod92. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

