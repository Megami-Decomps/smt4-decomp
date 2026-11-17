#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

extern "C" s32 scrGetArg(s32 index);
extern "C" void scrSetResult(s32 value);

extern "C" u32 scrCommGetBattleMemberParameter(void)
{
    s32 member = scrGetArg(0);
    s32 index = scrGetArg(1);
    BtlCombatantEntryA* entry = btlMainFindEntryByListedId(btlGetMainState(), member);
    if (entry != NULL && index >= 0 && index < 9) {
        scrSetResult(entry->modifiers[index]);
    } else {
        scrSetResult(0);
    }
    return 1;
}
