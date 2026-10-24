/* NON_MATCHING: base call setup and zero-state stores use different registers. */
#include "common.h"
struct WindowState { const void *vtable; u8 unk04[88]; s32 selection; u8 unk60[12]; u32 state; };
extern "C" {
extern u8 DAT_0055c7b8[];
WindowState *_ZN9Obj55c81cC1Ej(WindowState *window,u32 state);
/* Initializes this window's state after its shared base. */
WindowState *_ZN19ControllerFirstKindC1Ev(WindowState *window) { window=_ZN9Obj55c81cC1Ej(window,0);window->state=0;window->vtable=DAT_0055c7b8;window->selection=-1;return window; }
}
