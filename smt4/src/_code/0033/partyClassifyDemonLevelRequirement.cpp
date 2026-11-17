#include "common.h"
#include "gamedata/DevilRecord.h"

struct EntryLevelStatus {
    u8 unk00[0x46]; // 0x00
    u16 devilId;      // 0x46
    u8 level;         // 0x48
};

extern "C" {
s32 partyHasStoredDemon(u16 id);

// Classify an entry against its record's gated level requirement.
u32 partyClassifyDemonLevelRequirement(const EntryLevelStatus* entry)
{
    DevilRecord *record = devilGetRecord(entry->devilId);
    u32 status = 1;
    if (record->evolutionTarget != 0 && partyHasStoredDemon(record->evolutionTarget) == 0) {
        if (record->evolutionLevel <= entry->level)
            status = 0;
        else
            status = 2;
    }
    return status;
}
}
