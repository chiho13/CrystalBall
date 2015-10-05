//
//  ZMCrystalBall.m
//  Crystal Ball
//
//  Created by Anthony Ho on 09/05/2014.
//  Copyright (c) 2014 Anthony Ho. All rights reserved.
//

#import "ZMCrystalBall.h"

@implementation ZMCrystalBall

-(NSArray *) predictions{
    if(_predictions==nil){
        _predictions=[[NSArray alloc] initWithObjects:@"It is certain",
                      @"It is decidedly so",
                      @"my Reply is no",
                      @"you're going to die",
                      @"Please tell your wife you love her",
                      @"Don't talk to me", @"you're going to be rich!",@"It is certain",@"Don't worry it will happen", nil];
    }
    return _predictions;
};

-(NSString*)randomPrediction{
    int random=arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex: random];
};
@end
