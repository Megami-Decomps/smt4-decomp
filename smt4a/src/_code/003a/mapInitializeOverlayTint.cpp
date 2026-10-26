/* NON_MATCHING: the per-channel packed-colour sequence (MaterialPackedColor bitfields, red-green-blue then alpha, uninitialised base register) now matches retail's tails; retail shares three tails (0x66/0xaa/0x99 constants, 0xaa preloaded in r3) where the build duplicates the tail per leaf. */
#include "common.h"
#include "gfx/MaterialColorCommand.h"
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

// Set the overlay's colour: black with the given opacity.
static __inline void setOverlayOpacity(MapMainState *map, u32 alpha)
{
    MaterialPackedColor color;
    color.channels.red = 0;
    color.channels.green = 0;
    color.channels.blue = 0;
    color.channels.alpha = alpha;
    map->node->material->color = color.value;
}

// Initialize the map overlay opacity for the current game mode and submode.
void mapInitializeOverlayTint()
{
    MapMainState *map = g_mapMain;
    if (map == NULL || map->tintInitialized) {
        return;
    }
    if (g_gameState.mode == 0x27) {
        s32 submode = g_gameState.submode;
        if (submode == 8 || submode == 9 || submode == 10 || submode == 11 || submode == 6) {
            setOverlayOpacity(map, 0xaa);
        } else {
            setOverlayOpacity(map, 0x66);
        }
    } else if (g_gameState.mode == 0x20) {
        if (g_gameState.submode == 1) {
            setOverlayOpacity(map, 0xaa);
        } else {
            setOverlayOpacity(map, 0x66);
        }
    } else if (g_gameState.mode == 0x1c || g_gameState.mode == 0x1d ||
               g_gameState.mode == 0x1e || g_gameState.mode == 0x1f) {
        setOverlayOpacity(map, 0x99);
    } else {
        setOverlayOpacity(map, 0x66);
    }
    FUN_00340c7c(0x100, 0x30000);
    map->tintInitialized = 1;
}
}
