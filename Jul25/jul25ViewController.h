//
//  jul25ViewController.h
//  Jul25
//
//  Created by andrew rodney on 7/25/13.
//  Copyright (c) 2013 andrew rodney. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVAudioPlayer.h>  //needed for AVAudioPlayer



@interface jul25ViewController : UIViewController
{
  AVAudioPlayer *music;
  AVAudioPlayer *music2;
}


@property (weak, nonatomic) IBOutlet UILabel *display;

- (IBAction)buttonpressed:(UIButton *)sender;
- (IBAction)honk:(UIButton *)sender;

@end
