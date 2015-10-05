//
//  ZMCrystalBall.h
//  Crystal Ball
//
//  Created by Anthony Ho on 09/05/2014.
//  Copyright (c) 2014 Anthony Ho. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZMCrystalBall : NSObject {
    NSArray *_predictions;
}
@property (strong, nonatomic, readonly) NSArray *predictions;
-(NSString*)randomPrediction;
@end
