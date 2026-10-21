/* NON_MATCHING: retail retains the constant one in r5 across scrSetResult; compiler uses immediates and omits that saved register. */
#include "battle/btlMain.h"

struct BattleEntryFlagsView {
    u8 unk000[0x274]; // 0x000
    u16 flags;        // 0x274
};

extern "C" {
u32 scrGetArg(u32 index);
BtlMainStateA* btlGetMainState();
BattleEntryFlagsView* FUN_003eaf20(BtlMainStateA* state);
void scrSetResult(s32 result);

// Report whether the current battle entry has the requested flag.
u32 FUN_0039d304()
{
    u32 bit = scrGetArg(0);
    BattleEntryFlagsView* entry = FUN_003eaf20(btlGetMainState());
    if (entry != NULL && (entry->flags & (1u << bit)) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}
}
