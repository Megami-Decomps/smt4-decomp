#include "common.h"

extern "C" {

struct BattleSecondaryState { u8 unk000[0x280]; void *object; };
struct BattleState { u8 unk0000[0x2000]; BattleSecondaryState secondary; };
BattleState *btlGetMainState(void);
u32 FUN_0027099c(void);
void messageAuxDispatch(void *object, s32 value);

void btlApplySecondaryObjectValue(void)
{
    BattleState *state = btlGetMainState();
    void *object = state->secondary.object;
    messageAuxDispatch(object, FUN_0027099c());
}

} /* extern "C" */
