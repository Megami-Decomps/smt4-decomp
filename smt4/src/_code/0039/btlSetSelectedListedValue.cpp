#include "battle/BtlMainAccess.h"
#include "common.h"

struct ListedBattleEntry {
    u32 flags; // 0x00
    u8 unk004[0xca]; // 0x004
    s16 listedId; // 0x0ce
    u8 unk0d0[0x1b8]; // 0x0d0
};

struct ListedBattleState {
    u8 unk0000[0x1fc0]; // 0x0000
    ListedBattleEntry* entries; // 0x1fc0
    u32 unk1fc4; // 0x1fc4
    s16 selected; // 0x1fc8
};

extern "C" {
void devilCreateRaceEffect(s32 listedId, u32 value);

// Update the selected listed entry when it has a valid ID and the required flag.
void btlSetSelectedListedValue(u32 value)
{
    ListedBattleState* state = reinterpret_cast<ListedBattleState *>(btlGetMainState());
    if (state->selected >= 0) {
        ListedBattleEntry* entry = &state->entries[state->selected];
        if ((entry->flags & 0x10) != 0 && entry->listedId >= 0) {
            devilCreateRaceEffect(entry->listedId, value);
        }
    }
}
}
