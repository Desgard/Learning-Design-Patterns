//
//  FileViewController.h
//  Composite
//
//  Created by 段昊宇 on 16/3/13.
//  Copyright © 2016年 Desgard_Duan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "File.h"

@interface FileViewController : UIViewController

/**
 *  根节点
 */
@property (nonatomic, strong) File  *rootFile;

@end
