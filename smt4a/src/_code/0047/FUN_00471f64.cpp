#include "addon/aocMain.h"
#include "addon/AocLookup.h"

extern "C" {
void *libc_bsearch(const void *, const void *, u32, u32, s32 (*)(const void *, const void *));
s32 FUN_00476dfc(const void *, const void *);
s32 asdFsIsSdCardDetected(void);
u32 objGetFlagBit16(void *);
extern AocMain *g_aocMain;
extern AocSystemA *g_aocSystem;

/* Returns 0 when the add-on table of `system` has the record `id` and the SD card holds the add-on content; clears the availability flag when no card is detected. */
static __inline AocTableSearchRecordA *searchAocRecords(const AocTableSearchRecordA *key, const AocTableSearchRecordA *records, u32 count, s32 (*compare)(const void *, const void *))
{
    return (AocTableSearchRecordA *)libc_bsearch(key, records, count, sizeof(AocTableSearchRecordA), compare);
}

u32 FUN_00471f64(AocSystemA *system, s16 id)
{
    AocTableSearchRecordA key;
    key.id = id;
    AocTableSearchRecordA *record = searchAocRecords(&key, system->table.records, g_aocSystem->table.count,
                                         FUN_00476dfc);
    if (record == NULL) {
        return 1;
    }
    if (asdFsIsSdCardDetected() != 0) {
        if (objGetFlagBit16(g_aocMain) != 0) {
            return 0;
        }
    } else {
        g_aocMain->flags &= ~0x10000;
    }
    return 1;
}
}
