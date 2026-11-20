#include "common.h"
#include "code/Code0029.h"

namespace { struct Object { u8 padding[0x62]; u8 disabled; }; }

extern "C" {
/* Reads or forwards the current state. */
u32 objectGetLengthField(const Object *object);
u32 uiListGetVisibleCount(const void *handle)
{
    const Object *object = static_cast<const Object *>(handle);
    if (object->disabled != 0) {
        return 0;
    }
    return objectGetLengthField(object);
}
}
