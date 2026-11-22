/* NON_MATCHING: 20 lines, all in the collecting loop: retail counts in r1 and builds the record's address in
 * r0 (the index product and the record share a register, the table pointer goes to r3); this build counts in
 * r0 and builds the address in r1. battleShowUnitMarkers, the same loop without the ambush filter, matches there. */
#include "common.h"
#include <stdlib.h>
#include "battle/BattleEncounter.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlUnit.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"
#include "battle/BtlEffectLoad.h"
#include "battle/BattleHelpers.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"
#include "AsdSDK/Source/Gfx/Effect/effGeometry.h"

extern "C" {

extern BtlEffectWork *g_btlAux;
extern BattleMarkerTimings g_btlMarkerTimings;

void btlCameraStartMove(BtlCamera *camera, s32 frames);
void battleInitializeTurnOrder(BtlMainState *battle);
void btlSetSelectedListedValue(s32 value);
void FUN_003ae720(BtlUi *ui, s32 immediate);
u32 battleEncounterStepAwaitCompletion(BattleEncounterQuery *query, BtlMainState *battle);
s32 FUN_0019d7d4(const void *left, const void *right);
s32 pairedEntryTableContains(BtlMainState *battle, u16 id);
void FUN_0024057c(BtlMainState *battle, BtlActionRecord *record, s32 duration, u32 alpha);
void btlQueueKeyedScalarReflectAction(s32 actor, u32 options, u32 key, s32 mode, s32 checkDuplicates,
                                      u32 parameter, s32 first);

} /* extern "C" */

enum {
    BATTLE_ENCOUNTER_STEP_AWAIT = 15,
    BATTLE_ENCOUNTER_MARKERS_REQUESTED = 2,   /* BattleEncounterQuery::pending: the reference effects are in use */
    BATTLE_AMBUSH_SOUND = 0x10001D4
};

/* Starts the battle camera's move: over the editor's frame count when it has one, else 120 frames. */
static __inline void battleEncounterStartCamera(BtlCamera *camera)
{
    if (camera->editorValue == 0) {
        btlCameraStartMove(camera, 120);
    } else {
        btlCameraStartMove(camera, camera->editorValue);
    }
}

/* Encounter step 14: marks the units that ambush the party. Once the reference effects are loaded it
 * queues, for each waiting unit in order of its distance, a marker and a flash staggered by the
 * timing table (one sound for the first), starts the camera, sets the turn order up and moves on to
 * step 15. A battle that has no markers to show (or is not blocked) goes straight on. */
extern "C" u32 battleEncounterStepShowAmbushMarkers(BattleEncounterQuery *query, BtlMainState *battle)
{
    if (battle->encounterControl.blocked == 0 &&
        ((battle->encounter.flags & 0x2000000) || (battle->battleFlags & 2))) {
        battleEncounterStartCamera(g_btlMain);
        if (battle->battleFlags & 2) {
            battleInitializeTurnOrder(battle);
            battle->battleMask |= 0x200000;
            if (btlFindNthActiveSpecialEntry(battle, 1) < 0 && !(battle->encounter.flagsE4 & 0x20)) {
                btlSetSelectedListedValue(3);
            }
        } else {
            battleInitializeTurnOrder(battle);
            battle->battleMask |= 0x200000;
            FUN_003ae720(g_btlUiBlock, 0);
        }
        query->pending = 0;
        query->step = BATTLE_ENCOUNTER_STEP_AWAIT;
        return battleEncounterStepAwaitCompletion(query, battle);
    }
    if (query->pending == 0 && (g_btlAux->flags & BTL_EFFECT_JOB_REFERENCES_READY)) {
        btlCameraSetFlags(g_btlMain, 0x4000);
        /* BattleVersionResources (shard/W6_W6Match1_BattleVersionResources.h) is still a separate view of the
         * g_btlAux block (BtlEffectWork) that nameEntriesRegisterVerNames and its siblings take; merging the two is a follow-up. */
        nameEntriesRegisterVerNames((BattleVersionResources *)g_btlAux);
        query->pending |= BATTLE_ENCOUNTER_MARKERS_REQUESTED;
    }
    if (!(query->pending & BATTLE_ENCOUNTER_MARKERS_REQUESTED)) {
        return 0;
    }
    if (!FUN_003db7b4(g_btlAux)) {
        return 0;
    }
    /* The list has a scope of its own: retail leaves through a tail call in the first branch above,
     * which an address-taken array at function scope would rule out. */
    {
        BtlActionRecord *waiting[BATTLE_ENCOUNTER_RECORD_COUNT - 4];
        s32 waitingCount = 0;
        s32 i;

        for (i = 4; i < BATTLE_ENCOUNTER_RECORD_COUNT; i++) {
            BtlActionRecord *record = &battle->actions[i];

            if ((record->status & 1) && (record->status & 2) && (record->flags & 8)) {
                waiting[waitingCount++] = record;
            }
        }
        qsort(waiting, waitingCount, sizeof(waiting[0]), FUN_0019d7d4);

        s32 soundQueued = 0;
        s16 started = 0;

        for (i = 0; i < waitingCount; i++) {
            BtlActionRecord *record = waiting[i];

            if ((record->status & 1) && (record->status & 2) && (record->flags & 8)) {
                record->flags &= ~8;
                if (!(record->presentationFlags & 0x800) &&
                    !pairedEntryTableContains(battle, btlFindEntryBlockByMemberId(battle, record->memberId)->id)) {
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
                    btlReflectCreateKind22(started * stagger + startDelay + flashDelay, (u32)query, (u32)record, 0xFF,
                                           flashFrames, 0);
                    u32 marker = 6;

                    if (record->status & 0x10) {
                        marker = 7;
                    }
                    btlReflectInitKind9(started * stagger + startDelay, (u32)query, (u32)record, marker, 13);
                    if (soundQueued == 0) {
                        btlQueueKeyedScalarReflectAction(started * stagger, (u32)query, BATTLE_AMBUSH_SOUND, 0, 0, 0, 0);
                        soundQueued = 1;
                    }
                    started++;
                }
            }
        }
        battleEncounterStartCamera(g_btlMain);
        if (!(battle->battleFlags & 2)) {
            battleInitializeTurnOrder(battle);
            battle->battleMask |= 0x200000;
            FUN_003ae720(g_btlUiBlock, 0);
        }
        query->pending = 0;
        query->step = BATTLE_ENCOUNTER_STEP_AWAIT;
        return battleEncounterStepAwaitCompletion(query, battle);
    }
}
