/* NON_MATCHING: typed port of its SMT IV twin btlSummonLoadAndSpawn (233 raw / 215 shape rows, 251 rows against
 * retail's 248). Control flow, calls, constants and stores are retail's; the registers are not: retail keeps the
 * battle in r6 and the load slot's flags and id addresses in r4/r5 (built: r4, r5/r6), holds the found resource in r7
 * and forms the entries' address and the module globals' only after the resource is stored (built: both hoisted
 * above the textures test, the resource spilled to the stack), reads an entry's flags with one `ldrd`, and loads
 * the camera's pointer, sets its flag, then loads the effect work's (built: both pool words first). */
#include "common.h"
#include "battle/BattleEncounter.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlEntryA.h"
#include "battle/BtlEffectFiles.h"
#include "battle/btlScript.h"
#include "battle/btlDebug.h"
#include "battle/EnemyDraw/EnemyDraw.h"
#include "gamedata/NkmEnemyLookup.h"
#include "gamedata/NkmEnemyRecord.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

enum {
    SUMMON_STEP_LOAD = 0,
    SUMMON_STEP_SPAWN = 1,
    SUMMON_LOAD_PARSED = 1,     /* BtlActionLoadSlot.flags: the resource's header is parsed */
    SUMMON_LOAD_READY = 2,      /* its textures are loaded */
    SUMMON_RESOURCE_COUNT = 42,
    SUMMON_LAST_RECORD = 53,
    SUMMON_FIRST_RECORD = 3     /* the roster records below belong to the party */
};

