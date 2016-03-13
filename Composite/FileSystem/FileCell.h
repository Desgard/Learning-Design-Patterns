//
//  FileCell.m
//  Composite
//
//  Created by 段昊宇 on 16/3/13.
//  Copyright © 2016年 Desgard_Duan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FileCell : UITableViewCell

@property (nonatomic, weak) id                data;
@property (nonatomic, weak) NSIndexPath      *indexPath;
@property (nonatomic, weak) UITableView      *tableView;
@property (nonatomic, weak) UIViewController *controller;

- (void)loadContent;

@end
