#include "battle/btlScript.h"
#include "common.h"

extern "C" {

typedef struct StatsPart003b7f10 {
    /* 0x00 */ u8 unk00[0xbe];
    /* 0xbe */ u16 value;
} StatsPart003b7f10;

typedef struct UnitStats003b7f10 {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ StatsPart003b7f10 part;
} UnitStats003b7f10;

typedef struct BtlUnit003b7f10 {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitStats003b7f10 *stats;
} BtlUnit003b7f10;

typedef struct BtlState003b7f10 {
    /* 0x0000 */ u8 unk0000[0x2008];
    /* 0x2008 */ s64 flags;
} BtlState003b7f10;

u32 scrGetArg(u32 index);
BtlUnit003b7f10 *btlUnitGet(u32 id);
BtlState003b7f10 *btlGetMainState(void);
void FUN_003283c8(s32 arg);

/* Script command: sets the script unit's value to 12 and the main state's 64-bit flags to script argument 0 | 0x40000 (sign-extended). Returns 1. */
u32 FUN_003b7f10(s32 firstArg)
{
    u32 arg = scrGetArg(firstArg);

    StatsPart003b7f10 *part = &btlUnitGet(g_btlScriptUnit)->stats->part;

    part->value = 12;
    btlGetMainState()->flags = (s32)(arg | 0x40000);
    FUN_003283c8(1);
    return 1;
}

} /* extern "C" */
