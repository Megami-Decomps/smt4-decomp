#include "battle/btlScript.h"
#include "common.h"

extern "C" {

/* Offset of the u16 value array inside a record's value table. */
#define TABLE_VALUES_OFFSET 0x118

typedef struct Skill {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 packed;      /* bits 11..15: the value passed on */
} Skill;

typedef struct Record {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u8 *table;
} Record;

int dataTable04FindById(u32 id);
int scrSetResult(int value);
int scrGetArg(u32 index);
Record *btlUnitGet(u32 id);

/* Script command: looks up entry (script argument 0) of the current record's value table, resolves it through dataTable04FindById and passes bits 11..15 of its packed word (or 0 if none) to scrSetResult. */
u32 FUN_003a8dbc(void)
{
    int index = scrGetArg(0);
    u8 *table = btlUnitGet(g_btlScriptUnit)->table;
    Skill *skill = (Skill *)dataTable04FindById(*(u16 *)(table + index * 2 + TABLE_VALUES_OFFSET));

    if (skill != NULL) {
        scrSetResult((skill->packed & 0xffff) >> 11);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
