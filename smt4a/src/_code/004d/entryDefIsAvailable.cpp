#include "gamedata/NkmBaseRecordA.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct SaveEntry4daf18 {
    /* 0x00 */ u8 unk00[0x36];
    /* 0x36 */ u16 state;
    /* 0x38 */ u8 unk38[0x18];
};

extern "C" {

s32 gameFlagIsSet(u32 flag);
u32 gameDataCopySaveEntry(u32 index, void *dest);

static inline u32 saveEntryIsActive(u32 index)
{
    SaveEntry4daf18 save;
    if (!gameDataCopySaveEntry(index, &save)) {
        return 0;
    }
    return (save.state & 0xFC) != 0;
}

// Whether the demon with this ID is available: not excluded, its unlock flag set and its save entry valid.
u32 entryDefIsAvailable(void *unused, u16 id)
{
    NkmBaseRecordA *entry = nkmBaseGetRecord(id);
    if (entry != NULL && !(entry->fusionRestrictions & 0x200000) &&
        (entry->unlockFlag == 0 || gameFlagIsSet(entry->unlockFlag))) {
        if (entry->saveRequirement & 1) {
            u32 active;
            if (entry->saveRequirement & ~1) {
                active = saveEntryIsActive(entry->saveRequirement >> 1);
            } else {
                active = saveEntryIsActive(entry->id);
            }
            if (!active) {
                return 0;
            }
        }
        if (entry->flags & 1) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
