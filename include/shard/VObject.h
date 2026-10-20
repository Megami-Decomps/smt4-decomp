/* An object known only by its vtable pointer: the destructors and deleting destructors in the
 * shard folders only store or read the vtable and hand the rest to member destructors. */
#ifndef SHARD_VOBJECT_H
#define SHARD_VOBJECT_H

#include "common.h"

typedef struct VObject {
    /* 0x00 */ const void *vtbl;
} VObject;

#endif
