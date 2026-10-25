/* NON_MATCHING: readable rebuild of the battle UI's number popup setup (five digit sprites plus two label sprites); the draft's floats arrive in s0-s2 (x, y, z) ahead of three stack ints, which armcc here places the same way, but the digit loop's divisor update and the per-digit sprite id selection are scheduled differently. */
#include "common.h"

/* A layout rectangle's size words (the high bit is a flag). */
struct LayoutSize {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 width;
    /* 0x06 */ u16 height;
};

/* The battle UI's global: a pointer to the popup block at +0x20. */
struct BattleUiGlobal {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 *block;
};

extern "C" {
extern BattleUiGlobal g_btlUi;

u32 FUN_002c501c(void);
void FUN_002630e0(f32 *vector, s32 a, u32 stereo);
void spriteStartAnimationByIndex(u8 *sprite, s32 animation);
void FUN_00295eb0(u8 *sprite, s32 group, s32 part);
void FUN_002963ec(u8 *sprite, s32 x, s32 y);
void pairSetFirstResetSecond(u8 *sprite, s32 id);
LayoutSize *asdTMTexTableEntryAt(s32 group, u32 part);
s32 __aeabi_idivmod(s32 a, s32 b);

/* Sets up popup slot `slot`: shows `value` as five digit sprites (the sprite set depends on
 * `negative` and `kind`) and two label sprites, all placed at (x, y). `stereo` shifts the position
 * for the 3D depth. */
void FUN_003adca8(u32 unused1, s32 slot, s32 value, u32 unused2, f32 x, f32 y, f32 z, s32 negative, s32 kind,
                  s32 stereo)
{
    f32 position[3] = { x, y, z };
    u8 *block = g_btlUi.block;
    if (stereo != 0)
        FUN_002630e0(position, 0, FUN_002c501c());
    u8 *popup = block + slot * 0x400;
    popup[0x832C] = 1;
    popup[0x832D] = (u8)stereo;
    *(s32 *)(popup + 0x8344) = value;
    *(f32 *)(popup + 0x8320) = position[0];
    *(f32 *)(popup + 0x8324) = position[1];
    *(f32 *)(popup + 0x8328) = position[2];
    popup[0x8348] = 0;
    s32 divisor = 10000;
    for (s32 digit = 4; digit >= 0; digit--) {
        *(u32 *)(popup + digit * 4 + 0x8330) = 0;
        u8 *sprite = popup + digit * 0x8C + 0x7F4C;
        spriteStartAnimationByIndex(sprite, 3);
        FUN_00295eb0(sprite, 0x15, digit + 0x41A);
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
    u8 *first = popup + 0x8208;
    u8 *second = popup + 0x8294;
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
    FUN_00295eb0(first, 0x15, 0x419);
    FUN_00295eb0(second, 0x15, 0x418);
    LayoutSize *size = asdTMTexTableEntryAt(0x15, *(u32 *)(popup + 0x820C));
    FUN_002963ec(first, -((size->width & 0x7FFF) >> 1), -((size->height & 0x7FFF) >> 1));
    FUN_002963ec(first, (s16)(s32)position[0], (s16)(s32)position[1]);
    size = asdTMTexTableEntryAt(0x15, *(u32 *)(popup + 0x8298));
    FUN_002963ec(second, -((size->width & 0x7FFF) >> 1), -((size->height & 0x7FFF) >> 1));
    FUN_002963ec(second, (s16)(s32)position[0], (s16)(s32)position[1]);
}

} /* extern "C" */
