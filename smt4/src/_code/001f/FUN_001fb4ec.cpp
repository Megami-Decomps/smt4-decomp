/* NON_MATCHING: oscillation constant registers and phase-update scheduling differ. */
#include "map/MapOscillation.h"
#include "util/TrigF32.h"

extern "C" {
extern MapOscillationState g_mapTable;

// Advance one of three sine-wave speeds with the selected map displacement amplitude.
void FUN_001fb4ec(void)
{
    g_mapTable.displacement = 0;
    const f32 normalAmplitude = 32.0f;
    const f32 wideAmplitude = 48.0f;
    f32 phase = g_mapTable.phase + 0.1f;
    switch (g_mapTable.mode) {
    case 1:
        break;
    case 2:
        phase = g_mapTable.phase + 0.2f;
        break;
    case 3:
        phase = g_mapTable.phase + 0.05f;
        break;
    case 4:
        g_mapTable.phase = phase;
        g_mapTable.displacement = (s32)(FUN_0028250c(phase) * wideAmplitude);
        return;
    case 5:
        phase = g_mapTable.phase + 0.2f;
        g_mapTable.phase = phase;
        g_mapTable.displacement = (s32)(FUN_0028250c(phase) * wideAmplitude);
        return;
    case 6:
        phase = g_mapTable.phase + 0.05f;
        g_mapTable.phase = phase;
        g_mapTable.displacement = (s32)(FUN_0028250c(phase) * wideAmplitude);
        return;
    default:
        return;
    }
    g_mapTable.phase = phase;
    g_mapTable.displacement = (s32)(FUN_0028250c(phase) * normalAmplitude);
}
}
