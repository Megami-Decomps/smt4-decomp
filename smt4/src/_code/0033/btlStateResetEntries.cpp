#include "common.h"

struct BattleStateResetEntry {
    /* 0x00 */ u32 flags;
    /* 0x04 */ s32 index;
};

struct BattleStateResetTable {
    /* 0x0000 */ u8 unk0000[0x1fe4];
    /* 0x1FE4 */ BattleStateResetEntry entries[42];
};

// Clear all 42 records and mark their indices unused.
extern "C" void btlStateResetEntries(BattleStateResetTable* state)
{
    for (s32 index = 0; index < 42; ++index) {
        state->entries[index].flags = 0;
        state->entries[index].index = -1;
    }
}
