#include "shard/Shard0041.h"

extern "C" {
PartyBlockB* gameFlagBlockGet(s32 index);

void FUN_00418870(s32 index, u32 value)
{
    PartyEntryB* entry = &gameFlagBlockGet(index)->e[index];
    if (entry->byte1 != value && value != 0) {
        entry->flags |= 0x40;
    }
    entry->byte1 = static_cast<u8>(value);
    if (entry->byte1 < 2) {
        entry->flags &= ~0x40;
        entry->byte1 = 0;
    }
}
}
