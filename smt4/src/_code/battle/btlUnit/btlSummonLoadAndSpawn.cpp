/* NON_MATCHING: control flow, calls, constants and the instruction sequence are retail's; 160 rows differ, all
 * register names: retail keeps the battle in r6 and the load slot's flags and id addresses in r4/r5 (built: r4,
 * r5/r6), holds the reset loop's 0 in r9 with -1 in ip (built: ip and r7), and numbers the three marker timings
 * the other way round (flashDelay in r7, startDelay in r8). */
#include "common.h"
#include "battle/BattleEncounter.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/BtlEntry.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlEffectLoad.h"
#include "battle/BattleHelpers.h"
#include "battle/BattleUnitSlot.h"
#include "battle/btlScript.h"
#include "code/Code0027.h"
#include "code/Code0029_Smt4.h"
#include "gamedata/NkmEnemyLookup.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"
#include "AsdSDK/Source/Gfx/Effect/effGeometry.h"

enum {
    SUMMON_STEP_LOAD = 0,
    SUMMON_STEP_SPAWN = 1,
    SUMMON_LOAD_PARSED = 1,     /* BtlActionLoadSlot.flags: the resource's header is parsed */
    SUMMON_LOAD_READY = 2,      /* its textures are loaded */
    SUMMON_RESOURCE_COUNT = 42,
    SUMMON_LAST_RECORD = BATTLE_ENCOUNTER_RECORD_COUNT - 1,
    SUMMON_FIRST_RECORD = 3     /* the action records below belong to the party */
};

