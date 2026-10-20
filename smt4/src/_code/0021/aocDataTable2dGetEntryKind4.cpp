#include "common.h"

extern "C" {

typedef struct AocEntryC {
    /* 0x00 */ u8 unk00[0xC];
} AocEntryC; /* 0xC bytes */

extern void *g_aocSystem;
extern u32 dataTableGetCount(u32 table);
extern AocEntryC *dataTableGetEntries(void);
extern u32 dataTableGet(u32 id, u32 kind);
extern s32 FUN_0025bed8(void *system, s32 id, s32 kind);
extern AocEntryC *FUN_00385b84(void *system, u32 index);

/* Returns entry `index` of data table 0x2d kind 4: the base entries first, then the add-on ones; NULL when out of range. */
AocEntryC *aocDataTable2dGetEntryKind4(u32 index)
{
    u32 table = dataTableGet(0x2d, 4);
    AocEntryC *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0025bed8(g_aocSystem, 0x25, 4) + count) {
        return FUN_00385b84(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
