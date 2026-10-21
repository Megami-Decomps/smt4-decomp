/* NON_MATCHING: the UI base/derived constructor hierarchy is not recovered; this typed initialization view preserves the owner explicitly. */
#include "shard/W5_W5Match4_WindowInit.h"

extern "C" {

extern const u8 DAT_00422184[];
extern const u8 DAT_00422298[];
void FUN_002bad5c(WindowResult *result);
void FUN_002baa40(WindowResult *result, u32 code);

/* Initializes the window's status and translated result pair. */
WindowInitState *FUN_0038e204(WindowInitState *window)
{
    window->vtable = DAT_00422184;
    window->reserved = 0;
    window->status = 0xe7e3ffff;
    FUN_002bad5c(&window->result);
    window->state = -1;
    window->vtable = DAT_00422298;
    window->reserved = 0;
    WindowResult result;
    FUN_002baa40(&result, 0);
    window->result = result;
    return window;
}

}
