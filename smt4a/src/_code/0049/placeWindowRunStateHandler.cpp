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

void placeWindowRunStateHandler(PlaceWindowDispatch *window)
{
    if (window->handlers[window->state] != NULL)
        (window->*window->handlers[window->state])();
    FUN_0049ae34(window);
}
}
