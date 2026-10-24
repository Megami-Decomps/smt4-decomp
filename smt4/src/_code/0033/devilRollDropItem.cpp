#include "common.h"

extern "C" {

struct DevilDropRecord {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ u32 unk2cLow : 14;
    /* 0x2c */ u32 dropGroup : 7;
    /* 0x2c */ u32 unk2cHigh : 11;
};

struct DropGroupRecord {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 items[24];
};

struct UnitRecord {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 devilId;
};

DevilDropRecord *devilGetRecord(u16 id);
DropGroupRecord *dataTable14Sub1GetRecord(u32 group);
s32 randNextInRange(u32 limit);
s32 flagBitIsSet(u32 bit);

/* Picks a drop item of the unit's devil: a random common slot, or the rare slot (+12) on a low roll. */
u16 devilRollDropItem(UnitRecord *unit)
{
    DropGroupRecord *group = dataTable14Sub1GetRecord(devilGetRecord(unit->devilId)->dropGroup);
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
