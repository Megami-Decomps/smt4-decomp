#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/BtlEntryLookup.h"



struct BtlScriptState {
    u8 unk0000[0x2008];  // 0x0000
    s64 firstValue;      // 0x2008
    s64 secondValue;     // 0x2010
};

extern "C" {

extern u32 g_btlScriptUnit; /* 0x57113c */

s32 scrGetArg(u32 index);
void btlSelectCandidateEntries(s32 mode);

/* Script command: puts the current unit in mode 12 and stores the two arguments (flagged 0x20000 and 0x40000) as the battle's pending values. */
u32 FUN_0037efc0(void)
{
    s32 first = scrGetArg(0);
    s32 second = scrGetArg(1);

    /* g_btlScriptUnit is the slot block pointer; btlUnitGet takes it as the context reference. */
    BtlUnitDataA *state = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit))->data;

    state->actionKind = 12;
    reinterpret_cast<BtlScriptState *>(btlGetMainState())->firstValue = first | 0x20000;
    reinterpret_cast<BtlScriptState *>(btlGetMainState())->secondValue = second | 0x40000;
    btlSelectCandidateEntries(2);
    return 1;
}

} /* extern "C" */
