#ifndef CLASSES_OBJ422594DELETE_H
#define CLASSES_OBJ422594DELETE_H

/* How Obj422594 and its subclasses free their storage in SMT IV. */
#include "AsdSDK/AsdMemUtil.h"

static __inline void obj422594FreeBlock(void *block)
{
    asdMemFreeNonNull(block);
}

#endif
