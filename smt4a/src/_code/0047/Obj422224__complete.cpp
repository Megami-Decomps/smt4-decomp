#include "common.h"

struct ObjectCompletionState {
    /* 0x00 */ u8 unk00[0xb0];
    /* 0xB0 */ u32 pending;
};

/* Clear the object's pending operation. */
extern "C" void _ZN9Obj4222248completeEv(ObjectCompletionState *object)
{
    object->pending = 0;
}
