#include "addon/aocMain.h"
#include "addon/AocLookup.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "addon/AocSystem.h"

extern "C" {
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));
s32 compareU16KeyAscending(const void *left, const void *right);
u8 rosterHasLeader(void);
s32 objGetFlagBit16(AocMain *main);

/* Reports a missing or disabled add-on record for the current selection. */
u32 aocSelectedRecordIsUnavailable(AocSystem *system)
{
    if (rosterHasLeader() == 0) {
        return 0;
    }
    u16 id = rosterGetLeaderId();
    if (id < 0x15e) {
        return 0;
    }
    AocTableSearchRecord key;
    key.id = id;
    const void *records = system->table1bRecords;
    u32 count = g_aocSystem->table1bCount;
    void *record = libc_bsearch(&key, records, count, sizeof(AocTableSearchRecord), compareU16KeyAscending);
    if (record == NULL) {
        return 1;
    }
    if (objGetFlagBit16(g_aocMain) == 0) {
        return 1;
    }
    return 0;
}
}
