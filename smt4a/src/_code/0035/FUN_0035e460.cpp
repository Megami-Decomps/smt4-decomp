/* NON_MATCHING: register allocation and scheduling (retail shares r4 between the flag and the id, stores the search key after the count call and keeps 9 in a register for the loop); logic identical. */
#include "common.h"

extern "C" {

typedef struct AocItemSlot {
    u8 id;
    u8 unk01;
} AocItemSlot;

/* A data table 4 entry (0x48 bytes), sorted by `id`. */
typedef struct AocTableEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x26];
} AocTableEntry;

/* An entry of the data table dataTable04FindById searches: `slot` lists its used slots first. */
typedef struct AocItemEntry {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ AocItemSlot slot[9];
    /* 0x74 */ u8 unk74[0x4];
} AocItemEntry;

#define AOC_ID_LIMIT 400  /* ids above it are add-on ids, searched in table 4 */

u32 dataTableGet(u32 table, u32 arg1);
void *dataTableGetEntries(u32 table);
u32 dataTableGetCount(u32 table);
AocItemEntry *dataTable04FindById(u32 id);
s32 FUN_001b2e78(void *system, u32 id);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));

extern void *g_aocSystem;
extern const u8 LAB_001ac8dc;  /* table 4 entry comparison */

/* Number of used slots (up to 9) of data table 4 entry `id`, negated when `positive` is 0.
 * Returns 0 for an unknown id; add-on ids (> 400) are only looked up. */
s32 FUN_0035e460(u32 id, s32 positive)
{
    if (id > AOC_ID_LIMIT) {
        if (FUN_001b2e78(g_aocSystem, id) == 0) {
            u32 table = dataTableGet(4, 1);
            void *entries = dataTableGetEntries(table);
            AocTableEntry key;

            key.id = id;
            libc_bsearch(&key, entries, dataTableGetCount(table), sizeof(AocTableEntry), (s32 (*)(const void *, const void *))&LAB_001ac8dc);
        }
    } else {
        AocItemEntry *entry = dataTable04FindById(id);

        if (entry != NULL) {
            s32 sign = positive != 0 ? 1 : -1;
            s32 used = 0;

            for (s32 i = 0; i < 9; i++) {
                if (entry->slot[i].id == 0) {
                    break;
                }
                used++;
            }
            return used * sign;
        }
    }
    return 0;
}

} /* extern "C" */
