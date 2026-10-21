#include "common.h"

namespace { struct Object { u8 padding[0x62]; u8 disabled; }; }

extern "C" {
/* Reads or updates the current object state. */
u32 FUN_002d5718(const Object *object);
u32 FUN_0029ee54(const Object *object)
{
    if (object->disabled != 0) {
        return 0;
    }
    return FUN_002d5718(object);
}
}
