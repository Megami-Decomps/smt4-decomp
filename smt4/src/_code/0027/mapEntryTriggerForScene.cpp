#include "common.h"

extern "C" {

typedef struct GameState {
    /* 0x0 */ s32 scene;
    /* 0x4 */ s32 mode;
} GameState;

typedef struct MapEntry {
    /* 0x0 */ s32 value;
    /* 0x4 */ s32 unk4;
} MapEntry;

typedef struct MapTable {
    /* 0x000 */ u8 unk000[0x784];
    /* 0x784 */ MapEntry entries[1];
} MapTable;

extern GameState g_gameState;
extern MapTable *g_mapTable;

extern s32 gameFlagIsSet(u32 id);
extern void FUN_001e4284(s32 value, s32 arg);

/* Forwards the map entry `index`'s value, or 6 while flag 0xD2 is set without 0xD4 in scene 0x12 modes 4/5. */
void mapEntryTriggerForScene(s32 index)
{
    if (g_gameState.scene == 0x12 && (g_gameState.mode == 4 || g_gameState.mode == 5)
        && gameFlagIsSet(0xD2) != 0 && gameFlagIsSet(0xD4) == 0) {
        FUN_001e4284(6, 0);
        return;
    }
    FUN_001e4284(g_mapTable->entries[index].value, 0);
}

} /* extern "C" */
