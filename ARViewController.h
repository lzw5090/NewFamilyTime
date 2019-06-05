//
//  ARViewController.h
//  Unity-iPhone
//
//  Created by Li Wang on 9/24/17.
//
//

#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "UI/UnityView.h"
#import "UI/UnityViewControllerBase.h"


@interface ARViewController : UIViewController
{
    IBOutlet UIView     *viewToUnity;
    UnityDefaultViewController *unityViewController;
    UnityAppController *unityController;
}

-(IBAction) goBack:(id)sender;

@end
