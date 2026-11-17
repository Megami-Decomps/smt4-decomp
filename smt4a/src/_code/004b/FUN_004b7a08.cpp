#include "shard/W5_W5Match7_SceneState.h"
#include "game/GameStateA.h"

struct DepartureArea {
    u8 unk00[0x20]; // 0x00
    u8 area;         // 0x20
};

struct DepartureSource {
    u8 unk0000[0x3c]; // 0x0000
    s16 map;           // 0x003c
    u8 unk003e[0x10de]; // 0x003e
    DepartureArea* area; // 0x111c
};

// Seed both ends of a map transition from the selected departure source.
extern "C" void FUN_004b7a08(const DepartureSource* source)
{
    g_gameState.savedLocationSet = 1;
    s32 map = source->map + 200;
    g_gameState.savedMapId = map;
    g_gameState.targetMapId = map;
    if (source->area != NULL) {
        g_gameState.savedAreaId = source->area->area;
        g_gameState.targetAreaId = source->area->area;
    }
}
