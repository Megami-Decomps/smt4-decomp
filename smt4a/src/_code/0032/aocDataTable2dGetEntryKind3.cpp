#include "common.h"

extern "C" {

typedef struct AocEntry1C {
    /* 0x00 */ u8 unk00[0x1C];
} AocEntry1C; /* 0x1C bytes */

extern void *g_aocSystem;
extern u32 dataTableGetCount(u32 table);
extern AocEntry1C *dataTableGetEntries(void);
extern u32 dataTableGet(u32 id, u32 kind);
extern s32 FUN_0046c35c(void *system, s32 id, s32 kind);
extern AocEntry1C *dataFindGroupedSectionRecord(void *system, u32 index);

/* Returns entry `index` of data table 0x2d kind 3: the base entries first, then the add-on ones; NULL when out of range. */
AocEntry1C *aocDataTable2dGetEntryKind3(u32 index)
{
    u32 table = dataTableGet(0x2d, 3);
    AocEntry1C *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0046c35c(g_aocSystem, 0x25, 3) + count) {
        return dataFindGroupedSectionRecord(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
