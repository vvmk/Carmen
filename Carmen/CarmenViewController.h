//
//  CarmenViewController.h
//  Carmen
//
//  Created by Vincent Masiello on 5/26/11.
//  Copyright 2011 Apollic Software, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreLocationController.h"

@interface CarmenViewController : UIViewController <CLLocationManagerDelegate, UITextFieldDelegate> {
    CLLocationManager *locationManager;
    
    BOOL isRunning;
    
    IBOutlet UISwitch *toggle;
    IBOutlet UISlider *pollingTimeout;
    IBOutlet UISlider *pollingRadius;
    IBOutlet UIButton *offButton;
    IBOutlet UIButton *onButton;
    IBOutlet UITextField *callbackField;
    IBOutlet UILabel *lblSecret;
}
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) IBOutlet UISwitch *toggle;
@property (nonatomic, retain) IBOutlet UISlider *pollingTimeout;
@property (nonatomic, retain) IBOutlet UISlider *pollingRadius;
@property (nonatomic, retain) IBOutlet UIButton *onButton;
@property (nonatomic, retain) IBOutlet UIButton *offButton;
@property (nonatomic, retain) IBOutlet UITextField *callbackField;
@property (nonatomic, retain) IBOutlet UILabel *lblSecret;

- (IBAction)toggleService:(UIButton *)sender;
- (IBAction)sliderChanged:(id)sender;
- (IBAction)hideKeyboard:(id)sender;
- (void)stopUpdatingLocation:(NSString *)state;
- (void)switchToBackgroundMode:(BOOL)background;
- (void)slideViewMovedUp:(BOOL)movedUp ;
@end
