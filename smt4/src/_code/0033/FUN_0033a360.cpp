#include "battle/btlUnit.h"
#include "shard/BattleSceneSlots.h"

extern "C" {

extern u32 g_btlScriptUnit;
extern u32 DAT_00435d18;

BtlUnit *btlUnitGet(u32 id);
void FUN_003cf438(u32 scriptUnit, BtlUnit *unit, s32 mode);
void entryTableInvalidate(u32 table);
void FUN_0023e52c(u32 scriptUnit, BtlUnit *unit, s32 kind, s32 arg3, s32 arg4);
void FUN_003cc944(u32 scriptUnit, BtlUnit *unit, s32 mode);
void FUN_0027dd9c(u32 table);
void battleCreateSecondaryModels(u32 table, u32 models);

/* Resets the scene's target slots for the script unit and rebuilds its secondary models. */
void FUN_0033a360(BattleSceneSlots *scene)
{
    BtlUnit *unit = btlUnitGet(g_btlScriptUnit);
    s32 i;

    FUN_003cf438(g_btlScriptUnit, unit, 1);
    for (i = 0; i < 109; i++) {
        scene->slots[i].primaryId = -1;
        scene->slots[i].secondaryId = -1;
        scene->slots[i].effectId = -1;
    }
    entryTableInvalidate(DAT_00435d18);
    FUN_0023e52c(g_btlScriptUnit, unit, 5, 0, 1);
    FUN_003cc944(g_btlScriptUnit, unit, 1);
    FUN_0027dd9c(DAT_00435d18);
    battleCreateSecondaryModels(DAT_00435d18, unit->unk594);
}

} /* extern "C" */
