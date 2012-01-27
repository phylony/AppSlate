//
//  RSMaskedLabel.h
//  RSMaskedLabel
//
//  Created by Robin Senior on 12-01-04.
//  Copyright (c) 2012 Robin Senior. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RSMaskedLabel : UIView

@property (nonatomic, strong) NSString *text;

-(UIFont*) getFont;
- (void) setFont:(UIFont*) font;

@end
