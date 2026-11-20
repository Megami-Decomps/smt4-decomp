#include "shard/W6_W6Match7_BattleEffects.h"

extern "C" {
extern BattleEffectGlobals g_battleEffectSettings;

/* Resets a roster motion entry into state 2 using the configured initial amount and speed. */
void btlRosterMotionRestart(BattleRosterMotionA *motion)
{
    if (g_battleEffectSettings.resetMotion != 0) {
        motion->phaseSpeed = g_battleEffectSettings.motion.initialSpeed;
        motion->amount = g_battleEffectSettings.motion.initialAmount;
        motion->motionScale = g_battleEffectSettings.motion.initialSpeed;
        motion->state = 2;
        motion->phase = 0.0f;
        motion->offset = 0.0f;
        return;
    }
    if (motion->state == 2) {
        return;
    }
    motion->phaseSpeed = g_battleEffectSettings.motion.initialSpeed;
    motion->amount = g_battleEffectSettings.motion.initialAmount;
    motion->motionScale = g_battleEffectSettings.motion.initialSpeed;
    motion->state = 2;
    motion->phase = 0.0f;
}
} /* extern "C" */
