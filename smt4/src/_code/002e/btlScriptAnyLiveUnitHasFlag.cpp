#include "shard/W4_W4Match2_BtlUnits.h"
#include "script/ScriptArgs.h"

extern "C" {
BtlState* btlGetMainState(void);
BtlUnitEntry* btlMainFindActiveEntry(BtlState* state);
s32 scrGetArg(s32 index);
s32 btlScriptResolveGroupArg(s32 group);
void FUN_002499fc(u32 group, s32* first, s32* count);

// Report whether any live unit in the requested group has the specified flag.
u32 btlScriptAnyLiveUnitHasFlag(void)
{
    u32 flag = scrGetArg(0);
    s32 first;
    s32 count;
    u32 group = btlScriptResolveGroupArg(scrGetArg(1));
    FUN_002499fc(group, &first, &count);
    for (s32 index = first; index < count + first; ++index) {
        BtlUnitEntry* unit = &btlGetMainState()->units[index];
        if (!(unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) &&
            (unit->flagMask & (1u << flag))) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlUnitEntry* active = btlMainFindActiveEntry(btlGetMainState());
        if (active != NULL && (active->flagMask & (1u << flag))) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
