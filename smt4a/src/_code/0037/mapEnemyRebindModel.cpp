#include "gamedata/EncounterSelection.h"
/* NON_MATCHING: guards a missing record (selection kinds outside 1–4), where retail reads an unset register.
 * The build also hoists the model-body load above the owned/borrowed test. */
#include "shard/W4_Match1b_RegisteredHandle.h"
#include "gamedata/NkmEnemyRecord.h"
#include "gamedata/NkmEnemyLookup.h"
#include "map/MapEnemyGlobal.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriModelManager.h"
#include "classes/Obj557b18.h"
#include "map/MapEnemySlotModel.h"

extern "C" {

/* The spawn record `index` of the table selection `kind` (1-4) uses; NULL for any other kind. */
static __inline MapEnemySpawn *enemySelectionRecordForKind(u32 kind, s32 index)
{
    MapEnemyA *enemies = g_mapEnemy;
    MapEnemySpawn *record = NULL;
    if (kind == 1)
        record = &enemies->spawnTables[0].entries[index];
    else if (kind == 2)
        record = &enemies->spawnTables[1].entries[index];
    else if (kind == 3)
        record = &enemies->spawnTables[0].entries[index];
    else if (kind == 4)
        record = &enemies->spawnTables[2].entries[index];
    return record;
}

/* Releases the previous owned or borrowed model, then binds a matching enemy selection record. */
void mapEnemyRebindModel(MapEnemyEntryA *slot, s32 id, u32 kind)
{
    for (s32 index = 0; index < 16; ++index) {
        MapEnemySpawn *record = enemySelectionRecordForKind(kind, index);
        if (record == NULL || record->owner != id)
            continue;
        mapEnemySlotUnregisterModel(slot);
        mapEnemySlotDropModel(slot);
        slot->result = record->encounterId;
        slot->enemyId = record->enemyId;
        NkmEnemyRecordA *unit = nkmEnemyFindById((u16)slot->enemyId);
        slot->level = unit->level & 0x7FFF;
        s32 variant = FUN_004bb870(slot->result);
        if (variant != 0)
            slot->variant = variant;
        slot->kind = record->kind;
        return;
    }
}
}
