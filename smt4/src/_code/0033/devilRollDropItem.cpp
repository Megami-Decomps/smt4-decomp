#include "common.h"
#include "gamedata/NkmBaseRecord.h"

extern "C" {

struct DropGroupRecord {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 items[24];
};

struct UnitRecord {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 devilId;
};

DropGroupRecord *dataTable14Sub1GetRecord(u32 group);
s32 randNextInRange(u32 limit);
s32 flagBitIsSet(u32 bit);

/* Picks a drop item of the unit's devil: a random common slot, or the rare slot (+12) on a low roll. */
u16 devilRollDropItem(UnitRecord *unit)
{
    DropGroupRecord *group = dataTable14Sub1GetRecord(nkmBaseGetRecord(unit->devilId)->chance.dropGroup);
    s32 slot = randNextInRange(11);
    s32 roll = randNextInRange(13);

    if (flagBitIsSet(6) != 0) {
        if (roll < 2) {
            slot += 12;
        }
    } else if (roll < 1) {
        slot += 12;
    }
    return group->items[slot];
}

} /* extern "C" */
