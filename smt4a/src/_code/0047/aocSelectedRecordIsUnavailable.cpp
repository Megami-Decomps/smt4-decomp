#include "addon/aocMain.h"
#include "addon/AocLookup.h"
extern "C" {
void* libc_bsearch(const void*, const void*, u32, u32, s32 (*)(const void*, const void*));
s32 FUN_00476dfc(const void*, const void*);
u32 objGetFlagBit16(void*);
u8 FUN_004186a4(void);
u16 FUN_004186e0(void);
extern AocMain* g_aocMain;
extern AocSystemA* g_aocSystem;

// Checks the current add-on record against the owner's table and add-on availability flag.
u32 aocSelectedRecordIsUnavailable(AocSystemA* system)
{
    if (FUN_004186a4() == 0) {
        return 0;
    }
    u16 id = FUN_004186e0();
    if (id < 0x15E) {
        return 0;
    }
    AocTableSearchRecordA key;
    key.id = id;
    const void* records = system->table.records;
    u32 count = g_aocSystem->table.count;
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
