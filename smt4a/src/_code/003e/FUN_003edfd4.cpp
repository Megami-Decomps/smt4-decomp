/* NON_MATCHING: retail hoists the stored 0 into r6 (`mov r6, #0` after btlUnitGet, push {r4-r6}); armcc materializes it at the store. */
#include "common.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match5_UnitCategory.h"

extern "C" {

s32 hasFlag80Or1000(u32 id, const ScriptCategoryUnit *unit);
UnitCategoryState *FUN_003eaf20(BtlMainStateA *state);
void FUN_003f1b3c(BtlMainStateA *state, s32 category, s32 kind, u8 info[8], s32 *effectId);
s32 FUN_0047f4cc(s32 effectId, f32 scale, f32 alphaA, f32 alphaB);

/* Unless the script unit is flagged 0x80/0x1000, recreate the special combatant's effect. */
void FUN_003edfd4(BtlMainStateA *state)
{
    ScriptCategoryUnit *unit = reinterpret_cast<ScriptCategoryUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    UnitCategoryState *entry;
    if (unit != NULL && hasFlag80Or1000(g_btlScriptUnit, unit)) {
        return;
    }
    entry = FUN_003eaf20(state);
    state->specialEffect = 0;
    if (entry != NULL) {
        u8 info[8];
        s32 effectId;
        s32 category = FUN_0019acdc(entry->record->id, 1);
        FUN_003f1b3c(state, category, 10, info, &effectId);
        state->specialEffect = FUN_0047f4cc(effectId, 1.0f, 0.707f, 0.707f);
    }
}

} /* extern "C" */
