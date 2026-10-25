#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {
u32 scrGetArg(u32 index);
s32 FUN_00337360(BtlMainState *battle, u32 id);
void scrSetResult(u32 value);
/* Queries a battle entry and reports its state when available. */
s32 btlScriptQueryEntryState()
{
    u32 id = scrGetArg(0);
    if (!FUN_00337360(btlGetMainState(), id))
        return 0;
    scrSetResult(btlGetMainState()->actionCleanup.selectedAction);
    return 1;
}
}
