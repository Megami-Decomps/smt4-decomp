/* NON_MATCHING: instruction count matches (95 rows); retail shares one function-end return for every early exit, and the 64-bit mask loads and register allocation differ. */
#include "battle/btlAction.h"
#include "battle/btlUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/Table8Record.h"
#include "gamedata/Table04Record.h"

extern "C" {
extern BtlActionGlobals g_btlAction;
Table8Record *dataTable8FindRecord(s32 id);

// Select an action's camera mode unless battle-state or marked-target flags suppress it.
void FUN_004e69e8(BtlMainStateA **owner, BtlUnitA *unit, s32 forced)
{
    struct ActionMasksView {
        BtlActionGlobals action;
        u8 padding80[0x58];
        u64 required;
        u64 excluded;
        u8 paddingE8[8];
        u64 cameraExcluded;
        u8 paddingF8[0x90];
        u64 overrideRequired;
    };
    struct UnitCameraView {
        BtlUnitA unit;
        u8 padding[0x568];
        u32 mode;
    };
    struct RecordCameraView {
        u8 prefix[0x61];
        u8 mode;
    };
    UnitCameraView *camera = reinterpret_cast<UnitCameraView *>(unit);
    if (forced != 0) {
        camera->mode = 1;
        return;
    }
    camera->mode = 0;
    BtlMainStateA *state = *owner;
    if ((state->encounter.statusFlags & 0x4000000) != 0) {
        camera->mode = 0x16;
        return;
    }
    ActionMasksView *masks = reinterpret_cast<ActionMasksView *>(&g_btlAction);
    u64 flags = state->stateFlags64.bits;
    if (((flags & masks->required) != 0 && (flags & masks->overrideRequired) == 0) ||
        (flags & masks->excluded) != 0 || (flags & masks->cameraExcluded) != 0 ||
        (state->encounter.statusFlags & 0x8000000) != 0)
        return;
    for (s16 index = 4; index < 0x36; ++index) {
        BtlCombatantEntryA *entry = &state->entries[index];
        if ((entry->flags & g_btlAction.targetableMask) != 0 &&
            (g_btlAction.interaction.excludedMask & entry->flags) == 0 && entry->selection.marked != 0)
            return;
    }
    s16 kind = (s16)unit->data->unk1BE;
    s32 id;
    if (kind == 2 || kind == 3) {
        id = *reinterpret_cast<const s16 *>(unit->data->unk1C0);
    } else {
        if (kind != 8)
            return;
        id = dataTable8FindRecord(*reinterpret_cast<const s16 *>(unit->data->unk1C0))->unk32;
        if (id == 0)
            return;
    }
    if (id > 0) {
        const RecordCameraView *record = reinterpret_cast<const RecordCameraView *>(dataTable04FindById(id));
        if (record != NULL && record->mode != 1 && record->mode != 0)
            camera->mode = record->mode;
    }
}
}
