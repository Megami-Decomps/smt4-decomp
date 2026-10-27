#include "battle/btlView.h"

extern "C" {
extern s32 gameFlagIsSet(u32 flag);
extern BattleViewState g_battleViewState;

/* The battle camera position, or a far-away default when flag 0x4D0 is clear. */
BattleViewVec3 btlViewGetCameraPositionOrDefault(void)
{
    BattleViewVec3 fallback;
    fallback.x = 0.0f;
    fallback.y = 100000.0f;
    fallback.z = 0.0f;
    if (gameFlagIsSet(0x4D0) != 0) {
        return g_battleViewState.camera.position;
    }
    return fallback;
}
}
