#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00 */ u8 unk00[0xD8];
    /* 0xD8 */ u32 values[1];
} Table;

extern struct {
    u8 unk00[0x20];
    Table *table;
} g_scrContext;

u32 scrWorkGetValue(int index)
{
    Table *table = g_scrContext.table;

    return table->values[index];
}

} /* extern "C" */
