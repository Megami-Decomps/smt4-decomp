/* NON_MATCHING: retail has trailing vtable pool bytes or different owner-register allocation. */
#include "common.h"

struct WindowState {
    /* 0x000 */ const void *vtable;
    /* 0x004 */ u8 unk04[0x5a0];
    /* 0x5a4 */ u8 mode;
};
extern "C" {
extern const u8 _ZTV9Obj4223ac[];
WindowState *FUN_0022cb58(u32 id);
void FUN_003a6c4c(WindowState *window);
/* Allocates and initializes the requested window. */
WindowState *FUN_003a8824(u32 id, u8 mode)
{
    WindowState *window = FUN_0022cb58(id);
    window->vtable = _ZTV9Obj4223ac + 0x24;
    window->mode = mode;
    FUN_003a6c4c(window);
    return window;
}
}
