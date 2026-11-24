#include "battle/BtlScriptUnitFlags.h"
#include "shard/W6_W6Match5_UnitCategory.h"

extern "C" {

UnitCategoryState *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *state);
void FUN_003f1b3c(BtlMainStateA *state, s32 category, s32 kind, u8 info[8], s32 *effectId);
s32 FUN_0047f4cc(s32 effectId, f32 scale, f32 alphaA, f32 alphaB);

/* Replaces the special combatant's voice handle unless the script unit blocks playback. */
void btlRefreshSpecialCombatantVoice(BtlMainStateA *state)
{
    if (btlScriptUnitHasFlagsInline())
        return;

    UnitCategoryState *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(state);
    state->specialEffect = 0;
    if (entry != NULL) {
        u8 info[8];
        s32 effectId;
        s32 category = unitMapIdToCategory(entry->record->id, 1);
        FUN_003f1b3c(state, category, 10, info, &effectId);
        state->specialEffect = FUN_0047f4cc(effectId, 1.0f, 0.707f, 0.707f);
    }
}

} /* extern "C" */
