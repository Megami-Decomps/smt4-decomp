/* NON_MATCHING: map transition global addressing and integer-to-float scheduling differ. */
#include "shard/W5_W5Match7_SceneState.h"
struct MapTransitionRecord {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 kind;
    /* 0x04 */ s16 x;
    /* 0x06 */ s16 y;
    /* 0x08 */ s16 z;
    /* 0x0A */ s16 heading;
};
struct MapTransitionChoices {
    /* 0x000 */ u8 unk000[0x178];
    /* 0x178 */ s32 firstMap;
    /* 0x17C */ u32 firstArea;
    /* 0x180 */ u32 firstKind;
    /* 0x184 */ MapVector firstPosition;
    /* 0x190 */ f32 firstHeading;
    /* 0x194 */ f32 firstTargetHeading;
    /* 0x198 */ s32 secondMap;
    /* 0x19C */ u32 secondArea;
    /* 0x1A0 */ MapVector secondPosition;
    /* 0x1AC */ f32 secondHeading;
    /* 0x1B0 */ f32 secondTargetHeading;
    /* 0x1B4 */ u32 secondKind;
};
extern "C" {
extern MapTransitionChoices DAT_005f19fc;
s32 scrGetArg(u32 index);
s32 FUN_003b5714(s32 map, u32 area, u32 object);
const MapTransitionRecord *dataTableGetRecord23(u32 index);

/* Stores the two script-selected map transition records. */
u32 FUN_0039bd24(void)
{
    g_gameState.transitionActive = 1;
    g_gameState.unk4cd[2] = 1;
    s32 firstMap = scrGetArg(0);
    u32 firstArea = scrGetArg(1);
    u32 firstObject = scrGetArg(2);
    s32 secondMap = scrGetArg(3);
    u32 secondArea = scrGetArg(4);
    u32 secondObject = scrGetArg(5);
    s32 index = FUN_003b5714(firstMap, firstArea, firstObject);
    if (index != -1) {
        const MapTransitionRecord *record = dataTableGetRecord23(index);
        DAT_005f19fc.firstKind = record->kind;
        DAT_005f19fc.firstPosition.x = record->x;
        DAT_005f19fc.firstPosition.y = record->y;
        DAT_005f19fc.firstPosition.z = record->z;
        DAT_005f19fc.firstHeading = record->heading;
        DAT_005f19fc.firstTargetHeading = record->heading;
        DAT_005f19fc.firstMap = firstMap;
        DAT_005f19fc.firstArea = firstArea;
    }
    index = FUN_003b5714(secondMap, secondArea, secondObject);
    if (index != -1) {
        const MapTransitionRecord *record = dataTableGetRecord23(index);
        DAT_005f19fc.secondPosition.x = record->x;
        DAT_005f19fc.secondKind = record->kind;
        DAT_005f19fc.secondPosition.y = record->y;
        DAT_005f19fc.secondPosition.z = record->z;
        DAT_005f19fc.secondHeading = record->heading;
        DAT_005f19fc.secondTargetHeading = record->heading;
        DAT_005f19fc.secondMap = secondMap;
        DAT_005f19fc.secondArea = secondArea;
    }
    return 1;
}
}
