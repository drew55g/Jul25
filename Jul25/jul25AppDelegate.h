//
//  jul25AppDelegate.h
//  Jul25
//
//  Created by andrew rodney on 7/25/13.
//  Copyright (c) 2013 andrew rodney. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVAudioPlayer.h>  //needed for AVAudioPlayer

@class jul25ViewController;


@interface jul25AppDelegate : UIResponder <UIApplicationDelegate>
{
    AVAudioPlayer *music;
}

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) jul25ViewController *viewController;

@end
