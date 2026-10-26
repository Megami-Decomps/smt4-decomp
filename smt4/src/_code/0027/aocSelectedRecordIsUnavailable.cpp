#include "addon/aocMain.h"
#include "addon/AocLookup.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"

extern "C" {
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));
s32 FUN_0038e29c(const void *left, const void *right);
u8 FUN_0029022c(void);
s32 objGetFlagBit16(AocMain *main);
extern AocMain *g_aocMain;
extern AocSystem *g_aocSystem;

/* Reports a missing or disabled add-on record for the current selection. */
u32 aocSelectedRecordIsUnavailable(AocSystem *system)
{
    if (FUN_0029022c() == 0) {
        return 0;
    }
    u16 id = FUN_002903f0();
    if (id < 0x15e) {
        return 0;
    }
    AocTableSearchRecord key;
    key.id = id;
    const void *records = system->table.records;
    u32 count = g_aocSystem->table.count;
    void *record = libc_bsearch(&key, records, count, sizeof(AocTableSearchRecord), FUN_0038e29c);
    if (record == NULL) {
        return 1;
    }
    if (objGetFlagBit16(g_aocMain) == 0) {
        return 1;
    }
    return 0;
}
}
