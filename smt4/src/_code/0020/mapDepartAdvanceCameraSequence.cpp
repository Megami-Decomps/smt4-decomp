/* NON_MATCHING: the code is retail's except for one register. Retail keeps the pointer to the running move in r3
 * across the calls to vectorPairTransitionStep (so it saves r4-r7 only and the frame is 4 bytes larger: 116 against
 * 112); the build keeps it in r4 and saves r8 too. armcc holds a value in r3 across a call only when it has seen
 * the callee: with vectorPairTransitionStep defined in the same file the build does the same (84 raw lines left,
 * the x and z registers of three points swapped), so the two belong to one translation unit. Apocalypse's twin,
 * lmapViewUpdateOrbitSequence, keeps the pointer in r4 and is IDENTICAL. */
#include "map/LmapViewGlobals.h"
#include "map/LmapGlobals.h"
#include "map/VectorPairTransition.h"
#include "util/TrigF32.h"

extern "C" {

void vectorPairTransitionStart(const VectorPairTransition *parameters);
s32 vectorPairTransitionStep(void);
}

#define DEGREES_TO_RADIANS 0.017453292f

/* Starts the next phase of the camera sequence. */
static __inline void viewAdvancePhase(void)
{
    LmapView *view = g_lmapViewHolder.view;

    view->phase++;
    view->unk008 = 0;
}

extern "C" {

/* Runs the map camera's scripted orbit of the player (the departure sequence). Each phase waits for the
 * running camera move and starts the next: the look-at point (`first`) and the eye (`second`) are placed
 * around the player by an angle off its heading, a distance and a height. The view is read through its
 * holder at every use, as retail does. */
void mapDepartAdvanceCameraSequence(void)
{
    const VectorPairTransition *move = &g_lmapViewHolder.view->move;
    VectorPairTransition request;
    BattleVector3 point;
    MapVector center;

    switch (g_lmapViewHolder.view->phase) {
    case 0:
        request.start.first = *(const BattleVector3 *)&g_lmapViewHolder.view->savedTarget;
        request.start.second = *(const BattleVector3 *)&g_lmapViewHolder.view->savedEye;
        center = g_lmapScene->pose.position;
        point.x = center.x + libm_sinf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 300.0f;
        point.y = center.y + 120.0f;
        point.z = center.z + libm_cosf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 300.0f;
        request.target.first = point;
        center = g_lmapScene->pose.position;
        point.x = center.x + libm_sinf((g_lmapScene->pose.heading - 155.0f) * DEGREES_TO_RADIANS) * 250.0f;
        point.y = center.y + 160.0f;
        point.z = center.z + libm_cosf((g_lmapScene->pose.heading - 155.0f) * DEGREES_TO_RADIANS) * 250.0f;
        request.target.second = point;
        request.duration = 30;
        request.smoothing = 0;
        request.smoothingDivisor = 0.0f;
        vectorPairTransitionStart(&request);
        g_lmapViewHolder.view->tracking = 1;
        viewAdvancePhase();
        break;
    case 1: /* push the eye in */
        if (vectorPairTransitionStep() != 0) {
            request.start.first = move->current.first;
            request.start.second = move->current.second;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 370.0f;
            point.y = center.y + 120.0f;
            point.z = center.z + libm_cosf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 370.0f;
            request.target.first = point;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf((g_lmapScene->pose.heading - 155.0f) * DEGREES_TO_RADIANS) * 200.0f;
            point.y = center.y + 160.0f;
            point.z = center.z + libm_cosf((g_lmapScene->pose.heading - 155.0f) * DEGREES_TO_RADIANS) * 200.0f;
            request.target.second = point;
            request.duration = 90;
            request.smoothing = 0;
            request.smoothingDivisor = 0.0f;
            vectorPairTransitionStart(&request);
            viewAdvancePhase();
        }
        break;
    case 2: /* raise the eye */
        if (vectorPairTransitionStep() != 0) {
            request.start.first = move->current.first;
            request.start.second = move->current.second;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 370.0f;
            point.y = center.y + 50.0f;
            point.z = center.z + libm_cosf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 370.0f;
            request.target.first = point;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf((g_lmapScene->pose.heading - 155.0f) * DEGREES_TO_RADIANS) * 250.0f;
            point.y = center.y + 250.0f;
            point.z = center.z + libm_cosf((g_lmapScene->pose.heading - 155.0f) * DEGREES_TO_RADIANS) * 250.0f;
            request.target.second = point;
            request.duration = 10;
            request.smoothing = 0;
            request.smoothingDivisor = 0.0f;
            vectorPairTransitionStart(&request);
            viewAdvancePhase();
        }
        break;
    case 3: /* keep rising */
        if (vectorPairTransitionStep() != 0) {
            request.start.first = move->current.first;
            request.start.second = move->current.second;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 370.0f;
            point.y = center.y + 50.0f;
            point.z = center.z + libm_cosf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 370.0f;
            request.target.first = point;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf((g_lmapScene->pose.heading - 155.0f) * DEGREES_TO_RADIANS) * 250.0f;
            point.y = center.y + 280.0f;
            point.z = center.z + libm_cosf((g_lmapScene->pose.heading - 155.0f) * DEGREES_TO_RADIANS) * 250.0f;
            request.target.second = point;
            request.duration = 80;
            request.smoothing = 0;
            request.smoothingDivisor = 0.0f;
            vectorPairTransitionStart(&request);
            viewAdvancePhase();
        }
        break;
    case 4: /* swing round, easing */
        if (vectorPairTransitionStep() != 0) {
            request.start.first = move->current.first;
            request.start.second = move->current.second;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf((g_lmapScene->pose.heading - 15.0f) * DEGREES_TO_RADIANS) * 350.0f;
            point.y = center.y + 140.0f;
            point.z = center.z + libm_cosf((g_lmapScene->pose.heading - 15.0f) * DEGREES_TO_RADIANS) * 350.0f;
            request.target.first = point;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf((g_lmapScene->pose.heading - 160.0f) * DEGREES_TO_RADIANS) * 150.0f;
            point.y = center.y + 150.0f;
            point.z = center.z + libm_cosf((g_lmapScene->pose.heading - 160.0f) * DEGREES_TO_RADIANS) * 150.0f;
            request.target.second = point;
            request.duration = 15;
            request.smoothing = 1;
            request.smoothingDivisor = 2.0f;
            vectorPairTransitionStart(&request);
            viewAdvancePhase();
        }
        break;
    case 5: /* drift to the final pose */
        if (vectorPairTransitionStep() != 0) {
            request.start.first = move->current.first;
            request.start.second = move->current.second;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf((g_lmapScene->pose.heading - 18.0f) * DEGREES_TO_RADIANS) * 350.0f;
            point.y = center.y + 140.0f;
            point.z = center.z + libm_cosf((g_lmapScene->pose.heading - 18.0f) * DEGREES_TO_RADIANS) * 350.0f;
            request.target.first = point;
            center = g_lmapScene->pose.position;
            point.x = center.x + libm_sinf((g_lmapScene->pose.heading - 165.0f) * DEGREES_TO_RADIANS) * 120.0f;
            point.y = center.y + 150.0f;
            point.z = center.z + libm_cosf((g_lmapScene->pose.heading - 165.0f) * DEGREES_TO_RADIANS) * 120.0f;
            request.target.second = point;
            request.duration = 105;
            request.smoothing = 0;
            request.smoothingDivisor = 0.0f;
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
