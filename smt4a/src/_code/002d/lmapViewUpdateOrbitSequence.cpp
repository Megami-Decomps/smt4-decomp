/* NON_MATCHING: same instructions, row count (418) and literal pools as retail; what differs is register
 * colouring only. Retail keeps the zero in r5, &g_lmapViewHolder in r6, the one in r7 and &g_lmapScene in r8
 * (built: r6, r7, r8, r5), gives the eleven hoisted constants other d8-d13 halves (120 in s21, 250 in s25,
 * 0.0 in s20, ...) and so holds each point as s18/s21/s19 where the build uses s19/s20/s18 with a vldmia. */
#include "map/LmapViewGlobals.h"

extern "C" {
f32 libm_sinf(f32 radians);
f32 libm_cosf(f32 radians);
void FUN_002d1e44(const VectorPairTransitionA *parameters);
u32 FUN_0033a374(void);
}

#define DEGREES_TO_RADIANS 0.017453292f

/* Starts the next phase of the camera sequence. */
static __inline void viewAdvancePhase(void)
{
    LmapViewA *view = g_lmapViewHolder.view;

    view->phase++;
    view->unk008 = 0;
}

extern "C" {

// Run the map camera's scripted orbit of the player. Each phase waits for the running camera move and
// starts the next: the look-at point (`first`) and the eye (`second`) are placed around the player by
// an angle off its heading, a distance and a height.
void lmapViewUpdateOrbitSequence(void)
{
    LmapViewA *view = g_lmapViewHolder.view;
    const VectorPairTransition *move = &view->move.value;
    VectorPairTransitionA request;
    BattleVector3 point;
    MapVector center;

    switch (view->phase) {
    case 0:
        request.value.start.first = *reinterpret_cast<const BattleVector3 *>(&view->savedTarget);
        request.value.start.second = *reinterpret_cast<const BattleVector3 *>(&view->savedEye);
        center = g_lmapScene->pose.position;
        point.x = center.x + libm_sinf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 300.0f;
        point.y = center.y + 120.0f;
        point.z = center.z + libm_cosf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 300.0f;
        request.value.target.first = point;
        center = g_lmapScene->pose.position;
        point.x = center.x + libm_sinf((g_lmapScene->pose.heading - 155.0f) * DEGREES_TO_RADIANS) * 250.0f;
        point.y = center.y + 160.0f;
        point.z = center.z + libm_cosf((g_lmapScene->pose.heading - 155.0f) * DEGREES_TO_RADIANS) * 250.0f;
        request.value.target.second = point;
        request.value.duration = 30;
        request.value.smoothing = 0;
        request.value.smoothingDivisor = 0.0f;
        FUN_002d1e44(&request);
        g_lmapViewHolder.view->moving = 1;
        viewAdvancePhase();
        break;
    case 1: /* push the eye in */
        if (FUN_0033a374() != 0) {
            request.value.start.first = move->current.first;
            request.value.start.second = move->current.second;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 370.0f;
            point.y = center.y + 120.0f;
            point.z = center.z + libm_cosf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 370.0f;
            request.value.target.first = point;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf((g_lmapScene->pose.heading - 155.0f) * DEGREES_TO_RADIANS) * 200.0f;
            point.y = center.y + 160.0f;
            point.z = center.z + libm_cosf((g_lmapScene->pose.heading - 155.0f) * DEGREES_TO_RADIANS) * 200.0f;
            request.value.target.second = point;
            request.value.duration = 90;
            request.value.smoothing = 0;
            request.value.smoothingDivisor = 0.0f;
            FUN_002d1e44(&request);
            viewAdvancePhase();
        }
        break;
    case 2: /* raise the eye */
        if (FUN_0033a374() != 0) {
            request.value.start.first = move->current.first;
            request.value.start.second = move->current.second;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 370.0f;
            point.y = center.y + 50.0f;
            point.z = center.z + libm_cosf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 370.0f;
            request.value.target.first = point;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf((g_lmapScene->pose.heading - 155.0f) * DEGREES_TO_RADIANS) * 250.0f;
            point.y = center.y + 250.0f;
            point.z = center.z + libm_cosf((g_lmapScene->pose.heading - 155.0f) * DEGREES_TO_RADIANS) * 250.0f;
            request.value.target.second = point;
            request.value.duration = 10;
            request.value.smoothing = 0;
            request.value.smoothingDivisor = 0.0f;
            FUN_002d1e44(&request);
            viewAdvancePhase();
        }
        break;
    case 3: /* keep rising */
        if (FUN_0033a374() != 0) {
            request.value.start.first = move->current.first;
            request.value.start.second = move->current.second;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 370.0f;
            point.y = center.y + 50.0f;
            point.z = center.z + libm_cosf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 370.0f;
            request.value.target.first = point;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf((g_lmapScene->pose.heading - 155.0f) * DEGREES_TO_RADIANS) * 250.0f;
            point.y = center.y + 280.0f;
            point.z = center.z + libm_cosf((g_lmapScene->pose.heading - 155.0f) * DEGREES_TO_RADIANS) * 250.0f;
            request.value.target.second = point;
            request.value.duration = 80;
            request.value.smoothing = 0;
            request.value.smoothingDivisor = 0.0f;
            FUN_002d1e44(&request);
            viewAdvancePhase();
        }
        break;
    case 4: /* swing round, easing */
        if (FUN_0033a374() != 0) {
            request.value.start.first = move->current.first;
            request.value.start.second = move->current.second;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf((g_lmapScene->pose.heading - 15.0f) * DEGREES_TO_RADIANS) * 350.0f;
            point.y = center.y + 140.0f;
            point.z = center.z + libm_cosf((g_lmapScene->pose.heading - 15.0f) * DEGREES_TO_RADIANS) * 350.0f;
            request.value.target.first = point;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf((g_lmapScene->pose.heading - 160.0f) * DEGREES_TO_RADIANS) * 150.0f;
            point.y = center.y + 150.0f;
            point.z = center.z + libm_cosf((g_lmapScene->pose.heading - 160.0f) * DEGREES_TO_RADIANS) * 150.0f;
            request.value.target.second = point;
            request.value.duration = 15;
            request.value.smoothing = 1;
            request.value.smoothingDivisor = 2.0f;
            FUN_002d1e44(&request);
            viewAdvancePhase();
        }
        break;
    case 5: /* drift to the final pose */
        if (FUN_0033a374() != 0) {
            request.value.start.first = move->current.first;
            request.value.start.second = move->current.second;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf((g_lmapScene->pose.heading - 18.0f) * DEGREES_TO_RADIANS) * 350.0f;
            point.y = center.y + 140.0f;
            point.z = center.z + libm_cosf((g_lmapScene->pose.heading - 18.0f) * DEGREES_TO_RADIANS) * 350.0f;
            request.value.target.first = point;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf((g_lmapScene->pose.heading - 165.0f) * DEGREES_TO_RADIANS) * 120.0f;
            point.y = center.y + 150.0f;
            point.z = center.z + libm_cosf((g_lmapScene->pose.heading - 165.0f) * DEGREES_TO_RADIANS) * 120.0f;
            request.value.target.second = point;
            request.value.duration = 105;
            request.value.smoothing = 0;
            request.value.smoothingDivisor = 0.0f;
            FUN_002d1e44(&request);
            viewAdvancePhase();
        }
        break;
    case 6:
        if (FUN_0033a374() != 0) {
            viewAdvancePhase();
        }
        break;
    }
}

} /* extern "C" */
