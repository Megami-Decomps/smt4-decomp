#include "shard/W5_W5Match2_ShiftRandom.h"

struct PhaseEntry {
    u32 unk00;
    s32 phase; // 0x04
    u32 unk08;
};
struct PhaseEntryList { PhaseEntry *entries; };
struct PhaseEntryInfo {
    u8 unk00[0x38];
    u32 count; // 0x38
};
struct PhaseEntryOwner {
    u8 unk00[0x30];
    PhaseEntryList *list; // 0x30
    PhaseEntryInfo *info; // 0x34
};

extern "C" {
u32 randomAdvanceShiftRegister(ShiftRandomState *state);

// Give each entry a randomized complemented remainder as its starting phase.
void phaseEntriesRandomize(PhaseEntryOwner *owner)
{
    u32 count = owner->info->count;
    PhaseEntry *entry = owner->list->entries;
    for (u32 index = 0; index < count; ++index, ++entry) {
        entry->phase = ~((s32)randomAdvanceShiftRegister(NULL) % 4);
    }
}
}
