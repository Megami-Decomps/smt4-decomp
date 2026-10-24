#include "common.h"

struct LmapScene003792e8 {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u32 mode;
    /* 0x58 */ f32 amount;
    /* 0x5c */ u8 active;
};

extern "C" {

extern LmapScene003792e8 *g_lmapScene;

/* Starts the map scene effect: mode and amount, marked active. */
void FUN_003792e8(u32 mode, s32 amount)
{
    g_lmapScene->mode = mode;
    g_lmapScene->active = 1;
    g_lmapScene->amount = (f32)amount;
}

} /* extern "C" */
