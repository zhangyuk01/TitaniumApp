/**
 * _titaniumappApp _titaniumappApp Mobile
 * Copyright (c) 2010 by _titaniumappApp, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */

#if defined(USE_TI_FILESYSTEM) || defined(USE_TI_DATABASE) || defined(USE_TI_MEDIA)

#import "TiStreamProxy.h"

@interface TiFilesystemFileStreamProxy : TiStreamProxy<TiStreamInternal> {

@private
	NSFileHandle *fileHandle;
	TiStreamMode mode;
}

@end

#endif