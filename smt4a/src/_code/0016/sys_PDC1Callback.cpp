#include "common.h"

struct DisplayCallbackState {
    /* 0x000 */ u8 unk000[0x154];
    /* 0x154 */ s32 counters[2];
    /* 0x15C */ void (*callbacks[2])(u32 display);
};

extern "C" {

extern DisplayCallbackState g_asdGfxContext;

/* Dispatches the display callback and advances its bounded counter. */
void sys_PDC1Callback(void)
{
    if (g_asdGfxContext.callbacks[1] != NULL) {
        g_asdGfxContext.callbacks[1](0x401);
    }
    g_asdGfxContext.counters[1] = (g_asdGfxContext.counters[1] + 1) % 0x7FFFFFFF;
}

} /* extern "C" */
