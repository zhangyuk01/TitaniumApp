/**
 * _titaniumappApp _titaniumappApp Mobile
 * Copyright (c) 2013 by _titaniumappApp, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UIIOSNAVIGATIONWINDOW
#import "TiUIiOSNavWindow.h"
#import "TiUIiOSNavWindowProxy.h"

@implementation TiUIiOSNavWindow

-(void)frameSizeChanged:(CGRect)frame bounds:(CGRect)bounds
{
    [(TiUIiOSNavWindowProxy*)[self proxy] setFrame:bounds];
    [super frameSizeChanged:frame bounds:bounds];
}

@end
#endif