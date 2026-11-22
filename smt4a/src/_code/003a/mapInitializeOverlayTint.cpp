/* NON_MATCHING: 82 lines; the three opacity tails (0xaa, 0x99, 0x66) are shared as in retail, but retail loads 0xaa into r3 before the map tests and schedules each packed-colour tail differently */
#include "common.h"
#include "game/GameStateA.h"
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
    s32 submode = g_gameState.areaId;
    if ((g_gameState.mapId == 0x27 &&
         (submode == 8 || submode == 9 || submode == 10 || submode == 11 || submode == 6)) ||
        (g_gameState.mapId == 0x20 && submode == 1)) {
        setOverlayOpacity(map, 0xaa);
    } else if (g_gameState.mapId == 0x1c || g_gameState.mapId == 0x1d ||
               g_gameState.mapId == 0x1e || g_gameState.mapId == 0x1f) {
        setOverlayOpacity(map, 0x99);
    } else {
        setOverlayOpacity(map, 0x66);
    }
    FUN_00340c7c(0x100, 0x30000);
    map->tintInitialized = 1;
}
}
