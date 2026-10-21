/* NON_MATCHING: retail constructor recovers enclosing this from the returned embedded result pointer. */
#include "shard/W5_W5Match4_WindowInit.h"
struct DerivedWindowInitState { WindowInitState base; u32 value; u8 active; };
extern "C" {
extern const u32 DAT_00422184[];
extern const u32 DAT_00422280[];
WindowResult *FUN_002bad5c(WindowResult *result);
WindowResult *resultPairInitialize(WindowResult *result, s32 value);
/* Initializes the base result and the derived window's extra state. */
DerivedWindowInitState *FUN_0038d500(DerivedWindowInitState *window)
{
    window->base.vtable = DAT_00422184;
    window->base.reserved = 0;
    window->base.status = 0xe7e3ffff;
    FUN_002bad5c(&window->base.result);
    window->base.state = -1;
    window->base.vtable = DAT_00422280;
    window->value = 0;
    window->active = 0;
    window->base.reserved = 0;
    WindowResult result;
    window->base.result = *resultPairInitialize(&result, 0);
    return window;
}
}
