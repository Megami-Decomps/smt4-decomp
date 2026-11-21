/* NON_MATCHING: the position is read before the stores (retail loads the three coordinates ahead of the kind store) and the stores follow retail's order; the first block still splits the position copy (str with writeback, then stm), the second computes &targetPosition from the base where retail pools it separately (g_gameState's symbol size 0x500 does not cover 0x5A0, so retail's word reads DAT_005f1b9c). */
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

/* The record's position as a map vector. */
static __inline MapVector transitionPosition(const MapTransitionRecord *record)
{
    MapVector position = {(f32)record->x, (f32)record->y, (f32)record->z};
    return position;
}

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
        const MapTransitionRecord *record = dataTableGetRecord23(index);
        MapVector position = transitionPosition(record);
        g_gameState.savedObjectId = record->kind;
        g_gameState.savedMapId = firstMap;
        g_gameState.savedAreaId = firstArea;
        g_gameState.savedPosition = position;
        g_gameState.savedHeading = record->heading;
        g_gameState.savedHeadingCopy = record->heading;
    }
    index = table23FindRecordByKey(secondMap, secondArea, secondObject);
    if (index != -1) {
        const MapTransitionRecord *record = dataTableGetRecord23(index);
        MapVector position = transitionPosition(record);
        g_gameState.targetMapId = secondMap;
        g_gameState.targetAreaId = secondArea;
        g_gameState.targetKind = record->kind;
        g_gameState.targetPosition = position;
        g_gameState.targetHeading = record->heading;
        g_gameState.targetHeadingCopy = record->heading;
    }
    return 1;
}
}
