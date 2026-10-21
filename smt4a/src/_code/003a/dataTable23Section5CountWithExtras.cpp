#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

typedef struct AocSystem {
    u8 unk000[0x40c];
    s32 extraCount; /* 0x40c */
} AocSystem;

extern AocSystem *g_aocSystem;

/* Entry count of data table 0x23's section 5, plus the add-on content's extra entries. */
s32 dataTable23Section5CountWithExtras(void)
{
    return dataTableGetCount(dataTableGetSection(0x23, 5)) + g_aocSystem->extraCount;
}

} /* extern "C" */
