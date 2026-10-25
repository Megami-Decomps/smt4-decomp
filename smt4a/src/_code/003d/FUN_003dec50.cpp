/* NON_MATCHING: retail peels and unrolls the record search two at a time; current compile keeps a scalar loop. */
#include "gamedata/ProgressionUnlock.h"

extern "C" {
void gameDataSetStatusFlag(u16 id, s32 enabled);
s32 FUN_002c2758(u16 id);
s32 FUN_0041862c(u32 kind);

// Unlock records whose progression threshold has been reached.
void FUN_003dec50(void)
{
    s32 progress = FUN_0041862c(0);
    for (u16 id = 0; id < 32; ++id) {
        void* section = dataTableGet(0x1C, 3);
        const ProgressionUnlockRecord* entries =
            static_cast<const ProgressionUnlockRecord*>(dataTableGetEntries(section));
        u32 count = dataTableGetCount(section);
        const ProgressionUnlockRecord* record = NULL;
        for (u32 index = 0; index < count; ++index) {
            if (entries[index].id == id) {
                record = &entries[index];
                break;
            }
        }
        if (record != NULL && !FUN_002c2758(id) && record->threshold <= progress)
            gameDataSetStatusFlag(id, 1);
    }
}
}
