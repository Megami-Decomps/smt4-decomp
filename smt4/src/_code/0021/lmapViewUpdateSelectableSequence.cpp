/* NON_MATCHING: typed rewrite from its sibling lmapViewUpdateCloseUpSequence (580 raw / 514 shape rows, 496 rows on
 * both sides; with the register names blanked 14 rows differ). The phases, calls, constants and stores are retail's.
 * Retail keeps the move's address in r3 across the calls of vectorPairTransitionStep, as it does in
 * mapDepartAdvanceCameraSequence (a `--multifile` run with autoinline on, docs/matching-guide.md): compiled alone the
 * address takes r4, which renumbers every saved register and, through the smoothing/duration pair no longer being
 * adjacent registers, turns retail's `stm {r7, r8}` into `strd`. */
#include "map/LmapViewGlobals.h"
#include "map/LmapGlobals.h"
#include "map/VectorPairTransition.h"
#include "util/TrigF32.h"

extern "C" {

void vectorPairTransitionStart(const VectorPairTransition *parameters);
s32 vectorPairTransitionStep(void);
}

#define DEGREES_TO_RADIANS 0.017453292f

enum {
    kPhaseCloseUp = 0,
    kPhaseCloseUpSettle = 1,
    kPhaseWait = 2,             /* until `unk00C` asks for one of the views below (1 to 4) */
    kPhaseOverhead = 10,
    kPhaseOverheadMove = 11,
    kPhaseOverheadDrift = 12,
    kPhaseSide = 50,
    kPhaseSideMove = 51,
    kPhaseBehind = 100,
    kPhaseBehindHold = 101,
    kPhaseBehindAgain = 150,
    kPhaseBehindAgainHold = 151
};

