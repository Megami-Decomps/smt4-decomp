/* NON_MATCHING: both scans now stay rolled as in retail; the placement kind gets ip instead of a saved register (r5),
 * the zero the not-found return shares with the variant default is not hoisted, and the placement pointer is r5 for r6. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match7_MaterialAnimationFlags.h"
#include "battle/BtlEntryLookup.h"

extern "C" {
s32 idSetFindSubjectIndex(BtlMainState *state, BtlActionRecord *action);
u32 tableFileFindByKeyPair(BtlMainState *state, s16 selection, u16 kind);
void enemyRenderTexSetup(BattleSpritePlacement *placement, u32 mask, u32 flags, u32 variant);
void FUN_00340c90(BattleSpritePlacement *placement);

u32 FUN_003db0c0(MaterialMergeOwner *owner, BtlActionRecord *action)
{
    if (action->status & 0x20000) {
        return 1;
    }
    BtlMainState *state = btlGetMainState();
    s32 variantIndex = idSetFindSubjectIndex(state, action);
    if (variantIndex < 0) {
        variantIndex = 0;
    }
    BtlUnitData *variants = btlFindEntryBlockByMemberId(state, action->memberId);
    u32 kind = variants->id;
    s32 key = variants->parts[variantIndex];
    bool active = false;
    for (s32 i = 0; i < 50; ++i) {
        if (owner->placements.entries[i].key == key && (owner->placements.entries[i].activation.flags & 1)) {
            active = true;
            break;
        }
    }
    if (active) {
        return 1;
    }
    for (s32 i = 0; i < 50; ++i) {
        if (owner->placements.entries[i].key == key) {
            if (owner->placements.entries[i].resource) {
                BattleSpritePlacement *placement = &owner->placements.entries[i].placement;
                placement->sprite = owner->placements.entries[i].resource;
                s32 selection = state->core.selectionIndex;
                u32 variant = 0;
                if (selection >= 0) {
                    variant = tableFileFindByKeyPair(state, (s16)selection, kind);
                }
                enemyRenderTexSetup(placement, 0x20000, 0x20000, variant);
                FUN_00340c90(placement);
            }
            owner->placements.entries[i].activation.flags |= 1;
            return 1;
        }
    }
    return 0;
}
}
