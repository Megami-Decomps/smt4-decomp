#include "common.h"

class MenuCallbackDispatchIV {
public:
    typedef void (MenuCallbackDispatchIV::*Handler)();
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ s32 handlerIndex;
    /* 0x0018 */ u8 unk0018[0xa608];
    /* 0xA620 */ Handler handlers[1];
};

// Invoke the handler selected for the second dispatch table when one has been installed.
extern "C" void _ZN9Obj4224485unk14Ev(MenuCallbackDispatchIV *menu)
{
    if (menu->handlers[menu->handlerIndex] != NULL)
        (menu->*menu->handlers[menu->handlerIndex])();
}
