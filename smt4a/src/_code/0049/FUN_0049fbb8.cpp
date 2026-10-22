/* NON_MATCHING: one redundant stack store remains for the seeded comparison result; all other instruction rows agree. */
#include "shard/Shard0031.h"

extern "C" {
PartyStatusSlots *gameGetSlotTable(void);
s32 gameSlotTableFindFree(void);
s32 FUN_002c7bb0(s32, s32, u32, u32 *);
}

/* Test the selected party set, including the protagonist for the applicable modes. */
extern "C" u32 FUN_0049fbb8(u32 mode, s32 predicate, u32 argument, u32 initialResult)
{
    u32 result = initialResult;
    if ((mode == 0 || mode == 2 || mode == 3) &&
        FUN_002c7bb0(predicate, -1, argument, &result) == 0) {
        return 1;
    }
    s32 count;
    const s8 *slots;
    switch (mode) {
    case 0:
    case 1:
        count = gameSlotTableFindFree();
        slots = gameGetSlotTable()->active.slots;
        break;
    case 2:
    case 3:
        count = 3;
        slots = gameGetSlotTable()->reserve;
        break;
    default:
        return 0;
    }
    for (s32 i = 0; i < count; ++i) {
        if (slots[i] >= 0 && FUN_002c7bb0(predicate, slots[i], argument, &result) == 0) {
            return 1;
        }
    }
    return 0;
}
