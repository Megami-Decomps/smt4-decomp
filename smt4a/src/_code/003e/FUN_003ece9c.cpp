#include "battle/btlMain.h"
#include "battle/btlUnit.h"
#include "shard/W6_W6Match5_UnitCategory.h"
#include "code/Code0019.h"
#include "battle/BattleHelpers.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"

extern "C" {
s32 hasFlag80Or1000(u32 id, const ScriptCategoryUnit *unit);
UnitCategoryState *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *state);
void FUN_0047f780(s32 category, s32 first, s32 second);

/* Request the scripted unit's category effect unless the current battle selection blocks it. */
void FUN_003ece9c(BtlMainStateA *state)
{
    ScriptCategoryUnit *unit = reinterpret_cast<ScriptCategoryUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    if (unit != NULL && hasFlag80Or1000(g_btlScriptUnit, unit)) {
        return;
    }
    if (btlFindFirstEntryMatchingCategoryAndRequiredMask(state) == NULL) {
        return;
    }
    if (state->stateFlags64.bits & g_btlMain.selectionGate64.bits) {
        return;
    }
    if (btlUiHasSelection(g_btlUiBlock)) {
        return;
    }
    UnitCategoryState *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(state);
    s32 category = unitMapIdToCategory(entry->record->id, 1);
    BtlUnitDataA *data = reinterpret_cast<BtlUnitA *>(reinterpret_cast<ScriptCategoryUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit))))->data;
    switch (data->actionKind) {
    case 1:
        FUN_0047f780(category, -1, 0);
        break;
    case 2:
        FUN_0047f780(category, data->actionArg, 0);
        break;
    case 8:
        FUN_0047f780(category, 0, data->actionArg);
        break;
    }
}
}
