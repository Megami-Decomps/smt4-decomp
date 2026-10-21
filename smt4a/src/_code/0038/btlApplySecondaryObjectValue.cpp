/* NON_MATCHING: retail uses `add r0, r0, #8192` where armcc emits `mov r1, #8832`. */
#include "common.h"

extern "C" {

struct BattleState { u8 unk0000[0x2280]; void *object; };
BattleState *btlGetMainState(void);
s32 FUN_0027099c(BattleState *state);
void messageAuxDispatch(void *object, s32 value);

void btlApplySecondaryObjectValue(void)
{
    BattleState *state = btlGetMainState();
    void *object = state->object;
    messageAuxDispatch(object, FUN_0027099c(state));
}

} /* extern "C" */
