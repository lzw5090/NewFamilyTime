//
//  mainAppController.m
//  Unity-iPhone
//
//  Created by Li Wang on 9/24/17.
//
//

#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "UI/UnityView.h"
#import "UI/UnityViewControllerBase.h"
#import "VuforiaRenderDelegate.h"


#import "MainViewController.h"




#if UNITY_VERSION>434

extern "C" void UnitySetGraphicsDevice(void* device, int deviceType, int eventType);
extern "C" void UnityRenderEvent(int marker);



extern "C" void VuforiaSetGraphicsDevice(void* device, int deviceType, int eventType);
extern "C" void VuforiaRenderEvent(int marker);

#endif

@interface mainAppController : UnityAppController<UIApplicationDelegate>



@property (nonatomic, strong) UINavigationController *navigationController;

- (void)willStartWithViewController:(UIViewController*)controller;
- (void)shouldAttachRenderDelegate;

@end



@implementation mainAppController


- (void)shouldAttachRenderDelegate
{
    
    self.renderDelegate = [[VuforiaRenderDelegate alloc] init];
    
#if UNITY_VERSION>434
    
    UnityRegisterRenderingPlugin(&VuforiaSetGraphicsDevice, &VuforiaRenderEvent);
#endif
    
}


- (void)willStartWithViewController:(UIViewController*)controller {
    
    
    UIStoryboard *storyBoard;
    storyBoard = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
    
    _rootController         = [[UnityDefaultViewController alloc] init];
    _rootView               = [[UIView alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    _rootController.view    = _rootView;
    
    MainViewController *mainVC       = [storyBoard instantiateViewControllerWithIdentifier:@"idMainViewController"];
    
    self.navigationController = [[UINavigationController alloc] initWithRootViewController:mainVC];
    
    [_rootView addSubview:self.navigationController.view];
}

@end



IMPL_APP_CONTROLLER_SUBCLASS(mainAppController)