extern "C" {
extern BtlEffectFiles *g_btlAux;
extern BattleMarkerTimings g_btlMarkerTimings;
extern u32 DAT_0057aa1c;

BattleCleanupResource *stateEntryFindById(BtlMainStateA *battle, s32 id);
s32 nkdwLoaderParse(BattleCleanupResource *resource);
s32 aocResourceStartOnce(BattleCleanupResource *resource, s32 argument);
void btlEnsureEnemyDrawResources(BattleCleanupResource *resource, s32 mode);
BattleCleanupResource *resourceCacheGetOrLoadModel(s32 id, s32 load, s32 synchronous);
void FUN_004cae0c(BtlMainStateA *battle, BattleRosterRecordA *record, s32 duration, u32 alpha);
void FUN_004fe764(s32 unit, u32 argument, u32 target, u32 value, u32 parameter);
f32 FUN_004cb90c(s32 plane);

/* Whether one of the battle's loaded resources has the id: stateEntryFindById's search, inlined (the SMT IV
 * twin has the same helper). */
static __inline bool summonResourceIsLoaded(BtlMainStateA *battle, s32 id)
{
    for (s32 i = 0; i < SUMMON_RESOURCE_COUNT; i++) {
        BattleCleanupResource *resource = battle->actionLoad.resources[i];
        if (resource != NULL && resource->id == id) {
            return true;
        }
    }
    return false;
}

/* Steps the summon effect of the enemy `id`: step 0 finds its texture resource among the battle's loaded
 * ones or requests it, step 1 waits for the resource, then takes a free battle entry and roster record for
 * the summoned unit and queues its marker and flash. Returns 1 once the unit is spawned. */
s32 btlSummonLoadAndSpawn(BtlMainStateA *battle, u32 id)
{
    if (battle->actionLoad.selectedAction != -1) {
        return 1;
    }
    NkmEnemyRecordA *enemy = nkmEnemyFindById((u16)id);

    switch (battle->actionLoad.step) {
    case SUMMON_STEP_LOAD: {
        for (s32 i = 0; i < SUMMON_RESOURCE_COUNT; i++) {
            battle->actionLoad.slots[i].flags = 0;
            battle->actionLoad.slots[i].id = -1;
        }
        battle->actionLoad.selectedResource = NULL;

        s32 textureId = enemy->battleTextureId;
        if (summonResourceIsLoaded(battle, textureId)) {
            battle->actionLoad.slots[0].id = textureId;
            battle->actionLoad.slots[0].flags |= SUMMON_LOAD_PARSED | SUMMON_LOAD_READY;
        } else {
            BattleCleanupResource *resource = resourceCacheGetOrLoadModel(textureId, 1, 1);
            for (s32 i = 0; i < SUMMON_RESOURCE_COUNT; i++) {
                if (battle->actionLoad.resources[i] == NULL) {
                    battle->actionLoad.resources[i] = resource;
                    break;
                }
            }
            battle->actionLoad.slots[0].id = enemy->battleTextureId;
        }
        g_btlCamera->flags |= 0x4000;
        if (g_btlAux->flags & 0x400) {
            nameEntriesRegisterVerNames((BattleVersionResources *)g_btlAux);
        }
        battle->actionLoad.step = SUMMON_STEP_SPAWN;
        break;
    }
    case SUMMON_STEP_SPAWN: {
        BattleCleanupResource *resource = stateEntryFindById(battle, battle->actionLoad.slots[0].id);
        if (!(battle->actionLoad.slots[0].flags & SUMMON_LOAD_PARSED)) {
            if (nkdwLoaderParse(resource) == 0) {
                return 0;
            }
            battle->actionLoad.slots[0].flags |= SUMMON_LOAD_PARSED;
            aocHandleButtons((AocRequest *)resource, 7);
        }
        if (!(battle->actionLoad.slots[0].flags & SUMMON_LOAD_READY)) {
            if (aocResourceStartOnce(resource, 1) == 0) {
                return 0;
            }
            btlEnsureEnemyDrawResources(resource, 1);
            battle->actionLoad.slots[0].flags |= SUMMON_LOAD_READY;
            battle->actionLoad.selectedResource = resource;
        }

        /* The last free battle entry and the last free roster record. */
        s32 entryIndex = SUMMON_LAST_RECORD;
        while (entryIndex > -1 && (battle->entries[entryIndex].flags & g_btlMain.combatantMasks.required)) {
            entryIndex--;
        }
        battle->entries[entryIndex].flags = g_btlMain.combatantMasks.required | g_btlMain.summonMasks.summoned;

        s32 recordIndex = SUMMON_LAST_RECORD;
        while (recordIndex > SUMMON_FIRST_RECORD && (battle->roster[recordIndex].summon.status & 1) != 0) {
            recordIndex--;
        }
        BattleRosterRecordA *record = &g_btlMain.state->roster[recordIndex];
        record->summon.status = 0x20483;
        record->summon.combatantIndex = entryIndex;
        record->summon.position[0] = 0.0f;
        record->summon.position[1] = 0.0f;
        record->summon.position[2] = 15.0f;
        record->summon.unk062 = 0;
        record->summon.tints[0] = DAT_0057aa1c;
        record->summon.tints[1] = DAT_0057aa1c;
        record->summon.tints[2] = DAT_0057aa1c;
        record->summon.scale = FUN_004cb90c(1);
        record->summon.presentationFlags |= 0x800;
        battle->entries[entryIndex].data.parts[0] = enemy->battleTextureId;
        battle->entries[entryIndex].ids[0] = record->summon.memberId;
        battle->actionLoad.selectedAction = recordIndex;
        battle->actionLoad.step = SUMMON_STEP_LOAD;

        s16 flashDelay = (s16)g_btlMarkerTimings.normal.flashDelay;
        s16 startDelay = (s16)g_btlMarkerTimings.startDelay;
        s16 flashFrames = (s16)g_btlMarkerTimings.normal.flashFrames;
        FUN_004cae0c(battle, record, 0, 0);
        btlReflectQueueKind44(startDelay + flashDelay, (u32)btlUnitGet((BtlMainStateA *const *)g_btlScriptUnit), (u32)record,
                              0xFF, flashFrames, 0);
        u32 marker = 6;
        if (record->summon.status & 0x10) {
            marker = 7;
        }
        FUN_004fe764(startDelay, (u32)btlUnitGet((BtlMainStateA *const *)g_btlScriptUnit), (u32)record, marker, 13);
        return 1;
    }
    }
    return 0;
}

} /* extern "C" */
