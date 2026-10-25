#include "shard/W6_W6Match1_PartySlot.h"

struct PartyCounterView {
    /* 0x0000 */ u8 unk0000[0x2c4e];
    /* 0x2c4e */ s16 unk2c4e;
};

extern "C" {
bool gameFlagIsSet(u32 flag);
PartySlotTableA *gameGetSlotTable();

static __inline PartySlotA *partySlotGet(u16 index)
{
    if (index >= 12) {
        return NULL;
    }
    return &gameGetSlotTable()->slots[index];
}

void partyAdjustCounterIfEnoughActive(s32 delta)
{
    if (!gameFlagIsSet(0x533)) {
        return;
    }
    s32 active = 0;
    for (s32 index = 0; index < 12; ++index) {
        PartySlotA *slot = partySlotGet(index);

        if (slot != NULL && (slot->flags & 1)) {
            ++active;
        }
    }
    if (active > 1) {
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
