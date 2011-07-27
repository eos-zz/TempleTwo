//
//  TempleTwoAppDelegate.h
//  TempleTwo
//
//  Created by Jeff Daniels on 7/27/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TempleTwoViewController;

@interface TempleTwoAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet TempleTwoViewController *viewController;

@end
