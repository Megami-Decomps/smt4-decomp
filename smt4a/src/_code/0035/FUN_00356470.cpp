#include "common.h"

extern "C" {

typedef struct AocEntry34 {
    /* 0x00 */ u8 unk00[0x34];
} AocEntry34; /* 0x34 bytes */

extern void *g_aocSystem;
extern u32 dataTableGetCount(u32 table);
extern AocEntry34 *dataTableGetEntries(void);
extern u32 dataTableGet(u32 id, u32 kind);
extern s32 FUN_0046c35c(void *system, s32 id, s32 kind);
extern AocEntry34 *contentEntryGetFromFiles5(void *system, u32 index);

/* Returns entry `index` of data table 0x2d kind 1: the base entries first, then the add-on ones; NULL when out of range. */
AocEntry34 *FUN_00356470(u32 index)
{
    u32 table = dataTableGet(0x2d, 1);
    AocEntry34 *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0046c35c(g_aocSystem, 0x25, 1) + count) {
        return contentEntryGetFromFiles5(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
