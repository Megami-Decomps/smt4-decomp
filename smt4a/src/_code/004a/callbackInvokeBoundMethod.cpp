#include "common.h"

struct CallbackView {
    typedef void (CallbackView::*Handler)();
    u8 unk00[0x14];
    u32 index; // 0x14
    u8 unk18[0xa968];
    Handler handlers[1]; // 0xa980
};

// Invoke the active state's optional member callback.
extern "C" void callbackInvokeBoundMethod(CallbackView *object)
{
    if (object->handlers[object->index] != NULL)
        (object->*object->handlers[object->index])();
}
