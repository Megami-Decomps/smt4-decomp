/* NON_MATCHING: the half-angle conversion uses different VFP registers and pool order. */
#include "battle/BattleEffectProjection.h"
#include "shard/W6_W6Match7_BattleEffects.h"

/* Scales the effect to its camera plane unless it has a fixed scale. */
extern "C" void battleEffectUpdateProjectionScale(BattleEffectSetup *effect)
{
    if (effect->flags & 0x200000) {
        effect->scale = 1.0f;
    } else {
        effect->scale = battleCameraProjectionScale((s8)effect->variant);
    }
}
