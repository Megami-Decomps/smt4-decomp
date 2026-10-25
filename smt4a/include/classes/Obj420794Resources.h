#ifndef CLASSES_OBJ420794RESOURCES_H
#define CLASSES_OBJ420794RESOURCES_H

#include "common.h"

extern "C" void textureOwnerReset(u32 handle);
extern "C" void asdOperatorDelete(void *block);

/* Resource ownership operations used by the screen filters in Apocalypse. */
static __inline void obj420794ReleaseTexture(u32 handle)
{
    textureOwnerReset(handle);
}

static __inline void obj420794FreeBlock(void *block)
{
    asdOperatorDelete(block);
}

#endif
