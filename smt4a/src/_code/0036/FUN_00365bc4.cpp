/* NON_MATCHING: empty-table branch targets a different zero-return path instead of retail's direct epilogue; all other instructions agree. */
#include "gamedata/PartnerInfoTable.h"

/* Find the partner comment message `id` (PartnerInfoTable.tbb table 1). */
extern "C" PartnerInfoMessage *FUN_00365bc4(s32 id)
{
    void *table = dataTableGet(0x43, 1);
    PartnerInfoMessage *entries = static_cast<PartnerInfoMessage *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);
    for (s32 i = 0; i < count; ++i) {
        if (entries[i].id == id) {
            return &entries[i];
        }
    }
    return NULL;
}
