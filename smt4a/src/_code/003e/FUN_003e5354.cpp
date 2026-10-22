/* NON_MATCHING: retail retains inlined slot-index and null checks that the direct canonical access eliminates. */
#include "shard/W6_W6Match1_PartySlot.h"

struct PartyCounterView {
    /* 0x0000 */ u8 unk0000[0x2c4e];
    /* 0x2c4e */ s16 unk2c4e;
};

extern "C" {
bool gameFlagIsSet(u32 flag);
PartySlotTableA *gameGetSlotTable();

void FUN_003e5354(s32 delta)
{
    if (!gameFlagIsSet(0x533)) {
        return;
    }
    s32 active = 0;
    for (s32 index = 0; index < 12; ++index) {
        if (gameGetSlotTable()->slots[index].flags & 1) {
            ++active;
        }
    }
    if (active >= 2) {
        PartyCounterView *table = (PartyCounterView *)gameGetSlotTable();
        s32 value = table->unk2c4e + delta;
        if (value < 0) {
            value = 0;
        } else if (value > 8) {
            value = 8;
        }
        table->unk2c4e = (s16)value;
    }
}
}
