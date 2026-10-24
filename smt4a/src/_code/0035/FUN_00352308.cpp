/* NON_MATCHING: register allocation and store merging: retail keeps the second vector in s16-s18 and stores the first one scalar by scalar around the flag store; the build merges and reorders the vstm/vstr stores. */
#include "battle/btlView.h"

extern "C" {

extern BattleViewState g_battleViewState;

s32 gameFlagIsSet(u32 flag);

/* Stores two 3D vectors in the battle view while flag 0x4d0 is set, and starts its state 11. */
void FUN_00352308(f32 x1, f32 y1, f32 z1, BattleViewVec3 second)
{
    if (gameFlagIsSet(0x4d0) != 0) {
        g_battleViewState.unk80.x = x1;
        g_battleViewState.positionsSet = 1;
        g_battleViewState.unk80.y = y1;
        g_battleViewState.unk80.z = z1;
        g_battleViewState.unk8c = second;
        if (gameFlagIsSet(0x4d0) != 0) {
            g_battleViewState.unk2c = 11;
            g_battleViewState.pending = 0;
        }
    }
}

} /* extern "C" */
