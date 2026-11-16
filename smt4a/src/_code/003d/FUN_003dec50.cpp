#include "gamedata/ProgressionUnlock.h"
#include "code/Code002c_Smt4a.h"

extern "C" {
void gameDataSetStatusFlag(u16 id, s32 enabled);
s32 FUN_0041862c(u32 kind);

/* The unlock record of `id` in data table 0x1C section 3, or NULL. */
static const ProgressionUnlockRecord* progressionFindRecord(u16 id)
{
    void* section = dataTableGet(0x1C, 3);
    const ProgressionUnlockRecord* entries =
        static_cast<const ProgressionUnlockRecord*>(dataTableGetEntries(section));
    u32 count = dataTableGetCount(section);
    for (s32 index = 0; index < count; ++index) {
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
        const ProgressionUnlockRecord* record = progressionFindRecord(id);
        if (record != NULL && !gameDataStatusFlagGet(id) && record->threshold <= progress)
            gameDataSetStatusFlag(id, 1);
    }
}
}
