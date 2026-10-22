/* NON_MATCHING: AOC table loads, comparator literals and return paths are scheduled differently. */
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
u32 FUN_00471d00(AocSystemA* system)
{
    if (FUN_004186a4() != 0) {
        u16 id = FUN_004186e0();
        if (id >= 0x15E) {
            AocTableSearchRecordA key;
            key.id = id;
            void* record = libc_bsearch(&key, system->table.records, g_aocSystem->table.count,
                                        sizeof(AocTableSearchRecordA), FUN_00476dfc);
            if (record == NULL || objGetFlagBit16(g_aocMain) == 0) {
                return 1;
            }
        }
    }
    return 0;
}
}
