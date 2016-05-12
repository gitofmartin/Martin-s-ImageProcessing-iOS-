//
//  ViewController.h
//  GGrayTest
//
//  Created by Johan Holland on 01/28/2016.
//  Copyright (c) 2016 com.johan.GGrayTest. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ViewController : UIViewController
{
	IBOutlet UISlider *slider;
	IBOutlet UITabBar *tabBar;	
}

@property (nonatomic, retain) UISlider *slider;
@property (nonatomic, retain) UITabBar *tabBar;

- (IBAction)sliderAction:(id)sender;

@end
