#include "ui/UiSpriteApi.h"
#include "code/Code002c.h"
/* NON_MATCHING: register allocation only: retail keeps the UI in r4 and the slot base in r5 (the build swaps them). */
#include "battle/BtlUiGlobal.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include "battle/btlMain.h"

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

static inline u32 findActionSlot(BtlUi *ui)
{
    for (s32 index = 0; index < 12; ++index) {
        if (ui->objD.actionRequests.slots[index].state == 0)
            return index;
    }
    return -1;
}

extern "C" {
void cameraProjectToScreen(f32 *screen, s32 display, const ProjectionMatrices *camera, const f32 *world);
s32 btlScriptUnitIsIncapacitated(void *owner);

// Reserve a screen-space action slot and mark the owner complete when the UI is already closing.
u32 btlUiReserveActionSlot(u32 request, u32 *ownerFlags, f32 x, f32 y, f32 z)
{
    BtlUi *ui = g_btlUi.ui;
    u32 index = findActionSlot(ui);
    if (index >= 12)
        return -1;
    ui->objD.actionRequests.slots[index].state = 2;
    ui->objD.actionRequests.slots[index].frame = 0;
    ui->objD.actionRequests.slots[index].progress = 0.0f;
    ui->objD.actionRequests.slots[index].active = 0;
    BattleUiActionVector position = {x, y, z};
    cameraProjectToScreen(&position.x, 0, reinterpret_cast<const ProjectionMatrices *>(asdCameraGetSavedRenderPairs()), &position.x);
    vec3Set(ui->objD.actionRequests.slots[index].position, position.x, position.y, position.z);
    vec3Zero(ui->objD.actionRequests.slots[index].velocity);
    vec3Zero(ui->objD.actionRequests.slots[index].acceleration);
    ui->objD.actionRequests.slots[index].ownerFlags = ownerFlags;
    *ui->objD.actionRequests.slots[index].ownerFlags &= ~0x2000000;
    if (btlScriptUnitIsIncapacitated(ui->owner)) {
        ui->objD.actionRequests.slots[index].active = 0;
        ui->objD.actionRequests.slots[index].state = 5;
        *ui->objD.actionRequests.slots[index].ownerFlags |= 0x2000000;
    } else {
        spriteStartAnimationByIndex(&ui->objD.actionRequests.slots[index].firstSprite, 11);
        spriteStartAnimationByIndex(&ui->objD.actionRequests.slots[index].secondSprite, 12);
    }
    return index;
}
}
