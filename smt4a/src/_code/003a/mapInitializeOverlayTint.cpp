/* NON_MATCHING: retail builds RGBA through per-channel mask/shift operations; direct packed-color assignment compiles smaller. */
#include "common.h"
#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W6_W6Match8_MapMain.h"

struct MapTintColor {
    u8 unk00[0x20];
    u32 color;
};
struct MapTintNode {
    u8 unk00[0x14];
    MapTintColor *material;
};

extern "C" {
extern MapMainState *g_mapMain;
void FUN_00340c7c(u32 duration, u32 flags);

// Initialize the map overlay opacity for the current game mode and submode.
void mapInitializeOverlayTint()
{
    MapMainState *map = g_mapMain;
    if (map == NULL || map->tintInitialized) {
        return;
    }
    u32 color = 0x66000000;
    if (g_gameState.mode == 0x27) {
        s32 submode = g_gameState.submode;
        if (submode == 8 || submode == 9 || submode == 10 || submode == 11 || submode == 6) {
            color = 0xaa000000;
        }
    } else if (g_gameState.mode == 0x20) {
        if (g_gameState.submode == 1) {
            color = 0xaa000000;
        }
    } else if (g_gameState.mode == 0x1c || g_gameState.mode == 0x1d ||
               g_gameState.mode == 0x1e || g_gameState.mode == 0x1f) {
        color = 0x99000000;
    }
    map->node->material->color = color;
    FUN_00340c7c(0x100, 0x30000);
    map->tintInitialized = 1;
}
}
