#include "common.h"

extern "C" {

typedef struct UnitFlags {
    /* 0x000 */ u8 unk000[0x2F5];
    /* 0x2F5 */ u8 flags[1];
} UnitFlags;

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ UnitFlags *flags;
} Unit;

extern u32 g_btlScriptUnit;

s32 scrGetArg(void);
Unit *btlUnitGet(u32 unit);
int scrSetResult(bool value);

/* Script command: result is whether the unit's flag byte for the argument is set. */
u32 scrCommBtlUnitIsFlagSet(void)
{
    s32 index = scrGetArg();

    UnitFlags *table = btlUnitGet(g_btlScriptUnit)->flags;

    scrSetResult(table->flags[index] != 0);
    return 1;
}

} /* extern "C" */
