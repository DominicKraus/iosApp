//
//  DDCFlipsideViewController.h
//  Bluetoth
//
//  Created by Dominic Kraus on 23.02.14.
//  Copyright (c) 2014 Dominic Kraus. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DDCFlipsideViewController;

@protocol DDCFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(DDCFlipsideViewController *)controller;
- (void)didSelectNewScale:(NSString *)scale;
@end

@interface DDCFlipsideViewController : UIViewController

@property (weak, nonatomic) id <DDCFlipsideViewControllerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UITableView *scaleTable;
@property (weak, nonatomic) IBOutlet UISlider *brigthnessSlider;
@property (weak, nonatomic) IBOutlet UIPickerView *unitPicker;


- (IBAction)done:(id)sender;
- (IBAction)didChangeBrightnessValue:(id)sender;


@end
