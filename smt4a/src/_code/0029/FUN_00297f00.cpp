#include "map/mapTrap.h"

extern "C" {
extern MapTrapA* g_mapTrap;

/* Resets the trap motion: active, half of `count` as its period, both positions at `value`, no delta. */
void FUN_00297f00(s32 value, s32 count)
{
    g_mapTrap->motion.active = 1;
    g_mapTrap->motion.halfCount = static_cast<s32>(static_cast<f32>(count) * 0.5f);
    g_mapTrap->motion.count = 0;
    g_mapTrap->motion.initialValue = static_cast<f32>(value);
    g_mapTrap->motion.currentValue = static_cast<f32>(value);
    g_mapTrap->motion.delta = 0.0f;
    g_mapTrap->motion.previousDelta = 0.0f;
    g_mapTrap->motion.reverseCount = 0;
    g_mapTrap->motion.alternating = 0;
}
}
