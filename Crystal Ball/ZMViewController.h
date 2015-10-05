//
//  ZMViewController.h
//  Crystal Ball
//
//  Created by Anthony Ho on 07/05/2014.
//  Copyright (c) 2014 Anthony Ho. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>

@class ZMCrystalBall;

@interface ZMViewController : UIViewController
@property (nonatomic, strong) IBOutlet UILabel *predictionLabel;
@property(nonatomic, strong) ZMCrystalBall *crystalBall;

-(void)makePrediction;

@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

@end

