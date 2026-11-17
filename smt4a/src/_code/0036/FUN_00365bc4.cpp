#include "gamedata/PartnerInfoTable.h"

static PartnerInfoMessage *partnerInfoMessages(void *table)
{
    return static_cast<PartnerInfoMessage *>(dataTableGetEntries(table));
}

/* Find the partner comment message `id` (PartnerInfoTable.tbb table 1). */
extern "C" PartnerInfoMessage *FUN_00365bc4(s32 id)
{
    void *table = dataTableGet(0x43, 1);
    PartnerInfoMessage *entries = partnerInfoMessages(table);
    u32 count = dataTableGetCount(table);
    if (count == 0)
        return NULL;
    for (s32 i = 0; i < count; ++i) {
        if (entries[i].id == id) {
            return &entries[i];
        }
    }
    return NULL;
}
