#include "shard/GameDataBlocks.h"

struct SavedIdSlots {
    u8 unk00[0x78]; // 0x00
    u16 ids[8];       // 0x78
};

extern "C" {
s32 FUN_0026aa78(void);

// Clears the first matching ID in the currently unlocked save slots.
void gameClearUnlockedSavedId(u32 id)
{
    SavedIdSlots* slots = reinterpret_cast<SavedIdSlots*>(g_gameDataBlocks.unk04 + 0x90);
    s32 count = FUN_0026aa78();
    for (s32 index = 0; index < count; ++index) {
        if (slots->ids[index] == id) {
            slots->ids[index] = 0;
            return;
        }
    }
}
}
