#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

typedef struct UnkTable {
    /* 0x000 */ u8 unk000[0x3E4];
    /* 0x3E4 */ s32 value;
} UnkTable;

extern UnkTable *g_aocSystem;

/* Entry count of data table 0x23's section 0 plus the add-on system's extra count. */
s32 dataTable23Type0CountWithAoc(void)
{
    return dataTableGetCount(dataTableGetSection(0x23, 0)) + g_aocSystem->value;
}

} /* extern "C" */
