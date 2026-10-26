/* NON_MATCHING: the plain-static search helper now unrolls like retail; the remaining differences are the loop-counter signedness of the unrolled prologue and a copy of the id register. */
#include "gamedata/ProgressionUnlock.h"

extern "C" {
void gameDataSetStatusFlag(u16 id, s32 enabled);
s32 FUN_002c2758(u16 id);
s32 FUN_0041862c(u32 kind);

static const ProgressionUnlockRecord* progressionFindRecord(const ProgressionUnlockRecord* entries, u32 count, u16 id)
{
    for (u32 index = 0; index < count; ++index) {
        if (entries[index].id == id) {
            return &entries[index];
        }
    }
    return NULL;
}

// Unlock records whose progression threshold has been reached.
void FUN_003dec50(void)
{
    s32 progress = FUN_0041862c(0);
    for (u16 id = 0; id < 32; ++id) {
        void* section = dataTableGet(0x1C, 3);
        const ProgressionUnlockRecord* entries =
            static_cast<const ProgressionUnlockRecord*>(dataTableGetEntries(section));
        u32 count = dataTableGetCount(section);
        const ProgressionUnlockRecord* record = progressionFindRecord(entries, count, id);
        if (record != NULL && !FUN_002c2758(id) && record->threshold <= progress)
            gameDataSetStatusFlag(id, 1);
    }
}
}
