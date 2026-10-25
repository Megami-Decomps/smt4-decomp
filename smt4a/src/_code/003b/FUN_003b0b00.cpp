/* NON_MATCHING: register allocation only: retail forms the block pointer in r2 first (`add r2, r0, #8192`) and stores the low and high mask words separately (`str r1, [r2, #8]!`, `asr r0, r1, #31`, `str r0, [r2, #4]`); built keeps the pointer in r0 and merges the stores into `stm`. */
#include "battle/BtlMainAccess.h"
#include "util/CalleeContracts.h"
#include "battle/btlUnit.h"

extern "C" {


extern u32 g_btlScriptUnit;

u32 scrGetArg(s32 index);
BtlUnitA *btlUnitGet(u32 id);

/* Script command: puts the script unit in mode 12 and sets the battle mask to the argument with bit 17 added. */
u32 FUN_003b0b00(void)
{
    u32 arg = scrGetArg(0);
    BtlUnitDataA *data = btlUnitGet(g_btlScriptUnit)->data;
    data->unk1BE = 12;
    u32 *words = btlGetMainState()->commandWords;
    s32 mask = arg | 0x20000;
    words[2] = mask;
    words[3] = mask >> 31;
    btlSelectCandidateEntries(1);
    return 1;
}

} /* extern "C" */
