#include "battle/btlScript.h"
#include "battle/btlUnit.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

void btlEffectModelsResetPlayers(void *object);
void modelAttachmentsUpdateFromParents(void *object);
void FUN_003dc924(void *object, u32 value, s32 flag);
s32 btlEffectModelsLoaded(void *object, u32 value);

extern void *g_btlAux;

bool FUN_00339e90(void)
{
    BtlUnit *unit = reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
    s32 found = btlEffectModelsLoaded(g_btlAux, unit->unk594);

    if (found != 0) {
        modelAttachmentsUpdateFromParents(g_btlAux);
        btlEffectModelsResetPlayers(g_btlAux);
        FUN_003dc924(g_btlAux, unit->unk594, 1);
    }
    return found != 0;
}

} /* extern "C" */
