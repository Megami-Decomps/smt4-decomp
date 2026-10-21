/* NON_MATCHING: only the two independent parameter-save MOVs are reversed; all remaining default-flag instructions match. */
#include "shard/Shard0041.h"

extern "C" {
PartyBlockB* gameFlagBlockGet(void);

void FUN_00418870(s32 index, u32 value)
{
    PartyEntryB* entry = &gameFlagBlockGet()->e[index];
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
