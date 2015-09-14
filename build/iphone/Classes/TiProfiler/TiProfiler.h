/**
 * _titaniumappApp _titaniumappApp Mobile Profiler
 * Copyright (c) 2013-2014 by _titaniumappApp, Inc. All Rights Reserved.
 * Proprietary and Confidential - This source code is not for redistribution
 */
#import <JavaScriptCore/TiContextRef.h>

#ifdef __cplusplus
#define EXTERN_FUNC extern "C"
#else
#define EXTERN_FUNC extern
#endif

EXTERN_FUNC void  TiProfilerStart(NSString*, NSInteger);
EXTERN_FUNC void  TiProfilerStop();
EXTERN_FUNC void  TiProfilerDiscoveryStart(NSString*, NSArray*, void(^)(NSString *, NSInteger));
EXTERN_FUNC void  TiProfilerEnable(TiObjectRef, TiGlobalContextRef);
EXTERN_FUNC void  TiProfilerWillExecute(TiContextRef, const char*);
EXTERN_FUNC void  TiProfilerDidExecute(TiContextRef, const char*);
