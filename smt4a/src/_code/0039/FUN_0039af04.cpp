/* NON_MATCHING: retail loads g_eventTex into r1 before initialising the index; built initialises the index first */
#include "common.h"

extern "C" {

typedef struct EventTexSlots {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *entry[16];
} EventTexSlots;

extern EventTexSlots *g_eventTex;

/* Returns 1 if any pair of consecutive slots (stepping by two) has an empty slot, else 0. */
u32 FUN_0039af04(void)
{
    s32 i = 0;

    while (1) {
        if (g_eventTex->entry[i] == NULL || g_eventTex->entry[i + 1] == NULL) {
            return 1;
        }
        i += 2;
        if (i >= 16) {
            return 0;
        }
    }
}

} /* extern "C" */
