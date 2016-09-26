//
//  DrawView.h
//  TouchTracker
//
//  Created by Austins Work on 9/24/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Line.h"

@interface DrawView : UIView <UIGestureRecognizerDelegate>
@property (nonatomic) NSMutableDictionary *currentLines;
@property (nonatomic) NSMutableArray *finishedLines;
@property (nonatomic, weak) Line *selectedLine;
@property (nonatomic) UIPanGestureRecognizer *moveRecognizer;
@end
