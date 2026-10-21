#include "common.h"

namespace { struct Object { u8 padding[0x28]; u8 part[0x3a]; u8 disabled; }; }

extern "C" {
/* Updates or returns the requested state. */
u32 FUN_002d5720(const void *part);
u32 FUN_0029e93c(const Object *object)
{
    if (object->disabled != 0) {
        return 0;
    }
    return FUN_002d5720(object->part);
}
}
