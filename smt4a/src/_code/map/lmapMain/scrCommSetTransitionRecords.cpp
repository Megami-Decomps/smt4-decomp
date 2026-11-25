/* NON_MATCHING: the sole diff is the target-position pool relocation. Both resolve to 0x005F1B9C,
 * but g_gameState's configured size ends at g_lmapMain, before the target position. */
#include "shard/W5_W5Match7_SceneState.h"
#include "game/GameStateA.h"
#include "gamedata/DataTableAccess_AocTable23.h"
extern "C" {
s32 scrGetArg(u32 index);
s32 table23FindRecordByKey(s32 map, u32 area, u32 object);

/* Stores the two script-selected map transition records. */
u32 scrCommSetTransitionRecords(void)
{
    g_gameState.savedLocationSet = 1;
    g_gameState.unk4CF = 1;
    s32 firstMap = scrGetArg(0);
    u32 firstArea = scrGetArg(1);
    u32 firstObject = scrGetArg(2);
    s32 secondMap = scrGetArg(3);
    u32 secondArea = scrGetArg(4);
    u32 secondObject = scrGetArg(5);
    s32 index = table23FindRecordByKey(firstMap, firstArea, firstObject);
    if (index != -1) {
        const Table23Record *record = dataTableGetRecord23(index);
        const MapVector position = {(f32)record->x, (f32)record->y, (f32)record->z};
        g_gameState.savedObjectId = record->key.value;
        g_gameState.savedMapId = firstMap;
        g_gameState.savedAreaId = firstArea;
        g_gameState.savedPosition = position;
        g_gameState.savedHeading = record->heading;
        g_gameState.savedHeadingCopy = record->heading;
    }
    index = table23FindRecordByKey(secondMap, secondArea, secondObject);
    if (index != -1) {
        const Table23Record *record = dataTableGetRecord23(index);
        const MapVector position = {(f32)record->x, (f32)record->y, (f32)record->z};
        g_gameState.targetMapId = secondMap;
        g_gameState.targetAreaId = secondArea;
        g_gameState.targetKind = record->key.value;
        g_gameState.targetPosition = position;
        g_gameState.targetHeading = record->heading;
        g_gameState.targetHeadingCopy = record->heading;
    }
    return 1;
}
}
