/* NON_MATCHING: retail has trailing vtable pool bytes or different owner-register allocation. */
#include "common.h"

struct AocState {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u8 resources[1];
};
struct WindowState { const void *vtable; };
extern "C" {
extern AocState *g_aocMain;
void FUN_002ba8f4(void *resources);
void asdMemFreeNonNull(void *memory);
/* Releases the window's resources and heap storage. */
void FUN_0038b124(WindowState *window, const void *vtable)
{
    window->vtable = vtable;
    FUN_002ba8f4(g_aocMain->resources);
    asdMemFreeNonNull(window);
}
}
