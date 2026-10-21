#include "common.h"

namespace { struct Object { u8 padding[0x62]; u8 disabled; }; }

extern "C" {
/* Reads or forwards the current state. */
u32 FUN_002fc240(const Object *object);
u32 FUN_0029d644(const Object *object)
{
    if (object->disabled != 0) {
        return 0;
    }
    return FUN_002fc240(object);
}
}
