#include "common.h"
#include "battle/BtlUiGlobal.h"
#include "ui/UiSpriteApi.h"
#include "shard/S1Mover.h"
#include "code/Code0015.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

void cameraProjectToScreen(f32 *screen, s32 display, u32 camera, const f32 *world);
s32 FUN_004aaff0(u32 handle, s32 slot);
void uiStoreTextureEntryCenter(void *sprite, u32 kind, u32 index);
void FUN_00358e94(void *sprite, s16 x, s16 y);

/* Starts a number popup in `slot`: places it at `(x, y, z)` (kept on screen when `anchored`), then
 * sets up one sprite per decimal digit of `number`, most significant first. The coordinates are declared after
 * the integer parameters: the same registers and stack slots, and the order retail's schedule of the body needs
 * (the caller reads small, alt and anchored before the three coordinates too). */
void btlUiStartNumberPopup(u32 handle, s32 slot, s32 number, u32 unused, s32 small, s32 alt, u8 anchored, f32 x, f32 y, f32 z)
{
    BtlUiA *ui = g_btlUi.ui;
    bool isLarge = false;
    if (small == 0) {
        isLarge = true;
    }
    f32 pos[3];
    pos[0] = x;
    pos[1] = y;
    pos[2] = z;

    if (anchored != 0) {
        cameraProjectToScreen(pos, 0, asdCameraGetSavedRenderPairs(), pos);
        f32 maxY = 240.0f - (f32)(asdTMTexTableEntryAt(13, 0x41A)->placement->height << 1);

        if (pos[1] > maxY) {
            pos[1] = maxY;
        } else if (pos[1] <= 0.0f) {
            pos[1] = 0.0f;
        }
    }
    ui->objD.numbers.slots[slot].active = 1;
    ui->objD.numbers.slots[slot].anchored = anchored;
    ui->objD.numbers.slots[slot].number = number;
    ui->objD.numbers.slots[slot].position.x = pos[0];
    ui->objD.numbers.slots[slot].position.y = pos[1];
    ui->objD.numbers.slots[slot].position.z = pos[2];
    ui->objD.numbers.slots[slot].disabled = 0;

    s32 digitOffset = FUN_004aaff0(handle, slot);
    s32 divisor = 10000;

    for (s32 i = 4; i >= 0; i--) {
        ui->objD.numbers.slots[slot].digitTimers[i] = 0;
        uiSpriteSelectAnim(&ui->objD.numbers.slots[slot].digitSprites[i], 3);
        uiStoreTextureEntryCenter(&ui->objD.numbers.slots[slot].digitSprites[i], 13, i + 0x41A);
        FUN_00358e94(&ui->objD.numbers.slots[slot].digitSprites[i], (s16)(pos[0] + (f32)digitOffset), (s16)pos[1]);

        s32 digit;
        if (isLarge) {
            if (alt != 0) {
                digit = number / divisor + 0x7F8;
            } else {
                digit = number / divisor + 0x7E4;
            }
        } else if (alt == 0) {
            digit = number / divisor + 0x7EE;
        } else {
            digit = number / divisor + 0x802;
        }
        pairSetFirstResetSecond(&ui->objD.numbers.slots[slot].digitSprites[i], digit);
        number -= number / divisor * divisor;
        divisor /= 10;
    }
}

}
