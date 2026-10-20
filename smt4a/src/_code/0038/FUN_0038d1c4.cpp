#include "common.h"

extern "C" {

/* Offset of the u16 value array inside a record's value table. */
#define TABLE_VALUES_OFFSET 0x118

typedef struct Record {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u8 *table;
} Record;

extern u32 g_btlScriptUnit;

int scrSetResult(int value);
int scrGetArg(void);
Record *btlUnitGet(u32 id);

/* Script command: passes entry (script argument 0) of the current record's value table to scrSetResult. */
u32 FUN_0038d1c4(void)
{
    int index = scrGetArg();
    u8 *table = btlUnitGet(g_btlScriptUnit)->table;

    scrSetResult(*(u16 *)(table + index * 2 + TABLE_VALUES_OFFSET));
    return 1;
}

} /* extern "C" */
