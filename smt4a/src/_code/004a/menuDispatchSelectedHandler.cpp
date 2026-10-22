#include "common.h"

class MenuCallbackDispatch {
public:
    typedef void (MenuCallbackDispatch::*Handler)();
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ s32 handlerIndex;
    /* 0x0018 */ u8 unk0018[0xa8e0];
    /* 0xA8F8 */ Handler handlers[1];
};

/* Invoke the selected menu handler if a callback has been installed. */
extern "C" void menuDispatchSelectedHandler(MenuCallbackDispatch *menu)
{
    if (menu->handlers[menu->handlerIndex] != NULL)
        (menu->*menu->handlers[menu->handlerIndex])();
}
