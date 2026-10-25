/* NON_MATCHING: Binary-search argument scheduling and literal-pool order differ; control flow and record size match retail. */
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
u32 FUN_002764a8(AocSystem *system)
{
    AocTableSearchRecord key;
    if (!FUN_0029022c()) {
        return 0;
    }
    u32 id = FUN_002903f0();
    if (id < 0x15e) {
        return 0;
    }
    key.id = (u16)id;
    if (libc_bsearch(&key, system->table.records, g_aocSystem->table.count,
                     sizeof(key), FUN_0038e29c) == NULL || !objGetFlagBit16(g_aocMain)) {
        return 1;
    }
    return 0;
}
}
