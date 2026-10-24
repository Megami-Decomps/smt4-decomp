/* NON_MATCHING: bsearch argument loads are scheduled differently (retail loads the comparator and g_aocSystem first) and the return paths are laid out differently (retail has a separate early-return epilogue for 0). */
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
u32 FUN_00471f64(AocSystemA *system, u16 id)
{
    AocTableSearchRecordA key;
    key.id = id;
    void *record = libc_bsearch(&key, system->table.records, g_aocSystem->table.count,
                                sizeof(AocTableSearchRecordA), FUN_00476dfc);
    if (record != NULL) {
        if (asdFsIsSdCardDetected() != 0) {
            if (objGetFlagBit16(g_aocMain) != 0) {
                return 0;
            }
        } else {
            g_aocMain->flags &= ~0x10000;
        }
    }
    return 1;
}
}
