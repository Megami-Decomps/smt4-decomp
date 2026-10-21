/* NON_MATCHING: member-pointer pair loads use the opposite base register/order; native callback ABI and tail dispatch otherwise agree. */
#include "common.h"

struct PlaceWindowDispatch {
    typedef void (PlaceWindowDispatch::*Handler)();
    u32 unk00;
    s32 state; // 0x04
    u8 unk08[0x1c];
    Handler handlers[1]; // 0x24: state-indexed member-function callbacks
};

extern "C" {
void FUN_0049ae34(PlaceWindowDispatch *);

void FUN_00499338(PlaceWindowDispatch *window)
{
    PlaceWindowDispatch::Handler handler = window->handlers[window->state];
    if (handler != NULL)
        (window->*handler)();
    FUN_0049ae34(window);
}
}
