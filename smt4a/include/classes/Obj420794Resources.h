#ifndef CLASSES_OBJ420794RESOURCES_H
#define CLASSES_OBJ420794RESOURCES_H

#include "common.h"

extern "C" s32 bufferHandleRelease(u32 handle);
extern "C" void asdOperatorDelete(void *block);

/* Resource ownership operations used by the screen filters in Apocalypse. */
static __inline void obj420794ReleaseTexture(u32 handle)
{
    bufferHandleRelease(handle);
}

static __inline void obj420794FreeBlock(void *block)
{
    asdOperatorDelete(block);
}

#endif
