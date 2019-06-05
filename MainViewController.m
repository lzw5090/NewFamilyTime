//
//  MainViewController.m
//  Unity-iPhone
//
//  Created by Li Wang on 9/24/17.
//
//

#import "MainViewController.h"
#import "ARViewController.h"

@interface MainViewController ()

@end

@implementation MainViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    // My project use navigation controller just for transition animation right to left, thats why i hide it here on first view.
    
    [self.navigationController setNavigationBarHidden:YES];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma mark - Navigation




-(void)touchToLoad:(id)sender
{
    //
    // Open historyboard with Unity and Vuforia, see details on ARViewController.h/m
    
    UIStoryboard *storyBoard;
    storyBoard                      = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
    ARViewController *mainVC        = [storyBoard instantiateViewControllerWithIdentifier:@"idARViewController"];
    [self.navigationController pushViewController:mainVC animated:YES];
}

@end
