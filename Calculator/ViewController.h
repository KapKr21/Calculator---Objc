//
//  ViewController.h
//  Calculator
//
//  Created by Kapil Khatri on 16/04/19.
//  Copyright © 2019 Kapil. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    float currentNumber,result;
    int currentOperation;
}

@property (weak, nonatomic) IBOutlet UILabel *label;

- (IBAction)digitPressed:(id)sender;
- (IBAction)cancelOperation:(id)sender;
- (IBAction)operationPressed:(id)sender;





@end

