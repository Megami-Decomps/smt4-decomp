#include "shard/W6_W6Match8_DevilRecordA.h"

namespace {
// Saved demon entry as gameDataCopySaveEntry writes it.
struct SaveEntryCopy {
    /* 0x00 */ u8 unk00[0x36];
    /* 0x36 */ u16 state;
    /* 0x38 */ u8 unk38[0x18];
};
}

extern "C" {

s32 gameFlagIsSet(u32 flag);
s32 gameDataCopySaveEntry(u16 id, SaveEntryCopy *out);

/* Whether a demon is available: its unlock flag is set and, when it requires a saved entry, that entry exists and is active. */
s32 FUN_004da858(void *owner, u32 id)
{
    const DevilRecordA *record = FUN_00184310(id);
    SaveEntryCopy entry;
    u16 requirement;
    s32 found;

    if (record == NULL || (record->unlockFlag != 0 && !gameFlagIsSet(record->unlockFlag))) {
        return 0;
    }
    requirement = record->saveRequirement;
    if (requirement & 1) {
        if (requirement & ~1) {
            if (!gameDataCopySaveEntry(requirement >> 1, &entry) || (entry.state & 0xfc) == 0) {
                return 0;
            }
        } else {
            if (!gameDataCopySaveEntry(record->id, &entry) || (entry.state & 0xfc) == 0) {
                return 0;
            }
        }
    }
    return 1;
}

} /* extern "C" */
