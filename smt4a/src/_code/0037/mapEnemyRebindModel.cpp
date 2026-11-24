#include "gamedata/EncounterSelection.h"
/* NON_MATCHING: 41 lines. The two release steps are the inlines mapEnemyAssignSpawns shares (map/MapEnemySlotModel.h).
 * The record lookup starts from NULL: retail never sets it for a kind outside 1-4 and reads it anyway, and leaving the
 * local unset (undefined behaviour, wave 89 review) gives 20 lines. Remaining at 20: the build loads model->body above the owned test (retail loads it in each arm, and reads the
 * flags through a second register in the borrowed arm), which also stops the registered test from being
 * predicated (`ldrbne; cmpne`), and it clears r8 one instruction early. */
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

// Release the previous owned or borrowed model, then bind a matching enemy selection record.
void mapEnemyRebindModel(MapEnemyEntryA *slot, s32 id, u32 kind)
{
    // The caller supplies one of the four supported selection kinds.
    for (s32 index = 0; index < 16; ++index) {
        MapEnemySpawn *record = enemySelectionRecordForKind(kind, index);
        if (record->owner != id)
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
