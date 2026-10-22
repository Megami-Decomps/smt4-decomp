#include "common.h"

struct MapZoomState {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 mode;
    /* 0x10 */ f32 phase;
    /* 0x14 */ s32 offset;
};

extern "C" {

extern MapZoomState g_mapTable;

f32 FUN_001bc124(f32 phase);

/* Advances the phase by the mode's step (0.1, 0.2 or 0.05) and derives the offset from it, with an
 * amplitude of 32 for modes 1-3 and 48 for modes 4-6. */
void mapTableStepWave(void)
{
    g_mapTable.offset = 0;
    switch (g_mapTable.mode) {
    case 1:
        g_mapTable.phase += 0.1f;
        g_mapTable.offset = (s32)(FUN_001bc124(g_mapTable.phase) * 32.0f);
        break;
    case 2:
        g_mapTable.phase += 0.2f;
        g_mapTable.offset = (s32)(FUN_001bc124(g_mapTable.phase) * 32.0f);
        break;
    case 3:
        g_mapTable.phase += 0.05f;
        g_mapTable.offset = (s32)(FUN_001bc124(g_mapTable.phase) * 32.0f);
        break;
    case 4:
        g_mapTable.phase += 0.1f;
        g_mapTable.offset = (s32)(FUN_001bc124(g_mapTable.phase) * 48.0f);
        break;
    case 5:
        g_mapTable.phase += 0.2f;
        g_mapTable.offset = (s32)(FUN_001bc124(g_mapTable.phase) * 48.0f);
        break;
    case 6:
        g_mapTable.phase += 0.05f;
        g_mapTable.offset = (s32)(FUN_001bc124(g_mapTable.phase) * 48.0f);
        break;
    }
}

} /* extern "C" */
