/* NON_MATCHING: the state helper now gives retail's r4 = 11 and the reloaded g_battleViewState address;
 * only the first vector's VFP registers differ (retail copies x/y/z to s20/s19/s21 and stores y and z
 * separately, the build uses s19-s21 and merges y and z into one vstmia). */
#include "battle/btlView.h"

extern "C" {

extern BattleViewState g_battleViewState;

s32 gameFlagIsSet(u32 flag);

/* While flag 0x4d0 is set, puts the battle view in `state` with nothing pending. */
static __inline void battleViewStartState(s32 state)
{
    if (gameFlagIsSet(0x4d0) != 0) {
        BattleViewState *view = &g_battleViewState;
        view->unk2c = state;
        view->pending = 0;
    }
}

/* Stores two 3D vectors in the battle view while flag 0x4d0 is set, and starts its state 11. */
void FUN_00352308(BattleViewVec3 first, BattleViewVec3 second)
{
    if (gameFlagIsSet(0x4d0) != 0) {
        g_battleViewState.unk80.x = first.x;
        g_battleViewState.positionsSet = 1;
        g_battleViewState.unk80.y = first.y;
        g_battleViewState.unk80.z = first.z;
        g_battleViewState.unk8c = second;
        battleViewStartState(11);
    }
}

} /* extern "C" */
