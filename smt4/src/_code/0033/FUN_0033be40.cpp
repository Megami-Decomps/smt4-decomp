/* NON_MATCHING: saved entry, record, and status registers differ, as does conditional-result move order. */
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
s32 partyHasStoredDemon();

// Classify an entry against its record's gated level requirement.
u32 FUN_0033be40(const EntryLevelStatus* entry)
{
    DevilLevelStatus* record = devilGetRecord(entry->devilId);
    u32 status = 1;
    if (record->requirement != 0 && partyHasStoredDemon() == 0) {
        status = record->threshold > entry->level ? 2 : 0;
    }
    return status;
}
}
