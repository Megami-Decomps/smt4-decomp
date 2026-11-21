/* NON_MATCHING: the masks are g_btlAction's fields at 0xD8/0x188/0xE0/0xF0 (the old view read 0x138 bytes too far);
 * retail loads the state flags with ldm and tests the entry pointer for NULL in the target loop, and allocates differently. */
#include "battle/btlAction.h"
#include "battle/btlUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/ConsumableRecordA.h"
#include "gamedata/SkillDataRecord.h"
#include "battle/BtlGlobals.h"

extern "C" {

/* Selects an action's camera mode unless battle-state or marked-target flags suppress it. */
void FUN_004e69e8(BtlMainStateA **owner, BtlUnitA *unit, s32 forced)
{
    struct RecordCameraView {
        u8 prefix[0x61];
        u8 mode;
    };
    if (forced != 0) {
        unit->cameraMode = 1;
        return;
    }
    unit->cameraMode = 0;
    BtlMainStateA *state = *owner;
    if ((state->encounter.statusFlags & 0x4000000) != 0) {
        unit->cameraMode = 0x16;
        return;
    }
    const BtlActionGlobalsA *action = &g_btlAction;
    u64 flags = state->stateFlags64.bits;
    if (((flags & action->aiActMask) != 0 && (flags & action->aiTargetMask) == 0) ||
        (flags & action->cameraExcludedMask) != 0 || (flags & action->cameraExcludedMaskB) != 0 ||
        (state->encounter.statusFlags & 0x8000000) != 0)
        return;
    for (s16 index = 4; index < 0x36; ++index) {
        BtlCombatantEntryA *entry = &state->entries[index];
        if ((entry->flags & g_btlAction.targetableMask) != 0 &&
            (g_btlAction.interaction.excludedMask & entry->flags) == 0 && entry->data.marked != 0)
            return;
    }
    s16 kind = unit->data->actionKind;
    s32 id;
    if (kind == 2 || kind == 3) {
        id = unit->data->actionArg;
    } else {
        if (kind != 8)
            return;
        id = itemTableGetItemRecord(unit->data->actionArg)->skillId;
        if (id == 0)
            return;
    }
    if (id > 0) {
        const RecordCameraView *record = reinterpret_cast<const RecordCameraView *>(skillDataFindById(id));
        if (record != NULL && record->mode != 1 && record->mode != 0)
            unit->cameraMode = record->mode;
    }
}
}
