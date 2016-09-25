//
//  Line.h
//  TouchTracker
//
//  Created by Austins Work on 9/24/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Line : NSObject
@property (nonatomic) CGPoint begin;
@property (nonatomic) CGPoint end;
- (instancetype)initWithBegin:(CGPoint)begin end:(CGPoint)end;
@end
