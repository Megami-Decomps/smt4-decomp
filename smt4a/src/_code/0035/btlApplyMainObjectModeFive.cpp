#include "common.h"

extern "C" {

struct BattleState {
    /* 0x0000 */ u8 unk0000[0x226c];
    /* 0x226c */ void *object;
};
BattleState *btlGetMainState(void);
void FUN_002e48c4(void *object, s32 mode);

void btlApplyMainObjectModeFive(void)
{
    FUN_002e48c4(btlGetMainState()->object, 5);
}

} /* extern "C" */