extern "C" {

/* Runs a map camera sequence around the player (lmapViewUpdateCloseUpSequence's sibling): the look-at point
 * (`first`) and the eye (`second`) are placed around the player by an angle off its heading, a distance and a
 * height. From the close-up's wait phase the sequence goes on to one of four views, chosen by `unk00C`. The view
 * is read through its holder at every use and the phase changes are written in place, as in the sibling. */
void lmapViewUpdateSelectableSequence(void)
{
    const VectorPairTransition *move = &g_lmapViewHolder.view->move;
    VectorPairTransition request;
    BattleVector3 point;
    MapVector center;

    switch (g_lmapViewHolder.view->phase) {
    case kPhaseCloseUp:
        g_lmapViewHolder.view->unk00C = 0;
        request.start.first = *(const BattleVector3 *)&g_lmapViewHolder.view->savedTarget;
        request.start.second = *(const BattleVector3 *)&g_lmapViewHolder.view->savedEye;
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x + libm_sinf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 100.0f;
        point.y = center.y + 90.0f;
        point.z = center.z + libm_cosf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 100.0f;
        request.target.first = point;
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x + libm_sinf((g_lmapScene->pose.targetHeading - 110.0f) * DEGREES_TO_RADIANS) * 110.0f;
        point.y = center.y + 210.0f;
        point.z = center.z + libm_cosf((g_lmapScene->pose.targetHeading - 110.0f) * DEGREES_TO_RADIANS) * 110.0f;
        request.target.second = point;
        request.duration = 8;
        request.smoothing = 0;
        request.smoothingDivisor = 0.0f;
        vectorPairTransitionStart(&request);
        g_lmapViewHolder.view->tracking = 1;
        g_lmapViewHolder.view->phase++;
        g_lmapViewHolder.view->unk008 = 0;
        g_lmapViewHolder.view->unk00C = 0;
        break;
    case kPhaseCloseUpSettle:
        if (g_lmapViewHolder.view->unk00C == 1) {
            g_lmapViewHolder.view->phase = kPhaseOverhead;
            g_lmapViewHolder.view->unk008 = 0;
        } else if (g_lmapViewHolder.view->unk00C == 2) {
            g_lmapViewHolder.view->phase = kPhaseSide;
            g_lmapViewHolder.view->unk008 = 0;
        } else if (g_lmapViewHolder.view->unk00C == 3) {
            g_lmapViewHolder.view->phase = kPhaseBehind;
            g_lmapViewHolder.view->unk008 = 0;
        } else if (g_lmapViewHolder.view->unk00C == 4) {
            g_lmapViewHolder.view->phase = kPhaseBehindAgain;
            g_lmapViewHolder.view->unk008 = 0;
        } else if (vectorPairTransitionStep() != 0) {
            request.start.first = move->current.first;
            request.start.second = move->current.second;
            center = g_lmapScene->pose.targetPosition;
            point.x = center.x + libm_sinf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 100.0f;
            point.y = center.y + 90.0f;
            point.z = center.z + libm_cosf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 100.0f;
            request.target.first = point;
            center = g_lmapScene->pose.targetPosition;
            point.x = center.x + libm_sinf((g_lmapScene->pose.targetHeading - 110.0f) * DEGREES_TO_RADIANS) * 110.0f;
            point.y = center.y + 210.0f;
            point.z = center.z + libm_cosf((g_lmapScene->pose.targetHeading - 110.0f) * DEGREES_TO_RADIANS) * 110.0f;
            request.target.second = point;
            request.duration = 300;
            request.smoothing = 0;
            request.smoothingDivisor = 0.0f;
            vectorPairTransitionStart(&request);
            g_lmapViewHolder.view->phase++;
            g_lmapViewHolder.view->unk008 = 0;
        }
        break;
    case kPhaseWait:
        if (g_lmapViewHolder.view->unk00C == 1) {
            g_lmapViewHolder.view->phase = kPhaseOverhead;
            g_lmapViewHolder.view->unk008 = 0;
        } else if (g_lmapViewHolder.view->unk00C == 2) {
            g_lmapViewHolder.view->phase = kPhaseSide;
            g_lmapViewHolder.view->unk008 = 0;
        } else if (g_lmapViewHolder.view->unk00C == 3) {
            g_lmapViewHolder.view->phase = kPhaseBehind;
            g_lmapViewHolder.view->unk008 = 0;
        } else if (g_lmapViewHolder.view->unk00C == 4) {
            g_lmapViewHolder.view->phase = kPhaseBehindAgain;
            g_lmapViewHolder.view->unk008 = 0;
        } else {
            vectorPairTransitionStep();
        }
        break;
    case kPhaseOverhead:
        request.start.first = *(const BattleVector3 *)&g_lmapViewHolder.view->savedTarget;
        request.start.second = *(const BattleVector3 *)&g_lmapViewHolder.view->savedEye;
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x + libm_sinf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 200.0f;
        point.y = center.y + 10.0f;
        point.z = center.z + libm_cosf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 200.0f;
        request.target.first = point;
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x + libm_sinf((g_lmapScene->pose.targetHeading - 180.0f) * DEGREES_TO_RADIANS) * 50.0f;
        point.y = center.y + 330.0f;
        point.z = center.z + libm_cosf((g_lmapScene->pose.targetHeading - 180.0f) * DEGREES_TO_RADIANS) * 50.0f;
        request.target.second = point;
        request.duration = 20;
        request.smoothing = 0;
        request.smoothingDivisor = 0.0f;
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
    case kPhaseOverheadDrift:
        request.start.first = *(const BattleVector3 *)&g_lmapViewHolder.view->savedTarget;
        request.start.second = *(const BattleVector3 *)&g_lmapViewHolder.view->savedEye;
        center = g_lmapScene->pose.position;
        point.x = center.x + libm_sinf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 160.0f;
        point.y = center.y + 50.0f;
        point.z = center.z + libm_cosf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 160.0f;
        request.target.first = point;
        center = g_lmapScene->pose.position;
        point.x = center.x + libm_sinf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 50.0f;
        point.y = center.y + 280.0f;
        point.z = center.z + libm_cosf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 50.0f;
        request.target.second = point;
        request.duration = 600;
        request.smoothing = 1;
        request.smoothingDivisor = 3.0f;
        vectorPairTransitionStart(&request);
        vectorPairTransitionStep();
        break;
    case kPhaseSide:
        request.start.first = *(const BattleVector3 *)&g_lmapViewHolder.view->savedTarget;
        request.start.second = *(const BattleVector3 *)&g_lmapViewHolder.view->savedEye;
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x + libm_sinf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 250.0f;
        point.y = center.y;
        point.z = center.z + libm_cosf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 250.0f;
        request.target.first = point;
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x + libm_sinf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 50.0f;
        point.y = center.y + 300.0f;
        point.z = center.z + libm_cosf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 50.0f;
        request.target.second = point;
        request.duration = 60;
        request.smoothing = 0;
        request.smoothingDivisor = 0.0f;
        vectorPairTransitionStart(&request);
        g_lmapViewHolder.view->phase++;
        g_lmapViewHolder.view->unk008 = 0;
        break;
    case kPhaseSideMove:
        if (vectorPairTransitionStep() != 0) {
            g_lmapViewHolder.view->phase++;
            g_lmapViewHolder.view->unk008 = 0;
        }
        break;
    case kPhaseBehind:
    case kPhaseBehindAgain:
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x + libm_sinf((g_lmapScene->pose.targetHeading + 180.0f) * DEGREES_TO_RADIANS) * 51.0f;
        point.y = center.y;
        point.z = center.z + libm_cosf((g_lmapScene->pose.targetHeading + 180.0f) * DEGREES_TO_RADIANS) * 51.0f;
        request.target.first = point;
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x + libm_sinf((g_lmapScene->pose.targetHeading + 180.0f) * DEGREES_TO_RADIANS) * 50.0f;
        point.y = center.y + 350.0f;
        point.z = center.z + libm_cosf((g_lmapScene->pose.targetHeading + 180.0f) * DEGREES_TO_RADIANS) * 50.0f;
        request.target.second = point;
        /* The move starts where it ends: it places the camera at once. */
        request.start.first = request.target.first;
        request.start.second = request.target.second;
        request.duration = 600;
        request.smoothing = 1;
        request.smoothingDivisor = 1.0f;
        vectorPairTransitionStart(&request);
        vectorPairTransitionStep();
        g_lmapViewHolder.view->phase++;
        g_lmapViewHolder.view->unk008 = 0;
        break;
    case kPhaseBehindHold:
        request.start.first = *(const BattleVector3 *)&g_lmapViewHolder.view->savedTarget;
        request.start.second = *(const BattleVector3 *)&g_lmapViewHolder.view->savedEye;
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x + libm_sinf((g_lmapScene->pose.targetHeading + 180.0f) * DEGREES_TO_RADIANS) * 51.0f;
        point.y = center.y;
        point.z = center.z + libm_cosf((g_lmapScene->pose.targetHeading + 180.0f) * DEGREES_TO_RADIANS) * 51.0f;
        request.target.first = point;
        center = g_lmapScene->pose.targetPosition;
        point.x = center.x + libm_sinf((g_lmapScene->pose.targetHeading + 180.0f) * DEGREES_TO_RADIANS) * 50.0f;
        point.y = center.y + 350.0f;
        point.z = center.z + libm_cosf((g_lmapScene->pose.targetHeading + 180.0f) * DEGREES_TO_RADIANS) * 50.0f;
        request.target.second = point;
        request.duration = 600;
        request.smoothing = 1;
        request.smoothingDivisor = 2.0f;
        vectorPairTransitionStart(&request);
        vectorPairTransitionStep();
        break;
    case kPhaseBehindAgainHold:
        vectorPairTransitionStep();
        break;
    default:
        break;
    }
}

} /* extern "C" */
