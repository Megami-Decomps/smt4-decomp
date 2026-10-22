#include "shard/Shard0031.h"
#include "shard/Shard0034.h"

/* A party slot's demon record, as far as its level. */
struct SlotDemonLevel {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ u16 level;
};

extern "C" {
PlayerData *gameGetPlayerData(void);
PartyStatusSlots *gameGetSlotTable(void);
SlotDemonLevel *gameGetSlotRecord(s32 slot);
s32 gameSlotTableFindFree(void);

/* Returns the average level of a party group: 0 = player and active demons, 1 = active demons,
 * 2/3 = player and reserve demons. */
f32 partyGetAverageLevel(s32 group)
{
    f32 count = 0.0f;
    f32 total = 0.0f;
    s32 slotCount;
    s8 *slots;

    if (group == 0 || group == 2 || group == 3) {
        total = gameGetPlayerData()->unk62;
        count = 1.0f;
    }
    switch (group) {
    case 0:
    case 1:
        slotCount = gameSlotTableFindFree();
        slots = gameGetSlotTable()->active.slots;
        break;
    case 2:
    case 3:
        slotCount = 3;
        slots = gameGetSlotTable()->reserve;
        break;
    default:
        return total / count;
    }
    for (s32 i = 0; i < slotCount; i++) {
        if (slots[i] >= 0) {
            total = gameGetSlotRecord(slots[i])->level + total;
            count += 1.0f;
        }
    }
    return total / count;
}
}
