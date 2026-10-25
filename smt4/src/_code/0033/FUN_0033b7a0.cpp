#include "gamedata/DevilRecord.h"
extern "C" {
s32 saveIsRecordValueBounded(u16);
s32 flagBitIsSet(u32);
s32 randNextInRange(u32);

u32 FUN_0033b7a0(const GameUnitSortRecord* unit, s32 trials, u32 forceLowRoll)
{
    const DevilRecord* record = (const DevilRecord*)devilGetRecord(unit->id);
    s32 value = saveIsRecordValueBounded(unit->id);
    s32 chance = record->chance.baseChance + value / 400;
    if (flagBitIsSet(6) != 0) {
        chance += 40;
    }
    for (s32 trial = 0; trial < trials; ++trial) {
        s32 roll = randNextInRange(99);
        if (forceLowRoll != 0) {
            roll = -1;
        }
        if (roll < chance) {
            return 1;
        }
    }
    return 0;
}
}
