/* NON_MATCHING: named global fields compile to individual literal bases rather than retail's shared music-module base. */
#include "common.h"
#include "mikado/mikadoMain.h"

// This music gate lies beyond the shared map-main state prefix.
struct MapBgmGate { u8 unk000[0x9e1]; s8 blocked; };
extern "C" {
extern MapBgmGate *g_mapMainState;
extern u32 DAT_005f1628;
extern s8 DAT_005f1749;
extern s8 DAT_005f1776;
s32 gameFlagIsSet(u32 flag);
s32 bgmGetStateById(u32 id);
void FUN_003d4c68(u32 id);

// Select the map music variant from story flags, avoiding restarts while it is active.
void FUN_002df914()
{
    if (!DAT_005f1776 && DAT_005f1749 && !g_mapMainState->blocked) {
        DAT_005f1628 = 0x100003e;
        if (gameFlagIsSet(0x137) && !gameFlagIsSet(0x189))
            DAT_005f1628 = 0x1000074;
        if (gameFlagIsSet(0x147) && !gameFlagIsSet(0x171))
            DAT_005f1628 = 0x100003e;
        s32 state = bgmGetStateById(DAT_005f1628);
        if (state == 1 || state == 2)
            return;
        if (state != 0)
            bgmReleaseStopped();
        FUN_003d4c68(DAT_005f1628);
    } else {
        bgmReleaseStopped();
        DAT_005f1749 = 0;
    }
}
}
