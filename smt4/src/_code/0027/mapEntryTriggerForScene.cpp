#include "common.h"
#include "game/GameState.h"

extern "C" {


typedef struct MapEntry {
    /* 0x0 */ s32 value;
    /* 0x4 */ s32 unk4;
} MapEntry;

typedef struct MapTable {
    /* 0x000 */ u8 unk000[0x784];
    /* 0x784 */ MapEntry entries[1];
} MapTable;

extern MapTable *g_mapTable;

extern s32 gameFlagIsSet(u32 id);
extern void mapEnvironmentSwitchPreset(s32 value, s32 arg);

/* Forwards the map entry `index`'s value, or 6 while flag 0xD2 is set without 0xD4 in scene 0x12 modes 4/5. */
void mapEntryTriggerForScene(s32 index)
{
    if (g_gameState.mapId == 0x12 && (g_gameState.areaId == 4 || g_gameState.areaId == 5)
        && gameFlagIsSet(0xD2) != 0 && gameFlagIsSet(0xD4) == 0) {
        mapEnvironmentSwitchPreset(6, 0);
        return;
    }
    mapEnvironmentSwitchPreset(g_mapTable->entries[index].value, 0);
}

} /* extern "C" */
