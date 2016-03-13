//
//  File.m
//  FileSystem
//
//  Created by 段昊宇 on 16/3/13.
//  Copyright © 2016年 Desgard_Duan. All rights reserved.
//

#import "File.h"

@interface File ()

@property (nonatomic, strong) NSMutableArray <File *>  *childFiles;

@end

@implementation File

- (instancetype)init {
    
    self = [super init];
    if (self) {
    
        self.childFiles = [NSMutableArray array];
    }
    
    return self;
}

- (void)addFile:(File *)file {

    NSParameterAssert(file);
    [self.childFiles addObject:file];
}

+ (instancetype)fileWithFileType:(EFile)fileType fileName:(NSString *)name {

    File *file    = [[[self class] alloc] init];
    file.fileType = fileType;
    file.name     = name;
    
    return file;
}

@end
