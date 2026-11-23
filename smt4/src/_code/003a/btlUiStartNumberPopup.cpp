/* NON_MATCHING: 10 lines (229 vs 229 rows): str r7, [r0, #836] (number) schedules above strb r4, [r0, #813] (anchored),
 * and the two vmov/sxth pairs before FUN_002963ec swap r0/r1. The parameter order (integers before the coordinates) is
 * the one the Apocalypse twin is IDENTICAL with; declaring the coordinates first leaves only the first difference here
 * (2 lines), but the order is one prototype in both games (wave 85). */
#include "common.h"
#include "battle/BtlUiGlobal.h"
#include "ui/UiSpriteApi.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

u32 asdCameraGetSavedRenderPairs(void);
void cameraProjectToScreen(f32 *screen, s32 display, u32 camera, const f32 *world);
void uiStoreTextureEntryCenter(UiSpriteState *sprite, s32 group, s32 part);
void FUN_002963ec(UiSpriteState *sprite, s16 x, s16 y);

/* Sets up popup slot `slot`: shows `value` as five digit sprites (the sprite set depends on
 * `negative` and `kind`) and two label sprites, all placed at (x, y). `stereo` shifts the position
 * for the 3D depth. */
void btlUiStartNumberPopup(u32 unused1, s32 slot, s32 value, u32 unused2, s32 negative, s32 kind, s32 stereo,
                  f32 x, f32 y, f32 z)
{
    BtlUi *ui = g_btlUi.ui;
    bool isLarge = false;
    if (negative == 0) {
        isLarge = true;
    }
    f32 position[3];
    position[0] = x;
    position[1] = y;
    position[2] = z;
    if (stereo != 0) {
        cameraProjectToScreen(position, 0, asdCameraGetSavedRenderPairs(), position);
    }
    ui->objD.numbers.slots[slot].active = 1;
    ui->objD.numbers.slots[slot].anchored = (u8)stereo;
    ui->objD.numbers.slots[slot].number = value;
    ui->objD.numbers.slots[slot].position.x = position[0];
    ui->objD.numbers.slots[slot].position.y = position[1];
    ui->objD.numbers.slots[slot].position.z = position[2];
    ui->objD.numbers.slots[slot].disabled = 0;
    s32 divisor = 10000;
    for (s32 digit = 4; digit >= 0; digit--) {
        ui->objD.numbers.slots[slot].digitTimers[digit] = 0;
        spriteStartAnimationByIndex(&ui->objD.numbers.slots[slot].digitSprites[digit], 3);
        uiStoreTextureEntryCenter(&ui->objD.numbers.slots[slot].digitSprites[digit], 0x15, digit + 0x41A);
        FUN_002963ec(&ui->objD.numbers.slots[slot].digitSprites[digit], (s16)position[0], (s16)position[1]);
        s32 img;
        if (isLarge) {
            if (kind != 0) {
                img = value / divisor + 0x7F8;
            } else {
                img = value / divisor + 0x7E4;
            }
        } else if (kind == 0) {
            img = value / divisor + 0x7EE;
        } else {
            img = value / divisor + 0x802;
        }
        pairSetFirstResetSecond(&ui->objD.numbers.slots[slot].digitSprites[digit], img);
        value -= value / divisor * divisor;
        divisor /= 10;
    }
    spriteStartAnimationByIndex(&ui->objD.numbers.slots[slot].labelSprites[0], 9);
    spriteStartAnimationByIndex(&ui->objD.numbers.slots[slot].labelSprites[1], 9);
    if (isLarge) {
        if (kind == 0) {
            pairSetFirstResetSecond(&ui->objD.numbers.slots[slot].labelSprites[0], 1000);
            pairSetFirstResetSecond(&ui->objD.numbers.slots[slot].labelSprites[1], 0x3EA);
        } else if (kind == 1) {
            pairSetFirstResetSecond(&ui->objD.numbers.slots[slot].labelSprites[0], 0x420);
            pairSetFirstResetSecond(&ui->objD.numbers.slots[slot].labelSprites[1], 0x3EB);
        }
    } else {
        if (kind == 0) {
            pairSetFirstResetSecond(&ui->objD.numbers.slots[slot].labelSprites[0], 0x3E9);
            pairSetFirstResetSecond(&ui->objD.numbers.slots[slot].labelSprites[1], 0x3EC);
        } else if (kind == 1) {
            pairSetFirstResetSecond(&ui->objD.numbers.slots[slot].labelSprites[0], 0x421);
            pairSetFirstResetSecond(&ui->objD.numbers.slots[slot].labelSprites[1], 0x3ED);
        }
    }
    uiStoreTextureEntryCenter(&ui->objD.numbers.slots[slot].labelSprites[0], 0x15, 0x419);
    uiStoreTextureEntryCenter(&ui->objD.numbers.slots[slot].labelSprites[1], 0x15, 0x418);
    TextureTableEntryIV *size = asdTMTexTableEntryAt(0x15, ui->objD.numbers.slots[slot].labelSprites[0].image);
    FUN_002963ec(&ui->objD.numbers.slots[slot].labelSprites[0], (s16)(-((size->width & 0x7FFF) >> 1)), (s16)(-((size->height & 0x7FFF) >> 1)));
    FUN_002963ec(&ui->objD.numbers.slots[slot].labelSprites[0], (s16)position[0], (s16)position[1]);
    size = asdTMTexTableEntryAt(0x15, ui->objD.numbers.slots[slot].labelSprites[1].image);
    FUN_002963ec(&ui->objD.numbers.slots[slot].labelSprites[1], (s16)(-((size->width & 0x7FFF) >> 1)), (s16)(-((size->height & 0x7FFF) >> 1)));
    FUN_002963ec(&ui->objD.numbers.slots[slot].labelSprites[1], (s16)position[0], (s16)position[1]);
}

} /* extern "C" */
