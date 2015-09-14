/**
 * _titaniumappApp APSHTTPClient Library
 * Copyright (c) 2014 by _titaniumappApp, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */

#ifndef DebugLog
#if defined(DEBUG) || defined(DEVELOPER)
#define DebugLog(...) { NSLog(__VA_ARGS__); }
#else
#define DebugLog(...) {}
#endif
#endif

#import "APSHTTPRequest.h"
#import "APSHTTPResponse.h"
#import "APSHTTPPostForm.h"
#import "APSHTTPHelper.h"
