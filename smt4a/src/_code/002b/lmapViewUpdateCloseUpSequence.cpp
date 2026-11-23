/* NON_MATCHING: 210 lines (352 vs 352 rows), complete: the same instructions with the saved registers permuted (retail
 * keeps the zero in r6, the holder in r4 and the scene in r5; the build r5, r6, r4). Retail also loads the two phase
 * numbers 10 and 50 before it tells phase 1 from phase 2, and keeps the pull-back's eye height in the register it
 * compares (vmovle against the build's vmovgt). */
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

/* Starts the next phase of the camera sequence. */
static __inline void viewAdvancePhase(void)
{
    LmapViewA *view = g_lmapViewHolder.view;

    view->phase++;
    view->unk008 = 0;
}

/* Jumps to `phase`. */
static __inline void viewSetPhase(s32 phase)
{
    LmapViewA *view = g_lmapViewHolder.view;

    view->phase = phase;
    view->unk008 = 0;
}

extern "C" {

/* Runs the map camera's close-up of the player (lmapViewUpdateOrbitSequence's sibling): the look-at point (`first`)
 * and the eye (`second`) are placed around the player by an angle off its heading, a distance and a height. From the
 * wait phase the sequence goes on to an overhead view or pulls back behind the player. */
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
        viewAdvancePhase();
        g_lmapViewHolder.eyeFloor = request.value.target.second.y;
        break;
    case kPhaseCloseUpSettle:
        if (g_lmapViewHolder.view->unk00C == 1) {
            viewSetPhase(kPhaseOverhead);
        } else if (g_lmapViewHolder.view->unk00C == 2) {
            viewSetPhase(kPhasePullBack);
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
            viewAdvancePhase();
            g_lmapViewHolder.eyeFloor = request.value.target.second.y;
        }
        break;
    case kPhaseWait:
        if (g_lmapViewHolder.view->unk00C == 1) {
            viewSetPhase(kPhaseOverhead);
        } else if (g_lmapViewHolder.view->unk00C == 2) {
            viewSetPhase(kPhasePullBack);
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
        viewAdvancePhase();
        break;
    case kPhaseOverheadMove:
        if (vectorPairTransitionStep() != 0) {
            viewAdvancePhase();
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
        viewAdvancePhase();
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
