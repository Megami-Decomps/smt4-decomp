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
extern Global588e3c g_scrContext;

/* Stores `value` in entry `index` of the value table at 0xD8 of the table at 0x20 of the global at 0x588E3C. */
void scrWorkSetValue(s32 index, u32 value)
{
    Table *table = g_scrContext.table;
    table->values[index] = value;
}

} /* extern "C" */
