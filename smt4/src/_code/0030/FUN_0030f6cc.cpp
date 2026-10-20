/* NON_MATCHING: the constant arguments are loaded r1 then r0 instead of r0 then r1. */
#include "common.h"

extern "C" {

typedef struct AocSystem {
    u8 unk000[0x40c];
    s32 extraCount; /* 0x40c */
} AocSystem;

extern AocSystem *g_aocSystem;

extern void *dataTableGet(int table, int index);
extern s32 dataTableGetCount(void *table);

/* Entry count of data table 0x23's section 5, plus the add-on content's extra entries. */
s32 FUN_0030f6cc(void)
{
    return dataTableGetCount(dataTableGet(0x23, 5)) + g_aocSystem->extraCount;
}

} /* extern "C" */
