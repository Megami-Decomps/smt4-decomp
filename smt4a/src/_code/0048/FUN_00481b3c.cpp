/* NON_MATCHING: base call setup and zero-state stores use different registers. */
#include "common.h"
struct WindowState { const void *vtable; u8 unk04[88]; s32 selection; u8 unk60[12]; u32 state; };
extern "C" {
extern u8 DAT_0055c7b8[];
WindowState *FUN_00482758(WindowState *window,u32 state);
/* Initializes this window's state after its shared base. */
WindowState *FUN_00481b3c(WindowState *window) { window=FUN_00482758(window,0);window->state=0;window->vtable=DAT_0055c7b8;window->selection=-1;return window; }
}
