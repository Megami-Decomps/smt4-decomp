#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {

BtlEntry *btlMainFindActiveEntry(BtlMainState *state);

// Script command: whether the active battle entry's value `arg` has no kind or the kind 2 (1/0).
u32 scrCommBtlActiveEntryValueKindOk(void)
{
    s32 index = scrGetArg(0);
    BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
    if (entry != NULL) {
        u16 value = entry->values[index];
        bool hasKind = (value & 0xFC00) != 0;
        u32 expected = 2;
        if (!hasKind || expected == (u32)(value >> 10)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
