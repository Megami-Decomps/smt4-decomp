#include "addon/aocMain.h"
#include "addon/AocLookup.h"
#include "addon/AocSystemA.h"
extern "C" {
void* libc_bsearch(const void*, const void*, u32, u32, s32 (*)(const void*, const void*));
s32 FUN_00476dfc(const void*, const void*);
u32 objGetFlagBit16(void*);
u8 rosterHasLeader(void);
u16 rosterGetLeaderId(void);

// Checks the current add-on record against the owner's table and add-on availability flag.
u32 aocSelectedRecordIsUnavailable(AocSystemA* system)
{
    if (rosterHasLeader() == 0) {
        return 0;
    }
    u16 id = rosterGetLeaderId();
    if (id < 0x15E) {
        return 0;
    }
    AocTableSearchRecordA key;
    key.id = id;
    const void* records = system->table1bRecords;
    u32 count = g_aocSystem->table1bCount;
    void* record = libc_bsearch(&key, records, count, sizeof(AocTableSearchRecordA), FUN_00476dfc);
    if (record == NULL) {
        return 1;
    }
    if (objGetFlagBit16(g_aocMain) == 0) {
        return 1;
    }
    return 0;
}
}
