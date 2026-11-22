/* NON_MATCHING: 14 lines, all in the normal arm of the timing table: retail walks the table with a
 * post-incremented pointer and narrows stagger, flashDelay, flashFrames, startDelay in that order; this
 * build loads flashDelay and flashFrames as a pair and narrows startDelay before flashFrames. The large
 * arm, the loops and the calls are retail's. */
#include "common.h"
#include <stdlib.h>
#include "battle/BattleEncounter.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlEffectLoad.h"
#include "battle/BattleHelpers.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"
#include "AsdSDK/Source/Gfx/Effect/effGeometry.h"

extern "C" {

extern BtlEffectWork *g_btlAux;
extern BattleMarkerTimings g_btlMarkerTimings;

s32 compareDistanceFromOrigin(const void *left, const void *right);
void FUN_0024057c(BtlMainState *battle, BtlActionRecord *record, s32 duration, u32 alpha);
void btlCameraStartMove(BtlCamera *camera, s32 frames);

} /* extern "C" */

/* Marks every unit in the battle that has no marker yet: queues, in order of the units' distance,
 * a marker and a flash for each, staggered by the timing table, then starts the camera's 120-frame
 * move. (battleEncounterStepShowAmbushMarkers does the same for the units of an ambush, with a sound for the first.) */
extern "C" void battleShowUnitMarkers(BtlMainState *battle)
{
    btlCameraSetFlags(g_btlMain, 0x4000);
    /* BattleVersionResources (shard/W6_W6Match1_BattleVersionResources.h) is still a separate view of the
     * g_btlAux block (BtlEffectWork) that FUN_00240614 and its siblings take; merging the two is a follow-up. */
    FUN_00240614((BattleVersionResources *)g_btlAux);

    BtlActionRecord *shown[BATTLE_ENCOUNTER_RECORD_COUNT - 4];
    s32 shownCount = 0;

    s32 i;

    for (i = 4; i < BATTLE_ENCOUNTER_RECORD_COUNT; i++) {
        BtlActionRecord *record = &battle->actions[i];

        if ((record->status & 1) && (record->status & 2)) {
            shown[shownCount++] = record;
        }
    }
    qsort(shown, shownCount, sizeof(shown[0]), compareDistanceFromOrigin);

    s32 firstQueued = 0;
    s16 started = 0;

    for (i = 0; i < shownCount; i++) {
        BtlActionRecord *record = shown[i];

        if ((record->status & 1) && (record->status & 2) && !(record->presentationFlags & 0x800)) {
            s16 startDelay;
            s16 stagger;
            s16 flashDelay;
            s16 flashFrames;

            record->presentationFlags |= 0x800;
            if (record->status & 0x10) {
                startDelay = (s16)g_btlMarkerTimings.startDelay;
                stagger = (s16)g_btlMarkerTimings.large.stagger;
                flashDelay = (s16)g_btlMarkerTimings.large.flashDelay;
                flashFrames = (s16)g_btlMarkerTimings.large.flashFrames;
            } else {
                startDelay = (s16)g_btlMarkerTimings.startDelay;
                stagger = (s16)g_btlMarkerTimings.normal.stagger;
                flashDelay = (s16)g_btlMarkerTimings.normal.flashDelay;
                flashFrames = (s16)g_btlMarkerTimings.normal.flashFrames;
            }
            FUN_0024057c(battle, record, 0, 0);
            btlReflectCreateKind22(started * stagger + startDelay + flashDelay, 0, (u32)record, 0xFF, flashFrames, 0);
            u32 marker = 6;

            if (record->status & 0x10) {
                marker = 7;
            }
            btlReflectInitKind9(started * stagger + startDelay, 0, (u32)record, marker, 13);
            /* the ambush version queues its sound here; this one only keeps the flag */
            if (firstQueued == 0) {
                firstQueued = 1;
            }
            started++;
        }
    }
    btlCameraStartMove(g_btlMain, 120);
}
