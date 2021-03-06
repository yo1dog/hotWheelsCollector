//
//  UICarGridView.h
//  HotWheels 2.0
//
//  Created by Mike on 4/6/14.
//  Copyright (c) 2014 Mike. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CarWrapper.h"
#import "CarCell.h"

@protocol UICarGridViewDelegate
- (void)carWrapperSelected:(CarWrapper *) carWrapper;
- (void)moreButtonPressed:(UIButton *) moreButton;
@end

@interface UICarGridView : UIScrollView
@property int topPadding;
@property (nonatomic, assign) id<UICarGridViewDelegate> carGridViewDelegate;

- (void)setCars:(NSMutableArray *) cars;
- (void)setCars:(NSMutableArray *) cars showMoreButton:(bool) showMoreButton;
- (void)addCars:(NSMutableArray *) cars;
- (void)addCars:(NSMutableArray *) cars showMoreButton:(bool) showMoreButton;

- (void)sortCells:(NSComparisonResult (^)(CarCell* carCellA, CarCell*  carCellB)) comparator;
@end
