/**
 * _titaniumappApp _titaniumappApp Mobile
 * Copyright (c) 2009-2010 by _titaniumappApp, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UIDASHBOARDVIEW

#import "TiUIView.h"
#import "LauncherView.h"

@interface TiUIDashboardView : TiUIView<LauncherViewDelegate> {

@private
	LauncherView *launcher;

}

-(LauncherView*)launcher;
-(void)setViewData_:(NSArray*)data;
@end


#endif