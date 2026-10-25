#include "common.h"

struct EntryLevelStatus {
    u8 unk00[0x46]; // 0x00
    u16 devilId;      // 0x46
    u8 level;         // 0x48
};

struct DevilLevelStatus {
    u8 unk00[0x29]; // 0x00
    u8 threshold;    // 0x29
    u16 requirement; // 0x2a
};

extern "C" {
DevilLevelStatus* devilGetRecord(u16 id);
s32 partyHasStoredDemon(u16 id);

// Classify an entry against its record's gated level requirement.
u32 partyClassifyDemonLevelRequirement(const EntryLevelStatus* entry)
{
    DevilLevelStatus* record = devilGetRecord(entry->devilId);
    u32 status = 1;
    if (record->requirement != 0 && partyHasStoredDemon(record->requirement) == 0) {
        if (record->threshold <= entry->level)
            status = 0;
        else
            status = 2;
    }
    return status;
}
}
