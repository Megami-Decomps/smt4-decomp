/* NON_MATCHING: compiler uses R0 for the trap and R1 for zero; retail uses R1 for the trap, R2 for zero and R0 for the active byte. Floating-point operations match. */
#include "map/mapTrap.h"

extern "C" {
extern MapTrapA* g_mapTrap;

void FUN_00297f00(s32 value, s32 count)
{
    MapTrapA* trap = g_mapTrap;
    trap->motion.active = 1;
    trap->motion.halfCount = static_cast<s32>(static_cast<f32>(count) * 0.5f);
    trap->motion.count = 0;
    trap->motion.initialValue = static_cast<f32>(value);
    trap->motion.currentValue = static_cast<f32>(value);
    trap->motion.delta = 0.0f;
    trap->motion.previousDelta = 0.0f;
    trap->motion.reverseCount = 0;
    trap->motion.alternating = 0;
}
}
