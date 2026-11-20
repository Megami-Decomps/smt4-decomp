/* NON_MATCHING: retail spills r0-r3 and the position vector at different frame offsets and merges the slot-field addressing into shared base registers; the logic is the same. */
#include "common.h"
#include "battle/BtlUiGlobal.h"
#include "ui/UiSpriteApi.h"
#include "shard/S1Mover.h"
#include "code/Code0015.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

void cameraProjectToScreen(Vec3f *position, s32 arg, u32 value);
u32 FUN_004aaff0(u32 handle, s32 slot);
void uiStoreTextureEntryCenter(void *sprite, u32 kind, u32 index);
void FUN_00358e94(void *sprite, s16 x, s16 y);

/* Starts a number popup in `slot`: places it at `position` (kept on screen when `anchored`), then
 * sets up one sprite per decimal digit of `number`, most significant first. */
void FUN_004a9740(u32 handle, s32 slot, s32 number, u32 unused, Vec3f position, s32 small, s32 alt, s32 anchored)
{
    BtlUiA *ui = g_btlUi.ui;
    BtlUiNumberSlot *popup;

    if (anchored != 0) {
        cameraProjectToScreen(&position, 0, asdCameraGetSavedRenderPairs());
        f32 maxY = 240.0f - (f32)(asdTMTexTableEntryAt(13, 0x41A)->placement->height << 1);

        if (position.y > maxY) {
            position.y = maxY;
        } else if (position.y <= 0.0f) {
            position.y = 0.0f;
        }
    }
    popup = &ui->objD.numbers.slots[slot];
    popup->active = 1;
    popup->anchored = anchored;
    popup->number = number;
    popup->position.x = position.x;
    popup->position.y = position.y;
    popup->position.z = position.z;
    popup->disabled = 0;

    u32 digitOffset = FUN_004aaff0(handle, slot);
    s32 divisor = 10000;

    for (s32 i = 4; i >= 0; i--) {
        popup->digitTimers[i] = 0;
        UiSpriteState *sprite = &popup->digitSprites[i];

        uiSpriteSelectAnim(sprite, 3);
        uiStoreTextureEntryCenter(sprite, 13, i + 0x41A);
        FUN_00358e94(sprite, (s16)(position.x + (f32)digitOffset), (s16)position.y);

        s32 base;
        if (small == 0) {
            base = alt != 0 ? 0x7F8 : 0x7E4;
        } else {
            base = alt != 0 ? 0x802 : 0x7EE;
        }
        pairSetFirstResetSecond(sprite, number / divisor + base);
        number -= number / divisor * divisor;
        divisor /= 10;
    }
}

}
