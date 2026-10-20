#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00 */ u8 unk00[0xD8];
    /* 0xD8 */ u32 values[1];
} Table;

typedef struct Global588e3c {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Table *table;
} Global588e3c;
extern Global588e3c DAT_00588e3c;

/* Returns entry `index` of the value table at 0xD8 of the table at 0x20 of the global at 0x588E3C. */
u32 FUN_00275bb0(s32 index)
{
    Table *table = DAT_00588e3c.table;
    return table->values[index];
}

} /* extern "C" */
