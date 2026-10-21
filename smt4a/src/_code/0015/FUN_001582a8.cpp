/* NON_MATCHING: retail uses mov r0, r1 where the compiled block uses mov r0, r1. */
#include "common.h"

extern "C" {
typedef void CallbackFunction(u32 value);
}

struct CallbackSlot {
    CallbackFunction* callback; // 0x00
};

extern "C" void FUN_001582a8(CallbackSlot* slot, u32 value)
{
    CallbackFunction* callback = slot->callback;
    if (callback != NULL) {
        callback(value);
    }
}
