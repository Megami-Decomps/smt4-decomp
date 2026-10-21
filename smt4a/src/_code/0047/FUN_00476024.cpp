/* NON_MATCHING: retail constructor recovers enclosing this from the returned embedded result pointer. */
#include "shard/W5_W5Match4_WindowInit.h"
struct DerivedWindowInitState { WindowInitState base; u32 value; u8 active; };
extern "C" {
extern const u32 DAT_0055c68c[];
extern const u32 DAT_0055c788[];
WindowResult *FUN_001b5acc(WindowResult *result);
WindowResult *resultPairInitialize(WindowResult *result, s32 value);
/* Initializes the base result and the derived window's extra state. */
DerivedWindowInitState *FUN_00476024(DerivedWindowInitState *window)
{
    window->base.vtable = DAT_0055c68c;
    window->base.reserved = 0;
    window->base.status = 0xe7e3ffff;
    FUN_001b5acc(&window->base.result);
    window->base.state = -1;
    window->base.vtable = DAT_0055c788;
    window->value = 0;
    window->active = 0;
    window->base.reserved = 0;
    WindowResult result;
    window->base.result = *resultPairInitialize(&result, 0);
    return window;
}
}
