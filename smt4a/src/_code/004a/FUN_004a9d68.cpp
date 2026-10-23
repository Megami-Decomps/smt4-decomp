/* NON_MATCHING: slot-relative addresses, aggregate copy and mask-update scheduling differ. */
#include "battle/btlUI.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"

static inline u32 findActionSlot(BtlUiA *ui)
{
    for (s32 index = 0; index < 12; ++index) {
        if (ui->actionRequests.slots[index].state == 0)
            return index;
    }
    return -1;
}

extern "C" {
extern BtlUiGlobalsA g_btlUi;
ProjectionMatrices *FUN_00152f54();
void FUN_002a1850(f32 *screen, s32 display, const ProjectionMatrices *camera, const f32 *world);
s32 btlScriptUnitHasFlags(u32 owner);
void uiSpriteSelectAnim(SpritePlaybackView *sprite, s32 animation);

// Reserve a projected effect slot and synchronize the owner's completion-mask bit.
u32 FUN_004a9d68(u32 request, u64 *ownerFlags, f32 x, f32 y, f32 z)
{
    // The completion mask is beyond BtlUiGlobalsA's shared pointer-only prefix.
    struct GlobalsView { u8 prefix[0x38]; u64 completionMask; };
    typedef char GlobalsMaskOffsetCheck[offsetof(GlobalsView, completionMask) == 0x38 ? 1 : -1];
    const GlobalsView *globals = reinterpret_cast<const GlobalsView *>(&g_btlUi);
    BtlUiA *ui = g_btlUi.ui;
    u32 index = findActionSlot(ui);
    if (index >= 12)
        return -1;
    BattleUiActionSlot *slot = &ui->actionRequests.slots[index];
    slot->state = 2;
    slot->frame = 0;
    slot->progress = 0.0f;
    slot->active = 0;
    BattleUiActionVector position = {x, y, z};
    FUN_002a1850(&position.x, 0, FUN_00152f54(), &position.x);
    slot->projected = position;
    slot->velocity[0] = slot->velocity[1] = slot->velocity[2] = 0.0f;
    slot->acceleration[0] = slot->acceleration[1] = slot->acceleration[2] = 0.0f;
    slot->ownerFlags = reinterpret_cast<u32 *>(ownerFlags);
    *ownerFlags &= ~globals->completionMask;
    if (btlScriptUnitHasFlags(ui->owner)) {
        slot->active = 0;
        slot->state = 5;
        *reinterpret_cast<u64 *>(slot->ownerFlags) |= globals->completionMask;
    } else {
        uiSpriteSelectAnim(&slot->firstSprite, 10);
        uiSpriteSelectAnim(&slot->secondSprite, 11);
    }
    return index;
}
}
