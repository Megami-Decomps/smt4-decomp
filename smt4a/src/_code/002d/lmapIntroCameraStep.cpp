/* NON_MATCHING: 166 raw / 58 shape lines (from 285/261): the blocks, the two inlined announcements and their case
 * layout are retail's. Left: armcc keeps two of the first announcement's sound ids in r7/r9 (0x10002c6, +4) where
 * retail loads every id from the pool, so it saves r9/sl; the transition step is computed with vmla here, where
 * retail scales the step vector first (vldmia, three vmul), then adds the start (vldmia, three vadd). */
#include "common.h"
#include "game/GameStateA.h"
#include "map/LmapGlobals.h"
#include "map/LmapAreaAnnounce.h"

extern "C" {

void mapEaseSceneHeading(void);
u32 FUN_002e364c(f32 *target);
void FUN_00327ee8(f32 x, f32 z);

/* Steps the field map's intro camera: start the move, hold for ten frames and announce the area, slide the
 * target along the scene's transition for eighteen frames and announce its second part, then speed up.
 * The position eases toward the target every frame. */
void lmapIntroCameraStep(void)
{
    mapEaseSceneHeading();
    u8 volume = soundVolumeSettingGet();
    switch (g_lmapScene->state) {
    case 0:
        g_lmapScene->moveMode = 13;
        g_lmapScene->moveSpeed = 3.0f;
        g_lmapScene->state = 1;
        g_lmapScene->stateTime = 0;
        break;
    case 1:
        if (++g_lmapScene->stateTime > 9) {
            FUN_0033abd4(g_lmapScene->pose.targetPosition.x, g_lmapScene->pose.targetPosition.y,
                         g_lmapScene->pose.targetPosition.z);
            lmapAnnounceArea(0, volume);
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 2:
        if (++g_lmapScene->stateTime <= 18) {
            f32 t = (f32)g_lmapScene->stateTime;
            g_lmapScene->pose.targetPosition.x = g_lmapScene->transition.start.x + g_lmapScene->transition.step.x * t;
            g_lmapScene->pose.targetPosition.y = g_lmapScene->transition.start.y + g_lmapScene->transition.step.y * t;
            g_lmapScene->pose.targetPosition.z = g_lmapScene->transition.start.z + g_lmapScene->transition.step.z * t;
        } else {
            FUN_0033abd4(g_lmapScene->pose.targetPosition.x, g_lmapScene->pose.targetPosition.y,
                         g_lmapScene->pose.targetPosition.z);
            lmapAnnounceArea(1, volume);
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 3:
        g_lmapScene->moveSpeed = 5.0f;
        break;
    }

    LmapSceneA *scene = g_lmapScene;
    scene->pose.position.x += (scene->pose.targetPosition.x - scene->pose.position.x) * (1.0f / 3.0f);
    scene->pose.position.y += (scene->pose.targetPosition.y - scene->pose.position.y) * (1.0f / 6.0f);
    scene->pose.position.z += (scene->pose.targetPosition.z - scene->pose.position.z) * (1.0f / 3.0f);
    FUN_002e364c(&g_lmapScene->pose.targetPosition.x);
    FUN_00327ee8(g_lmapScene->pose.position.x, g_lmapScene->pose.position.z);
}

} /* extern "C" */
