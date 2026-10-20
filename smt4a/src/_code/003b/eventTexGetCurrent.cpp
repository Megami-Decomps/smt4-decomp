#include "common.h"

extern "C" {

typedef struct EventTex {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 current;
} EventTex;

extern EventTex *g_eventTex;

/* Returns the event texture block's current value, or 0 when there is no block. */
u32 eventTexGetCurrent(void)
{
    if (g_eventTex == NULL) {
        return 0;
    }
    return g_eventTex->current;
}

} /* extern "C" */
