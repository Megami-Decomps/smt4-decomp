#include "battle/btlScript.h"
#include "battle/btlUnit.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

void FUN_003d9d9c(void *object);
void modelAttachmentsUpdateFromParents(void *object);
void FUN_003dc924(void *object, u32 value, s32 flag);
s32 FUN_003db1f4(void *object, u32 value);

extern void *DAT_00435d18;

bool FUN_00339e90(void)
{
    BtlUnit *unit = reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
    s32 found = FUN_003db1f4(DAT_00435d18, unit->unk594);

    if (found != 0) {
        modelAttachmentsUpdateFromParents(DAT_00435d18);
        FUN_003d9d9c(DAT_00435d18);
        FUN_003dc924(DAT_00435d18, unit->unk594, 1);
    }
    return found != 0;
}

} /* extern "C" */
