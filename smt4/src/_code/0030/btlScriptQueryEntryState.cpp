#include "battle/BtlMainAccess.h"
#include "common.h"

struct BattleState {
    /* 0x0000 */ u8 unk00[0x4454];
    /* 0x4454 */ u32 value;
};
extern "C" {
u32 scrGetArg(u32 index);
s32 FUN_00337360(BattleState *battle, u32 id);
void scrSetResult(u32 value);
/* Queries a battle entry and reports its state when available. */
s32 btlScriptQueryEntryState()
{
    u32 id = scrGetArg(0);
    if (!FUN_00337360(reinterpret_cast<BattleState *>(btlGetMainState()), id))
        return 0;
    scrSetResult(reinterpret_cast<BattleState *>(btlGetMainState())->value);
    return 1;
}
}
