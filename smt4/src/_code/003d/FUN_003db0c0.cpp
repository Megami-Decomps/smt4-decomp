/* NON_MATCHING: indexed placement address formation and saved registers differ across the two slot scans. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match7_MaterialAnimationFlags.h"

extern "C" {
BtlMainState *btlGetMainState();
s32 FUN_0027dab0(BtlMainState *state, BtlActionRecord *action);
MaterialMergeVariants *FUN_0027da30(BtlMainState *state, s32 member);
u32 FUN_00337ba0(BtlMainState *state, s16 selection, u16 kind);
void FUN_00340ad4(BattleSpritePlacement *placement, u32 mask, u32 flags, u32 variant);
void FUN_00340c90(BattleSpritePlacement *placement);

u32 FUN_003db0c0(MaterialMergeOwner *owner, BtlActionRecord *action)
{
    if (action->status & 0x20000) {
        return 1;
    }
    BtlMainState *state = btlGetMainState();
    s32 variantIndex = FUN_0027dab0(state, action);
    if (variantIndex < 0) {
        variantIndex = 0;
    }
    MaterialMergeVariants *variants = FUN_0027da30(state, action->memberId);
    u16 kind = variants->identity.kind;
    s32 key = variants->keys[variantIndex];
    for (s32 i = 0; i < 50; ++i) {
        const MaterialMergePlacement &slot = owner->placements.entries[i];
        if (slot.key == key && (slot.activation.flags & 1)) {
            return 1;
        }
    }
    for (s32 i = 0; i < 50; ++i) {
        MaterialMergePlacement &slot = owner->placements.entries[i];
        if (slot.key == key) {
            if (slot.resource) {
                slot.placement.sprite = slot.resource;
                // The shared state's byte padding starts at an odd address; keep this view local.
                struct SelectionView { u8 unk000[0xc4]; s32 index; };
                typedef char SelectionViewOffset[offsetof(SelectionView, index) == 0xc4 ? 1 : -1];
                s32 selection = reinterpret_cast<SelectionView *>(state)->index;
                u32 variant = 0;
                if (selection >= 0) {
                    variant = FUN_00337ba0(state, (s16)selection, kind);
                }
                FUN_00340ad4(&slot.placement, 0x20000, 0x20000, variant);
                FUN_00340c90(&slot.placement);
            }
            slot.activation.flags |= 1;
            return 1;
        }
    }
    return 0;
}
}
