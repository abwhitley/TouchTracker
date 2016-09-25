//
//  Line.m
//  TouchTracker
//
//  Created by Austins Work on 9/24/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#import "Line.h"

@implementation Line
- (instancetype)initWithBegin:(CGPoint)begin end:(CGPoint)end
{
    self = [super init];
    if (self) {
        _begin = begin;
        _end = end; }
    return self;
}
@end
