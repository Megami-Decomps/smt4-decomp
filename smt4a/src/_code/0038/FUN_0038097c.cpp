/* NON_MATCHING: block layout only; retail places the shared "1"/"0" result blocks after the slot branch and keeps the null case's scrSetResult(0) separate. */
#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

namespace {
struct BattleScriptDemon {
    /* 0x000 */ u8 unk000[0x274];
    /* 0x274 */ u16 flags;
};
}

extern "C" {

s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BattleScriptDemon *FUN_003f0e20(void *state, s32 id);
void *btlUnitGet(u32 unit);
s32 bitsAt60Test(void *slot, u32 flag);

extern u32 g_btlScriptUnit;

/* Script command: test a flag bit of a battle demon (ids below 109) or of a save slot record. */
s32 FUN_0038097c(void)
{
    s32 id = scrGetArg(0);
    u16 bit = scrGetArg(1);

    btlUnitGet(g_btlScriptUnit);
    if (id < 109) {
        BattleScriptDemon *demon = FUN_003f0e20(static_cast<void *>(btlGetMainState()), id);
        if (demon == NULL) {
            scrSetResult(0);
            return 1;
        }
        if (demon->flags & (1 << bit)) {
            scrSetResult(1);
        } else {
            scrSetResult(0);
        }
    } else if (bitsAt60Test(gameGetSlotRecord(id - 109), bit)) {
        scrSetResult(1);
    } else {
        scrSetResult(0);
    }
    return 1;
}

} /* extern "C" */
