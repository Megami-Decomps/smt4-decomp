#include "common.h"

extern "C" void _ZN12OnlineResultC1ERKj(void *object, const u32 *mode);

/* Invoke the shared operation with the packed pair of enabled flags. */
extern "C" void _ZN9Obj558c287vfunc08Ev(void *object)
{
    const u32 mode = 0x10001;
    _ZN12OnlineResultC1ERKj(object, &mode);
}
