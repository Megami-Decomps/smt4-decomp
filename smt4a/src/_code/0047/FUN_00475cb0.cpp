/* NON_MATCHING: constructor base stores and size initialization allocate registers differently. */
#include "common.h"
struct WindowSize { u32 first; u32 second; };
struct WindowState { const u8 *vtable; u32 state; u32 flags; WindowSize size; s32 selection; };
extern "C" {
extern u8 DAT_0055c68c[];
extern u8 DAT_0055c758[];
WindowSize *FUN_001b5acc(WindowSize *size);
WindowSize *FUN_001b57a8(WindowSize *size, u32 value);
/* Initializes the window's base state, size and final dispatch table. */
WindowState *FUN_00475cb0(WindowState *window) {
    window->vtable = DAT_0055c68c;
    window->state = 0;
    window->flags = 0xE7E3FFFF;
    WindowSize *size = FUN_001b5acc(&window->size);
    window = (WindowState *)((u8 *)size - 12);
    window->selection = -1;
    window->vtable = DAT_0055c758 + 0;
    window->state = 0;
    WindowSize initialSize;
    window->size = *FUN_001b57a8(&initialSize, 0);
    return window;
}
}
