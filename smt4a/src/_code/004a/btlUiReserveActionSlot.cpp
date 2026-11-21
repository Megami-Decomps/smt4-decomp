/* NON_MATCHING: register allocation (retail keeps the UI in r4 and the slot base in r5, the build swaps them) and the projected-position copy (retail moves it through VFP registers, the build through ldm/stm). */
#include "ui/UiSpriteApi.h"
#include "battle/BtlUiGlobal.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include "code/Code0015.h"
#include "battle/BattleHelpers_VariantB.h"

/* Clears a 3-float vector. */
static __inline void vec3Zero(f32 *v)
{
    v[0] = v[1] = v[2] = 0.0f;
}

/* Sets a 3-float vector (the body of gfx/SpiralEmitter.h's vec3Set). */
static __inline void vec3Set(f32 *v, f32 x, f32 y, f32 z)
{
    v[0] = x;
    v[1] = y;
    v[2] = z;
}

static inline u32 findActionSlot(BtlUiA *ui)
{
    for (s32 index = 0; index < 12; ++index) {
        if (ui->actionRequests.slots[index].state == 0)
            return index;
    }
    return -1;
}

extern "C" {
void cameraProjectToScreen(f32 *screen, s32 display, const ProjectionMatrices *camera, const f32 *world);

// Reserve a projected effect slot and synchronize the owner's completion-mask bit.
u32 btlUiReserveActionSlot(u32 request, u64 *ownerFlags, f32 x, f32 y, f32 z)
{
    BtlUiA *ui = g_btlUi.ui;
    u32 index = findActionSlot(ui);
    if (index >= 12)
        return -1;
    ui->actionRequests.slots[index].state = 2;
    ui->actionRequests.slots[index].frame = 0;
    ui->actionRequests.slots[index].progress = 0.0f;
    ui->actionRequests.slots[index].active = 0;
    BattleUiActionVector position = {x, y, z};
    cameraProjectToScreen(&position.x, 0, reinterpret_cast<ProjectionMatrices *>(asdCameraGetSavedRenderPairs()), &position.x);
    vec3Set(ui->actionRequests.slots[index].position, position.x, position.y, position.z);
    vec3Zero(ui->actionRequests.slots[index].velocity);
    vec3Zero(ui->actionRequests.slots[index].acceleration);
    ui->actionRequests.slots[index].ownerFlags = reinterpret_cast<u32 *>(ownerFlags);
    *reinterpret_cast<u64 *>(ui->actionRequests.slots[index].ownerFlags) &= ~g_btlUi.completionMask;
    if (btlScriptUnitHasFlags(reinterpret_cast<const BtlMainStateA *>(ui->owner))) {
        ui->actionRequests.slots[index].active = 0;
        ui->actionRequests.slots[index].state = 5;
        *reinterpret_cast<u64 *>(ui->actionRequests.slots[index].ownerFlags) |= g_btlUi.completionMask;
    } else {
        uiSpriteSelectAnim(&ui->actionRequests.slots[index].firstSprite, 10);
        uiSpriteSelectAnim(&ui->actionRequests.slots[index].secondSprite, 11);
    }
    return index;
}
}
