/* NON_MATCHING: map transition global addressing and integer-to-float scheduling differ. */
#include "shard/W5_W5Match7_SceneState.h"
#include "game/GameStateA.h"
struct MapTransitionRecord {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 kind;
    /* 0x04 */ s16 x;
    /* 0x06 */ s16 y;
    /* 0x08 */ s16 z;
    /* 0x0A */ s16 heading;
};
extern "C" {
s32 scrGetArg(u32 index);
s32 table23FindRecordByKey(s32 map, u32 area, u32 object);
const MapTransitionRecord *dataTableGetRecord23(u32 index);

/* Stores the two script-selected map transition records. */
u32 FUN_0039bd24(void)
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
        const MapTransitionRecord *record = dataTableGetRecord23(index);
        g_gameState.savedObjectId = record->kind;
        g_gameState.savedPosition.x = record->x;
        g_gameState.savedPosition.y = record->y;
        g_gameState.savedPosition.z = record->z;
        g_gameState.savedHeading = record->heading;
        g_gameState.savedHeadingCopy = record->heading;
        g_gameState.savedMapId = firstMap;
        g_gameState.savedAreaId = firstArea;
    }
    index = table23FindRecordByKey(secondMap, secondArea, secondObject);
    if (index != -1) {
        const MapTransitionRecord *record = dataTableGetRecord23(index);
        g_gameState.targetPosition.x = record->x;
        g_gameState.targetKind = record->kind;
        g_gameState.targetPosition.y = record->y;
        g_gameState.targetPosition.z = record->z;
        g_gameState.targetHeading = record->heading;
        g_gameState.targetHeadingCopy = record->heading;
        g_gameState.targetMapId = secondMap;
        g_gameState.targetAreaId = secondArea;
    }
    return 1;
}
}
