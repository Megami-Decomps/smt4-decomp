/* NON_MATCHING: slot-relative addressing and aggregate copy use core registers rather than retail's VFP transfer. */
#include "battle/btlUI.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"

static inline u32 findActionSlot(BtlUi *ui)
{
    for (s32 index = 0; index < 12; ++index) {
        if (ui->objD.actionRequests.slots[index].state == 0)
            return index;
    }
    return -1;
}

extern "C" {
extern BtlUiGlobals g_btlUi;
ProjectionMatrices *FUN_002c501c();
void FUN_002630e0(f32 *screen, s32 display, const ProjectionMatrices *camera, const f32 *world);
s32 FUN_00293230(void *owner);
void FUN_002bee58(SpritePlaybackView *sprite, s32 animation);

// Reserve a screen-space action slot and mark the owner complete when the UI is already closing.
u32 FUN_003ae418(u32 request, u32 *ownerFlags, f32 x, f32 y, f32 z)
{
    BtlUi *ui = g_btlUi.ui;
    u32 index = findActionSlot(ui);
    if (index >= 12)
        return -1;
    BattleUiActionSlot *slot = &ui->objD.actionRequests.slots[index];
    slot->state = 2;
    slot->frame = 0;
    slot->progress = 0.0f;
    slot->active = 0;
    BattleUiActionVector position = {x, y, z};
    FUN_002630e0(&position.x, 0, FUN_002c501c(), &position.x);
    slot->projected = position;
    slot->velocity[0] = slot->velocity[1] = slot->velocity[2] = 0.0f;
    slot->acceleration[0] = slot->acceleration[1] = slot->acceleration[2] = 0.0f;
    slot->ownerFlags = ownerFlags;
    *ownerFlags &= ~0x2000000;
    if (FUN_00293230(ui->owner)) {
        slot->active = 0;
        slot->state = 5;
        *slot->ownerFlags |= 0x2000000;
    } else {
        FUN_002bee58(&slot->firstSprite, 11);
        FUN_002bee58(&slot->secondSprite, 12);
    }
    return index;
}
}
