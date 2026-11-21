/* NON_MATCHING: the wide-view presets are one inline setter called per map, so armcc shares a single store block and
 * map 28 only loads its own values before branching into it, as in retail; remaining: the hoisted constants take other
 * VFP registers (retail s0 = 0.0, s1 = 170, s2-s4 = height, distance, angle). */
#include "game/GameState.h"
#include "map/LmapViewGlobals.h"

extern "C" {
void lmapCameraSetPresetDefaults(void);

/* Enables the camera presets and sets presets 2-4 to one wide view. */
static __inline void lmapCameraSetWidePresets(f32 height, f32 eyeHeight, f32 lateral, f32 distance, f32 angle)
{
    LmapView *work = g_lmapViewHolder.view;
    work->presetEnabled = 1;
    for (s32 i = 2; i < 5; ++i) {
        work->targetHeight[i] = height;
        work->eyeHeight[i] = eyeHeight;
        work->lateralDistance[i] = lateral;
        work->rearDistance[i] = distance;
        work->fieldOfView[i] = angle;
    }
}

/* Resets the camera presets and, on the maps with a wide view (25-28 in their listed areas), widens presets 2-4. */
void lmapCameraSetMapPresets(s32 map, s32 area)
{
    g_lmapViewHolder.view->presetEnabled = 0;
    lmapCameraSetPresetDefaults();
    if (map == 10 && area == 8) {
        LmapView *work = g_lmapViewHolder.view;
        work->targetHeight[3] = 100.0f;
        work->eyeHeight[3] = 200.0f;
        work->lateralDistance[3] = 0.0f;
        work->rearDistance[3] = 380.0f;
        work->fieldOfView[3] = 42.0f;
    }
    if (g_gameState.mapId == 25) {
        if (g_gameState.areaId == 3)
            lmapCameraSetWidePresets(250.0f, 170.0f, 0.0f, 700.0f, 50.0f);
    } else if (g_gameState.mapId == 26) {
        if (g_gameState.areaId == 1)
            lmapCameraSetWidePresets(250.0f, 170.0f, 0.0f, 700.0f, 50.0f);
    } else if (g_gameState.mapId == 27) {
        if (g_gameState.areaId == 1)
            lmapCameraSetWidePresets(250.0f, 170.0f, 0.0f, 700.0f, 50.0f);
    } else if (g_gameState.mapId == 28) {
        if (g_gameState.areaId == 1)
            lmapCameraSetWidePresets(350.0f, 170.0f, 0.0f, 550.0f, 55.0f);
    }
}
}
