//
//  AddIdeaVC.h
//  Muhit
//
//  Created by Emre YANIK on 05/06/15.
//  Copyright (c) 2015 Muhit. All rights reserved.
//
#import "TagSelectorVC.h"
#import "KeyboardControls.h"

@interface AddIdeaVC : RootVC <KeyboardControlsDelegate,UIImagePickerControllerDelegate,UIActionSheetDelegate,UINavigationControllerDelegate,TagSelectorDelegate>

- (id)initWithInfo:(NSDictionary *)_info;

@end