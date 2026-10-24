#include "common.h"

struct LmapSceneFade {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ s32 mode;
    /* 0x58 */ f32 value;
};

extern "C" {

extern LmapSceneFade *g_lmapScene;

/* Sets the map scene's mode and its float parameter (converted from an integer). */
void FUN_002f4684(s32 mode, s32 value)
{
    g_lmapScene->mode = mode;
    g_lmapScene->value = static_cast<f32>(value);
}

} /* extern "C" */