extern "C" {
extern BtlEffectWork *g_btlAux;
extern BattleMarkerTimings g_btlMarkerTimings;
extern u32 DAT_00439cf8;

s32 nkdwHeaderParse(BtlLoadedActionResource *resource);
void aocHandleButtons(BtlLoadedActionResource *resource, s32 mode);
void modelAnimationEnsureData(BtlLoadedActionResource *resource);
BtlLoadedActionResource *eventResourceCacheAcquire(s32 id, s32 queueLoad);
void FUN_0024057c(BtlMainState *battle, BtlActionRecord *record, s32 duration, u32 alpha);
f32 FUN_003c1964(s32 layer);

/* Whether one of the battle's loaded resources has the id: idSlotsFindEntryById's search, inlined. Retail
 * shows the inlined function: its result 1 is set before the loop (r7, reused for the step) and the found
 * arm stores a copy of the id. */
static __inline bool summonResourceIsLoaded(BtlMainState *battle, s32 id)
{
    for (s32 i = 0; i < SUMMON_RESOURCE_COUNT; i++) {
        BtlLoadedActionResource *resource = battle->actionLoad.resources[i];
        if (resource != NULL && resource->id == id) {
            return true;
        }
    }
    return false;
}

/* Steps the summon effect of the enemy `id`: step 0 finds its texture resource among the battle's loaded
 * ones or requests it, step 1 waits for the resource, then takes a free battle entry and action record for
 * the summoned unit and queues its marker and flash. Returns 1 once the unit is spawned. */
s32 btlSummonLoadAndSpawn(BtlMainState *battle, u32 id)
{
    if (battle->actionLoad.selectedAction != -1) {
        return 1;
    }
    NkmEnemyRecord *enemy = nkmEnemyFindById((u16)id);

    switch (battle->actionLoad.step) {
    case SUMMON_STEP_LOAD: {
        for (s32 i = 0; i < SUMMON_RESOURCE_COUNT; i++) {
            battle->actionLoad.slots[i].flags = 0;
            battle->actionLoad.slots[i].id = -1;
        }
        battle->actionLoad.selectedResource = NULL;

        s32 textureId = enemy->portraitId;
        if (summonResourceIsLoaded(battle, textureId)) {
            battle->actionLoad.slots[0].id = textureId;
            battle->actionLoad.slots[0].flags |= SUMMON_LOAD_PARSED | SUMMON_LOAD_READY;
        } else {
            BtlLoadedActionResource *resource = eventResourceCacheAcquire(textureId, 1);
            for (s32 i = 0; i < SUMMON_RESOURCE_COUNT; i++) {
                if (battle->actionLoad.resources[i] == NULL) {
                    battle->actionLoad.resources[i] = resource;
                    break;
                }
            }
            battle->actionLoad.slots[0].id = enemy->portraitId;
        }
        btlCameraSetFlags(g_btlMain, 0x4000);
        if (g_btlAux->flags & 0x400) {
            nameEntriesRegisterVerNames((BattleVersionResources *)g_btlAux);
        }
        battle->actionLoad.step = SUMMON_STEP_SPAWN;
        break;
    }
    case SUMMON_STEP_SPAWN: {
        BtlLoadedActionResource *resource =
            (BtlLoadedActionResource *)idSlotsFindEntryById(battle, battle->actionLoad.slots[0].id);
        if (!(battle->actionLoad.slots[0].flags & SUMMON_LOAD_PARSED)) {
            if (nkdwHeaderParse(resource) == 0) {
                return 0;
            }
            battle->actionLoad.slots[0].flags |= SUMMON_LOAD_PARSED;
            aocHandleButtons(resource, 7);
        }
        if (!(battle->actionLoad.slots[0].flags & SUMMON_LOAD_READY)) {
            if (aocTextureEntryLoadOnce((Obj *)resource) == 0) {
                return 0;
            }
            modelAnimationEnsureData(resource);
            battle->actionLoad.slots[0].flags |= SUMMON_LOAD_READY;
            battle->actionLoad.selectedResource = resource;
        }

        /* The last free battle entry and the last free action record. */
        s32 entryIndex = SUMMON_LAST_RECORD;
        while (entryIndex > -1 && (battle->entries[entryIndex].flags & 1) != 0) {
            entryIndex--;
        }
        battle->entries[entryIndex].flagMask = 0x200001;

        s32 recordIndex = SUMMON_LAST_RECORD;
        while (recordIndex > SUMMON_FIRST_RECORD && (battle->actions[recordIndex].status & 1) != 0) {
            recordIndex--;
        }
        BtlActionRecord *record = &g_btlMainState.state->actions[recordIndex];
        record->status = 0x20483;
        record->participant.combatantIndex = entryIndex;
        record->geometry.position[0] = 0.0f;
        record->geometry.position[1] = 0.0f;
        record->geometry.position[2] = 15.0f;
        record->summon.unk5A = 0;
        record->work[0] = DAT_00439cf8;
        record->work[1] = DAT_00439cf8;
        record->work[2] = DAT_00439cf8;
        record->geometry.scale = FUN_003c1964(1);
        record->presentationFlags |= 0x800;
        battle->entries[entryIndex].data.parts[0] = enemy->portraitId;
        battle->entries[entryIndex].ids[0] = record->memberId;
        battle->actionLoad.selectedAction = recordIndex;
        battle->actionLoad.step = SUMMON_STEP_LOAD;

        s16 flashDelay = (s16)g_btlMarkerTimings.normal.flashDelay;
        s16 startDelay = (s16)g_btlMarkerTimings.startDelay;
        s16 flashFrames = (s16)g_btlMarkerTimings.normal.flashFrames;
        FUN_0024057c(battle, record, 0, 0);
        btlReflectCreateKind22(startDelay + flashDelay, (u32)btlUnitGet((BtlMainState *const *)g_btlScriptUnit), (u32)record,
                               0xFF, flashFrames, 0);
        u32 marker = 6;
        if (record->status & 0x10) {
            marker = 7;
        }
        btlReflectInitKind9(startDelay, (u32)btlUnitGet((BtlMainState *const *)g_btlScriptUnit), (u32)record, marker, 13);
        return 1;
    }
    }
    return 0;
}

} /* extern "C" */
