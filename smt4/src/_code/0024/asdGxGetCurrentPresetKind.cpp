#include "common.h"

extern "C" {

typedef struct GxPresets {
    /* 0x000 */ u8 unk000[0x16C];
    /* 0x16C */ void *current;  /* the preset in use */
} GxPresets;

extern GxPresets g_asdGxPresets;
extern u8 DAT_004e3a0c;

/* Returns which preset is current: 0 for the default one, 1 for the one at 0x4E3A0C, 2 otherwise. */
u32 asdGxGetCurrentPresetKind(void)
{
    if (g_asdGxPresets.current == &g_asdGxPresets) {
        return 0;
    }
    if (g_asdGxPresets.current == &DAT_004e3a0c) {
        return 1;
    }
    return 2;
}

} /* extern "C" */
