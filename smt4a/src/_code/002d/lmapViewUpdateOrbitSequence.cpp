#include "map/LmapViewGlobals.h"
#include "util/TrigF32.h"

extern "C" {

void vectorPairTransitionStart(const VectorPairTransitionA *parameters);
u32 vectorPairTransitionStep(void);
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

/* Runs the map camera's scripted orbit of the player. Each phase waits for the running camera move and
 * starts the next: the look-at point (`first`) and the eye (`second`) are placed around the player by
 * an angle off its heading, a distance and a height. The view is read through its holder at every use,
 * as retail does. */
void lmapViewUpdateOrbitSequence(void)
{
    const VectorPairTransition *move = &g_lmapViewHolder.view->move.value;
    VectorPairTransitionA request;
    BattleVector3 point;
    MapVector center;

    switch (g_lmapViewHolder.view->phase) {
    case 0:
        request.value.start.first = *(const BattleVector3 *)&g_lmapViewHolder.view->savedTarget;
        request.value.start.second = *(const BattleVector3 *)&g_lmapViewHolder.view->savedEye;
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
        vectorPairTransitionStart(&request);
        g_lmapViewHolder.view->moving = 1;
        viewAdvancePhase();
        break;
    case 1: /* push the eye in */
        if (vectorPairTransitionStep() != 0) {
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
            vectorPairTransitionStart(&request);
            viewAdvancePhase();
        }
        break;
    case 2: /* raise the eye */
        if (vectorPairTransitionStep() != 0) {
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
            vectorPairTransitionStart(&request);
            viewAdvancePhase();
        }
        break;
    case 3: /* keep rising */
        if (vectorPairTransitionStep() != 0) {
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
            vectorPairTransitionStart(&request);
            viewAdvancePhase();
        }
        break;
    case 4: /* swing round, easing */
        if (vectorPairTransitionStep() != 0) {
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
            vectorPairTransitionStart(&request);
            viewAdvancePhase();
        }
        break;
    case 5: /* drift to the final pose */
        if (vectorPairTransitionStep() != 0) {
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
            vectorPairTransitionStart(&request);
            viewAdvancePhase();
        }
        break;
    case 6:
        if (vectorPairTransitionStep() != 0) {
            viewAdvancePhase();
        }
        break;
    }
}

} /* extern "C" */
