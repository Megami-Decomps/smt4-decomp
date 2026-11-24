/* NON_MATCHING: the half-angle conversion uses different VFP registers and pool order. */
#include "battle/BattleEffectProjection.h"

/* Computes the battle camera's projection scale for the selected plane. */
extern "C" f32 battleCameraGetProjectionScale(s32 plane)
{
    return battleCameraProjectionScale(plane);
}
