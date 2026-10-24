#include "common.h"

namespace {
struct DevilRecord {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 unk34Low : 14;
    /* 0x34 */ u32 characterId : 7;
    /* 0x34 */ u32 unk34High : 11;
};

struct CharacterUnit {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 devilId;
};

struct CharacterRow {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 values[24];
};
}

extern "C" {
DevilRecord *FUN_00184310(u16 id);
CharacterRow *dataTableLookupCharacter(u16 character);
s32 randRange(u32 limit);
s32 gameDataFlagTestBit(u32 bit);

// Pick a random entry of the demon's character row: the first 12 are chosen on a roll, the rest otherwise.
u16 FUN_003f3104(CharacterUnit *unit)
{
    DevilRecord *devil = FUN_00184310(unit->devilId);
    CharacterRow *row = dataTableLookupCharacter(devil->characterId);
    s32 index = randRange(11);
    s32 roll = randRange(13);
    if (gameDataFlagTestBit(6)) {
        if (roll < 2) {
            index += 12;
        }
    } else if (roll < 1) {
        index += 12;
    }
    return row->values[index];
}

} /* extern "C" */
