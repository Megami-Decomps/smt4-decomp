#include "common.h"

extern "C" {
typedef u32 CallbackFunction(u32 value);
}

struct CallbackSlot {
    CallbackFunction* callback; // 0x00
};

// Pass `value` through the slot's callback, or return it unchanged when no callback is set.
extern "C" u32 callbackSlotInvokeOrPassThrough(CallbackSlot* slot, u32 value)
{
    CallbackFunction* callback = slot->callback;
    if (callback != NULL) {
        return callback(value);
    }
    return value;
}
