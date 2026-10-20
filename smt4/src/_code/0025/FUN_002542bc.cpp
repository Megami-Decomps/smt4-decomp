#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00 */ u8 unk00[0xD8];
    /* 0xD8 */ u32 values[1];
} Table;

extern struct {
    u8 unk00[0x20];
    Table *table;
} DAT_0044de98;

u32 FUN_002542bc(int index)
{
    Table *table = DAT_0044de98.table;

    return table->values[index];
}

} /* extern "C" */
