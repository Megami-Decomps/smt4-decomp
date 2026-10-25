/* NON_MATCHING: selection-gate scalar mask loads and AND operands are scheduled in the opposite word order. */
#include "battle/btlMain.h"
#include "battle/btlUnit.h"
#include "shard/W6_W6Match5_UnitCategory.h"

extern "C" {
extern BtlMainGlobalsA g_btlMain;
extern void *g_btlUiBlock;
s32 hasFlag80Or1000(u32 id, const ScriptCategoryUnit *unit);
UnitCategoryState *FUN_003eaf20(BtlMainStateA *state);
s32 btlUiHasSelection(void *ui);
void FUN_0047f780(s32 category, s32 first, s32 second);

/* Request the scripted unit's category effect unless the current battle selection blocks it. */
void FUN_003ece9c(BtlMainStateA *state)
{
    ScriptCategoryUnit *unit = btlUnitGet(g_btlScriptUnit);
    if (unit != NULL && hasFlag80Or1000(g_btlScriptUnit, unit)) {
        return;
    }
    if (FUN_003eaf20(state) == NULL) {
        return;
    }
    u64 flags = state->stateFlags64.bits;
    u64 blocked = g_btlMain.selectionGate.words[0] |
                  ((u64)g_btlMain.selectionGate.words[1] << 32);
    if (flags & blocked) {
        return;
    }
    if (btlUiHasSelection(g_btlUiBlock)) {
        return;
    }
    UnitCategoryState *entry = FUN_003eaf20(state);
    s32 category = FUN_0019acdc(entry->record->id, 1);
    BtlUnitDataA *data = reinterpret_cast<BtlUnitA *>(btlUnitGet(g_btlScriptUnit))->data;
    switch ((s16)data->unk1BE) {
    case 1:
        FUN_0047f780(category, -1, 0);
        break;
    case 2:
        FUN_0047f780(category, *reinterpret_cast<s16 *>(data->unk1C0), 0);
        break;
    case 8:
        FUN_0047f780(category, 0, *reinterpret_cast<s16 *>(data->unk1C0));
        break;
    }
}
}
