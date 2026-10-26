#include "common.h"

extern "C" void _ZN12OnlineResultC1ERKj(void *object, const u32 *mode);

/* Invoke the shared operation with the packed pair of enabled flags. */
extern "C" void FUN_00119f9c(void *object)
{
    const u32 mode = 0x10001;
    _ZN12OnlineResultC1ERKj(object, &mode);
}
