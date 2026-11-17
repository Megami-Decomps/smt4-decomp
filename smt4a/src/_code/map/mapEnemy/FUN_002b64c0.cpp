#include "gamedata/EncounterSelection.h"
/* NON_MATCHING: retail spills r0-r2 and d0-d1 in the prologue (a variadic-style frame), keeps the resource name in a 32-byte buffer at sp, reads the kind back from the stack and runs an empty 21-iteration count-down loop before textFormatBuffer (not reproducible with honest code); this build uses a 0x54-byte buffer and no such loop. */
#include "Model/MoriModelContent.h"
#include "gamedata/DataTable4CValue.h"
#include "gfx/ControllerModel.h"
#include "shard/W9_W9Match7_EnemyModelSources.h"
#include "Model/MoriModelManager.h"
#include "map/MapEnemyGlobal.h"

extern "C" {
extern EnemyExtraModelSource DAT_00582204[];
void textFormatBuffer(char *, const char *, ...);
void *asdMemoryAllocTraced(u32, const char *, u32);
s32 FUN_004bc2dc(s32 kind, s32 flag);
}

struct ModelFlags {
    u32 vtable;
    u32 flags;
};

/* Loads the model of `slotIndex` (once), registers it and leaves it inactive. */
static __inline void ensureEnemyModel(MapEnemyA *owner, s32 slotIndex)
{
    MapEnemyExtraModelA *slot = &owner->extraModels[slotIndex];
    if (slot->model != NULL) {
        return;
    }
    char resourceName[0x54];
    textFormatBuffer(resourceName, "map/all/sym%03d.bam", DAT_00582204[slotIndex].modelId);
    MoriModelContent *model = static_cast<MoriModelContent *>(
        asdMemoryAllocTraced(32, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapEnemy.cpp", 0x375));
    if (model != NULL) {
        model = modelListInit(model);
    }
    slot->model = model;
    resourceOwnerLoadFileSync(slot->model, resourceName);
    moriModelContentLoadBody(slot->model, 0);
    Obj557b18 *body = slot->model->body;
    modelPlayClip(body, 0, 2, 0.0f, 0.0f);
    handleRegistryRegisterObject(g_handleRegistry, body);
    reinterpret_cast<ModelFlags *>(body)->flags |= 3;
    slot->registered = 1;
    slot->active = 0;
}

/* Reserves an enemy encounter slot of `group` for `owner`, loading its models; returns 1, or -1 when full. */
extern "C" s32 FUN_002b64c0(s32 owner, s32 kind, s32 group)
{
    MapEnemyA *enemies = g_mapEnemy;
    for (s32 i = 0; i < 16; i++) {
        MapEnemySpawn *reservation;
        if (group == 1) {
            MapEnemySpawnGroup *entry = &enemies->spawnGroups[i];
            if (entry->owner == -1) {
                entry->owner = owner;
                for (s32 j = 0; j < 16; j++) {
                    entry->encounterIds[j] = FUN_004bc2dc(kind, 0);
                    entry->enemyIds[j] = dataSelectPrioritizedCandidate(entry->encounterIds[j]);
                    u32 modelSlot = DAT_005806e0[entry->enemyIds[j]];
                    entry->kinds[j] = modelSlot;
                    ensureEnemyModel(g_mapEnemy, modelSlot);
                }
                return 1;
            }
            continue;
        } else if (group == 2) {
            reservation = &enemies->spawnTables[1].entries[i];
        } else if (group == 3) {
            reservation = &enemies->spawnTables[0].entries[i];
        } else if (group == 4) {
            reservation = &enemies->spawnTables[2].entries[i];
        } else {
            continue;
        }
        if (reservation->owner == -1) {
            reservation->owner = owner;
            reservation->encounterId = FUN_004bc2dc(kind, 0);
            reservation->enemyId = dataSelectPrioritizedCandidate(reservation->encounterId);
            u32 modelSlot = DAT_005806e0[reservation->enemyId];
            reservation->kind = modelSlot;
            ensureEnemyModel(g_mapEnemy, modelSlot);
            return 1;
        }
    }
    return -1;
}
