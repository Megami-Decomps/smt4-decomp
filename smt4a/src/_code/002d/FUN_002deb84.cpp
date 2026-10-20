#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00 */ u8 unk00[0xD0];
    /* 0xD0 */ u32 value;
} Table;

typedef struct Global588e3c {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Table *table;
} Global588e3c;
extern Global588e3c DAT_00588e3c;

/* Returns the word at 0xD0 of the table at 0x20 of the global at 0x588E3C. */
u32 FUN_002deb84(void)
{
    return DAT_00588e3c.table->value;
}

} /* extern "C" */
