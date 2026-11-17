#include "shard/W6_W6Match1_PartySlot.h"
#include "gamedata/NkmBaseRecordA.h"

extern "C" {
s32 saveIsRecordValueBounded(u32 id);
bool gameDataFlagTestBit(u32 bit);
s32 randRange(u32 limit);

bool FUN_003f2fb0(PartySlotA *unit, s32 attempts, s32 force)
{
    NkmBaseRecordA *record = nkmBaseGetRecord(unit->unk62);
    s32 value = saveIsRecordValueBounded(unit->unk62);
    s32 chance = value / 400 + ((record->fusionRestrictions >> 7) & 0x7f);
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
