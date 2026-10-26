/* NON_MATCHING: parameter layout and VFP allocation (first/second vectors by value) match; retail keeps the constant 11 in r4 across the second flag check and reloads g_battleViewState, the build keeps the global's address in r4. */
#include "battle/btlView.h"

extern "C" {

extern BattleViewState g_battleViewState;

s32 gameFlagIsSet(u32 flag);

/* Stores two 3D vectors in the battle view while flag 0x4d0 is set, and starts its state 11. */
void FUN_00352308(BattleViewVec3 first, BattleViewVec3 second)
{
    if (gameFlagIsSet(0x4d0) != 0) {
        g_battleViewState.unk80.x = first.x;
        g_battleViewState.positionsSet = 1;
        g_battleViewState.unk80.y = first.y;
        g_battleViewState.unk80.z = first.z;
        g_battleViewState.unk8c = second;
        if (gameFlagIsSet(0x4d0) != 0) {
            g_battleViewState.unk2c = 11;
            g_battleViewState.pending = 0;
        }
    }
}

} /* extern "C" */
