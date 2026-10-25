/* NON_MATCHING: the shared constant one (shift base and return value) is now kept across scrSetResult as in retail; only the saved-register numbers differ (retail: bit r4, one r5). */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "script/ScriptArgs.h"
#include "shard/scrGetArg.h"

struct BattleEntryFlagsView {
    u8 unk000[0x274]; // 0x000
    u16 flags;        // 0x274
};

extern "C" {
BattleEntryFlagsView* FUN_003eaf20(BtlMainStateA* state);
void scrSetResult(s32 result);

// Report whether the current battle entry has the requested flag.
u32 FUN_0039d304()
{
    u32 bit = scrGetArg(0);
    BattleEntryFlagsView* entry = FUN_003eaf20(btlGetMainState());
    u32 result = 1;
    if (entry != NULL && (entry->flags & (result << bit)) != 0) {
        scrSetResult(1);
        return result;
    }
    scrSetResult(0);
    return result;
}
}
