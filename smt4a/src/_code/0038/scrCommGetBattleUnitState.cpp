/* NON_MATCHING: retail uses `push {r4, r5, r6, lr}` where armcc emits `mov r0, #0`. */
#include "common.h"

extern "C" {

struct Unit { u8 unk000[0x3f4]; s8 state; };
void *btlGetMainState(void);
Unit *FUN_003f0e20(void *battle, s32 id);
s32 scrGetArg(u32 index);
void scrSetResult(s32 value);

s32 scrCommGetBattleUnitState(void)
{
    s32 id = scrGetArg(0);
    Unit *unit = FUN_003f0e20(btlGetMainState(), id);
    scrSetResult(unit != NULL ? unit->state : 0);
    return 1;
}

} /* extern "C" */
