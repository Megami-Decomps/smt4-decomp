#include "common.h"
#include "shard/S1GfxModel.h"

extern "C" {

extern void (*_ZTV9Obj44e8a8[])(u32 *object);

/* Forwards the object a pointer refers to to the handler for its type tag; unknown tags do nothing. */
void FUN_002c3364(u32 **ref)
{
    u32 *object = *ref;
    void (**handlers)(u32 *) = _ZTV9Obj44e8a8 + 7;

    switch (*object) {
    case 0x20000011:
        handlers[0](object);
        break;
    case 0x20000009:
        handlers[1](object);
        break;
    case 0x20000004:
        handlers[2](object);
        break;
    case 0x20000002:
        handlers[3](object);
        break;
    case 0x20000021:
        handlers[4](object);
        break;
    }
}

} /* extern "C" */
