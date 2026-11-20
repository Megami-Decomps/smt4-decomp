/* NON_MATCHING: readable rebuild of the battle UI's number popup setup (five digit sprites plus two label sprites); the draft's floats arrive in s0-s2 (x, y, z) ahead of three stack ints, which armcc here places the same way, but the digit loop's divisor update and the per-digit sprite id selection are scheduled differently. */
#include "common.h"
#include "battle/BtlUiGlobal.h"
#include "ui/UiSpriteApi.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

u32 asdCameraGetSavedRenderPairs(void);
void cameraProjectToScreen(f32 *vector, s32 a, u32 stereo);
void uiStoreTextureEntryCenter(UiSpriteState *sprite, s32 group, s32 part);
void FUN_002963ec(UiSpriteState *sprite, s32 x, s32 y);
s32 __aeabi_idivmod(s32 a, s32 b);

/* Sets up popup slot `slot`: shows `value` as five digit sprites (the sprite set depends on
 * `negative` and `kind`) and two label sprites, all placed at (x, y). `stereo` shifts the position
 * for the 3D depth. */
void FUN_003adca8(u32 unused1, s32 slot, s32 value, u32 unused2, f32 x, f32 y, f32 z, s32 negative, s32 kind,
                  s32 stereo)
{
    f32 position[3] = { x, y, z };
    BtlUi *ui = g_btlUi.ui;
    if (stereo != 0)
        cameraProjectToScreen(position, 0, asdCameraGetSavedRenderPairs());
    BtlUiNumberSlot *popup = &ui->objD.numbers.slots[slot];
    popup->active = 1;
    popup->anchored = (u8)stereo;
    popup->number = value;
    popup->position.x = position[0];
    popup->position.y = position[1];
    popup->position.z = position[2];
    popup->disabled = 0;
    s32 divisor = 10000;
    for (s32 digit = 4; digit >= 0; digit--) {
        popup->digitTimers[digit] = 0;
        UiSpriteState *sprite = &popup->digitSprites[digit];
        spriteStartAnimationByIndex(sprite, 3);
        uiStoreTextureEntryCenter(sprite, 0x15, digit + 0x41A);
        FUN_002963ec(sprite, (s16)(s32)position[0], (s16)(s32)position[1]);
        s32 base;
        if (negative == 0)
            base = kind != 0 ? 0x7F8 : 0x7E4;
        else
            base = kind != 0 ? 0x802 : 0x7EE;
        pairSetFirstResetSecond(sprite, __aeabi_idivmod(value, divisor) + base);
        value -= __aeabi_idivmod(value, divisor) * divisor;
        divisor /= 10;
    }
    UiSpriteState *first = &popup->labelSprites[0];
    UiSpriteState *second = &popup->labelSprites[1];
    spriteStartAnimationByIndex(first, 9);
    spriteStartAnimationByIndex(second, 9);
    if (negative == 0) {
        if (kind == 0) {
            pairSetFirstResetSecond(first, 1000);
            pairSetFirstResetSecond(second, 0x3EA);
        } else if (kind == 1) {
            pairSetFirstResetSecond(first, 0x420);
            pairSetFirstResetSecond(second, 0x3EB);
        }
    } else {
        if (kind == 0) {
            pairSetFirstResetSecond(first, 0x3E9);
            pairSetFirstResetSecond(second, 0x3EC);
        } else if (kind == 1) {
            pairSetFirstResetSecond(first, 0x421);
            pairSetFirstResetSecond(second, 0x3ED);
        }
    }
    uiStoreTextureEntryCenter(first, 0x15, 0x419);
    uiStoreTextureEntryCenter(second, 0x15, 0x418);
    TextureTableEntryIV *size = asdTMTexTableEntryAt(0x15, first->image);
    FUN_002963ec(first, -((size->width & 0x7FFF) >> 1), -((size->height & 0x7FFF) >> 1));
    FUN_002963ec(first, (s16)(s32)position[0], (s16)(s32)position[1]);
    size = asdTMTexTableEntryAt(0x15, second->image);
    FUN_002963ec(second, -((size->width & 0x7FFF) >> 1), -((size->height & 0x7FFF) >> 1));
    FUN_002963ec(second, (s16)(s32)position[0], (s16)(s32)position[1]);
}

} /* extern "C" */
