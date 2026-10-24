#include "common.h"

struct ScriptUnitState {
    u8 unk000[0x1BE];  // 0x000
    u16 mode;          // 0x1BE
};

struct ScriptUnitRef {
    u8 unk00[0x28];          // 0x00
    ScriptUnitState *state;  // 0x28
};

struct BtlScriptState {
    u8 unk0000[0x2008];  // 0x0000
    s64 firstValue;      // 0x2008
    s64 secondValue;     // 0x2010
};

extern "C" {

extern u32 g_btlScriptUnit; /* 0x57113c */

s32 scrGetArg(u32 index);
ScriptUnitRef *btlUnitGet(u32 unit);
BtlScriptState *btlGetMainState(void);
void FUN_003283c8(s32 mode);

/* Script command: puts the current unit in mode 12 and stores the two arguments (flagged 0x20000 and 0x40000) as the battle's pending values. */
u32 FUN_0037efc0(void)
{
    s32 first = scrGetArg(0);
    s32 second = scrGetArg(1);

    ScriptUnitState *state = btlUnitGet(g_btlScriptUnit)->state;

    state->mode = 12;
    btlGetMainState()->firstValue = first | 0x20000;
    btlGetMainState()->secondValue = second | 0x40000;
    FUN_003283c8(2);
    return 1;
}

} /* extern "C" */
