/* NON_MATCHING: signed division uses a swapped multiplier operand and omits retail's extra register copy. */
#include "shard/W6_W6Match1_PartySlot.h"
#include "gamedata/DevilRecordA.h"

extern "C" {
s32 FUN_0031cfd0(u32 id);
bool gameDataFlagTestBit(u32 bit);
s32 randRange(u32 limit);

bool FUN_003f2fb0(PartySlotA *unit, s32 attempts, s32 force)
{
    DevilRecordA *record = FUN_00184310(unit->unk62);
    s32 chance = FUN_0031cfd0(unit->unk62) / 400 +
        ((record->fusionRestrictions >> 7) & 0x7f);
    if (gameDataFlagTestBit(6)) {
        chance += 40;
    }
    for (s32 attempt = 0; attempt < attempts; ++attempt) {
        s32 roll = randRange(99);
        if (force) {
            roll = -1;
        }
        if (roll < chance) {
            return true;
        }
    }
    return false;
}
}
