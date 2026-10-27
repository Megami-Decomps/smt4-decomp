/* NON_MATCHING: slot-relative addresses, aggregate copy and mask-update scheduling differ. */
#include "battle/btlUI.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include "code/Code0015.h"
#include "battle/BattleHelpers_VariantB.h"

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
void FUN_002a1850(f32 *screen, s32 display, const ProjectionMatrices *camera, const f32 *world);
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
    ui->actionRequests.slots[index].state = 2;
    ui->actionRequests.slots[index].frame = 0;
    ui->actionRequests.slots[index].progress = 0.0f;
    ui->actionRequests.slots[index].active = 0;
    BattleUiActionVector position = {x, y, z};
    FUN_002a1850(&position.x, 0, reinterpret_cast<ProjectionMatrices *>(FUN_00152f54()), &position.x);
    ui->actionRequests.slots[index].projected = position;
    ui->actionRequests.slots[index].velocity[0] = ui->actionRequests.slots[index].velocity[1] = ui->actionRequests.slots[index].velocity[2] = 0.0f;
    ui->actionRequests.slots[index].acceleration[0] = ui->actionRequests.slots[index].acceleration[1] = ui->actionRequests.slots[index].acceleration[2] = 0.0f;
    ui->actionRequests.slots[index].ownerFlags = reinterpret_cast<u32 *>(ownerFlags);
    *ownerFlags &= ~globals->completionMask;
    if (btlScriptUnitHasFlags(reinterpret_cast<const BtlMainStateA *>(ui->owner))) {
        ui->actionRequests.slots[index].active = 0;
        ui->actionRequests.slots[index].state = 5;
        *reinterpret_cast<u64 *>(ui->actionRequests.slots[index].ownerFlags) |= globals->completionMask;
    } else {
        uiSpriteSelectAnim(&ui->actionRequests.slots[index].firstSprite, 10);
        uiSpriteSelectAnim(&ui->actionRequests.slots[index].secondSprite, 11);
    }
    return index;
}
}
