#include "common.h"

extern "C" void FUN_002e7908(void *object, const u32 *mode);

/* Invoke the shared operation with the packed pair of enabled flags. */
extern "C" void FUN_0010a044(void *object)
{
    const u32 mode = 0x10001;
    FUN_002e7908(object, &mode);
}
