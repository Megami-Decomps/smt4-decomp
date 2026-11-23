/* NON_MATCHING: complete; the same instructions with three registers permuted. Retail keeps the phase in r3 and
 * the hoisted phase numbers 10 and 50 in r2 and ip (the build ip, r3, r2). The pull-back's first point is loaded
 * and stored as three floats at once (vldmia/vstmia s0-s2) where the build moves them one by one. */
#include "map/LmapViewGlobals.h"
#include "util/TrigF32.h"

extern "C" {

void vectorPairTransitionStart(const VectorPairTransitionA *parameters);
u32 vectorPairTransitionStep(void);
}

#define DEGREES_TO_RADIANS 0.017453292f

enum {
    kPhaseCloseUp = 0,
    kPhaseCloseUpSettle = 1,
    kPhaseWait = 2,         /* until `unk00C` asks for the overhead view (1) or the pull-back (2) */
    kPhaseOverhead = 10,
    kPhaseOverheadMove = 11,
    kPhasePullBack = 50,
    kPhasePullBackHold = 51
};

extern "C" {

/* Runs the map camera's close-up of the player (lmapViewUpdateOrbitSequence's sibling): the look-at point (`first`)
 * and the eye (`second`) are placed around the player by an angle off its heading, a distance and a height. From the
 * wait phase the sequence goes on to an overhead view or pulls back behind the player. The view is read through
 * its holder at every use and the phase changes are written in place, as retail does (it loads the two phase numbers
 * 10 and 50 once for the settle and wait phases). */
void lmapViewUpdateCloseUpSequence(void)
{
    VectorPairTransitionA request;
    BattleVector3 point;
    MapVector center;

    switch (g_lmapViewHolder.view->phase) {
    case kPhaseCloseUp:
        g_lmapViewHolder.view->unk00C = 0;
        request.value.start.first = *(const BattleVector3 *)&g_lmapViewHolder.view->savedTarget;
        request.value.start.second = *(const BattleVector3 *)&g_lmapViewHolder.view->savedEye;
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x + libm_sinf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 40.0f;
        point.y = center.y + 210.0f;
        point.z = center.z + libm_cosf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 40.0f;
        request.value.target.first = point;
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x + libm_sinf((g_lmapScene->pose.targetHeading - 135.0f) * DEGREES_TO_RADIANS) * 90.0f;
        point.y = center.y + 100.0f;
        point.z = center.z + libm_cosf((g_lmapScene->pose.targetHeading - 135.0f) * DEGREES_TO_RADIANS) * 90.0f;
        request.value.target.second = point;
        request.value.duration = 8;
        request.value.smoothing = 0;
        request.value.smoothingDivisor = 0.0f;
        vectorPairTransitionStart(&request);
        g_lmapViewHolder.view->moving = 1;
        g_lmapViewHolder.view->phase++;
        g_lmapViewHolder.view->unk008 = 0;
        g_lmapViewHolder.eyeFloor = request.value.target.second.y;
        break;
    case kPhaseCloseUpSettle:
        if (g_lmapViewHolder.view->unk00C == 1) {
            g_lmapViewHolder.view->phase = kPhaseOverhead;
            g_lmapViewHolder.view->unk008 = 0;
        } else if (g_lmapViewHolder.view->unk00C == 2) {
            g_lmapViewHolder.view->phase = kPhasePullBack;
            g_lmapViewHolder.view->unk008 = 0;
        } else if (vectorPairTransitionStep() != 0) {
            request.value.start.first = *(const BattleVector3 *)&g_lmapViewHolder.view->savedTarget;
            request.value.start.second = *(const BattleVector3 *)&g_lmapViewHolder.view->savedEye;
            center = g_lmapScene->pose.targetPosition;
            point.x = center.x + libm_sinf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 40.0f;
            point.y = center.y + 210.0f;
            point.z = center.z + libm_cosf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 40.0f;
            request.value.target.first = point;
            center = g_lmapScene->pose.targetPosition;
            point.x = center.x + libm_sinf((g_lmapScene->pose.targetHeading - 135.0f) * DEGREES_TO_RADIANS) * 90.0f;
            point.y = center.y + 100.0f;
            point.z = center.z + libm_cosf((g_lmapScene->pose.targetHeading - 135.0f) * DEGREES_TO_RADIANS) * 90.0f;
            request.value.target.second = point;
            request.value.duration = 300;
            request.value.smoothing = 0;
            request.value.smoothingDivisor = 0.0f;
            vectorPairTransitionStart(&request);
            g_lmapViewHolder.view->phase++;
            g_lmapViewHolder.view->unk008 = 0;
            g_lmapViewHolder.eyeFloor = request.value.target.second.y;
        }
        break;
    case kPhaseWait:
        if (g_lmapViewHolder.view->unk00C == 1) {
            g_lmapViewHolder.view->phase = kPhaseOverhead;
            g_lmapViewHolder.view->unk008 = 0;
        } else if (g_lmapViewHolder.view->unk00C == 2) {
            g_lmapViewHolder.view->phase = kPhasePullBack;
            g_lmapViewHolder.view->unk008 = 0;
        } else {
            vectorPairTransitionStep();
        }
        break;
    case kPhaseOverhead:
        request.value.start.first = *(const BattleVector3 *)&g_lmapViewHolder.view->savedTarget;
        request.value.start.second = *(const BattleVector3 *)&g_lmapViewHolder.view->savedEye;
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x + libm_sinf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 40.0f;
        point.y = center.y + 250.0f;
        point.z = center.z + libm_cosf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 40.0f;
        request.value.target.first = point;
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x + libm_sinf((g_lmapScene->pose.targetHeading - 170.0f) * DEGREES_TO_RADIANS) * 200.0f;
        point.y = center.y + 15.0f;
        point.z = center.z + libm_cosf((g_lmapScene->pose.targetHeading - 170.0f) * DEGREES_TO_RADIANS) * 200.0f;
        request.value.target.second = point;
        request.value.smoothing = 0;
        request.value.duration = 30;
        request.value.smoothingDivisor = 0.0f;
        vectorPairTransitionStart(&request);
        g_lmapViewHolder.view->phase++;
        g_lmapViewHolder.view->unk008 = 0;
        break;
    case kPhaseOverheadMove:
        if (vectorPairTransitionStep() != 0) {
            g_lmapViewHolder.view->phase++;
            g_lmapViewHolder.view->unk008 = 0;
        }
        break;
    case kPhasePullBack:
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x;
        point.y = center.y + 200.0f;
        point.z = center.z;
        request.value.target.first = point;
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x + libm_sinf((g_lmapScene->pose.targetHeading - 180.0f) * DEGREES_TO_RADIANS) * 200.0f;
        point.y = center.y + 10.0f;
        if (point.y <= g_lmapViewHolder.eyeFloor) {
            point.y = g_lmapViewHolder.eyeFloor;
        }
        point.z = center.z + libm_cosf((g_lmapScene->pose.targetHeading - 180.0f) * DEGREES_TO_RADIANS) * 200.0f;
        request.value.target.second = point;
        /* The move starts where it ends: it places the camera at once. */
        request.value.start.first = request.value.target.first;
        request.value.start.second = request.value.target.second;
        request.value.smoothing = 0;
        request.value.duration = 30;
        request.value.smoothingDivisor = 0.0f;
        vectorPairTransitionStart(&request);
        vectorPairTransitionStep();
        g_lmapViewHolder.view->phase++;
        g_lmapViewHolder.view->unk008 = 0;
        break;
    case kPhasePullBackHold:
        request.value.start.first = *(const BattleVector3 *)&g_lmapViewHolder.view->savedTarget;
        request.value.start.second = *(const BattleVector3 *)&g_lmapViewHolder.view->savedEye;
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x;
        point.y = center.y + 200.0f;
        point.z = center.z;
        request.value.target.first = point;
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x + libm_sinf((g_lmapScene->pose.targetHeading - 180.0f) * DEGREES_TO_RADIANS) * 200.0f;
        point.y = center.y + 10.0f;
        if (point.y <= g_lmapViewHolder.eyeFloor) {
            point.y = g_lmapViewHolder.eyeFloor;
        }
        point.z = center.z + libm_cosf((g_lmapScene->pose.targetHeading - 180.0f) * DEGREES_TO_RADIANS) * 200.0f;
        request.value.target.second = point;
        request.value.duration = 600;
        request.value.smoothing = 1;
        request.value.smoothingDivisor = 2.0f;
        vectorPairTransitionStart(&request);
        vectorPairTransitionStep();
        break;
    default:
        break;
    }
}

} /* extern "C" */
