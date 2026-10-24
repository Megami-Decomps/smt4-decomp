/* NON_MATCHING: retail spills r0-r3 and the position vector at different frame offsets and merges the slot-field addressing into shared base registers; the logic is the same. */
#include "common.h"
#include "shard/S1Mover.h"

extern "C" {

/* One number popup of the battle UI (0x400 bytes, starting at 0x75B4 of the UI block): five digit
 * sprites and the state that places them. */
typedef struct BtlUiNumberSlot {
    /* 0x000 */ u8 digitSprites[5][0x8C];
    /* 0x2BC */ u8 unk2bc[0x118];
    /* 0x3D4 */ Vec3f position;
    /* 0x3E0 */ u8 active;
    /* 0x3E1 */ u8 anchored;      /* whether the position was clamped on screen */
    /* 0x3E2 */ u8 unk3e2[2];
    /* 0x3E4 */ u32 digitTimers[5];
    /* 0x3F8 */ s32 number;
    /* 0x3FC */ u8 unk3fc;
    /* 0x3FD */ u8 unk3fd[3];
} BtlUiNumberSlot;

typedef struct BtlUiNumberBlock {
    /* 0x0000 */ u8 unk0000[0x75B4];
    /* 0x75B4 */ BtlUiNumberSlot slots[1];
} BtlUiNumberBlock;

typedef struct BtlUiGlobals {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ BtlUiNumberBlock *block;
} BtlUiGlobals;

/* The sprite record whose first image's height is read to keep the popup on screen. */
typedef struct BtlUiImage {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s16 height;
} BtlUiImage;

typedef struct BtlUiSprite {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ BtlUiImage *image;
} BtlUiSprite;

extern BtlUiGlobals g_btlUi;

u32 FUN_00152f54(void);
void FUN_002a1850(Vec3f *position, s32 arg, u32 value);
BtlUiSprite *FUN_001834a4(u32 kind, u32 index);
u32 FUN_004aaff0(u32 handle, s32 slot);
void uiSpriteSelectAnim(void *sprite, s32 anim);
void FUN_00387240(void *sprite, u32 kind, u32 index);
void FUN_00358e94(void *sprite, s16 x, s16 y);
void pairSetFirstResetSecond(void *sprite, s32 value);

/* Starts a number popup in `slot`: places it at `position` (kept on screen when `anchored`), then
 * sets up one sprite per decimal digit of `number`, most significant first. */
void FUN_004a9740(u32 handle, s32 slot, s32 number, u32 unused, Vec3f position, s32 small, s32 alt, s32 anchored)
{
    BtlUiNumberBlock *block = g_btlUi.block;
    BtlUiNumberSlot *popup;

    if (anchored != 0) {
        FUN_002a1850(&position, 0, FUN_00152f54());
        f32 maxY = 240.0f - (f32)(FUN_001834a4(13, 0x41A)->image->height << 1);

        if (position.y > maxY) {
            position.y = maxY;
        } else if (position.y <= 0.0f) {
            position.y = 0.0f;
        }
    }
    popup = (BtlUiNumberSlot *)((u8 *)block + slot * 0x400 + 0x75B4);
    popup->active = 1;
    popup->anchored = anchored;
    popup->number = number;
    popup->position.x = position.x;
    popup->position.y = position.y;
    popup->position.z = position.z;
    popup->unk3fc = 0;

    u32 digitOffset = FUN_004aaff0(handle, slot);
    s32 divisor = 10000;

    for (s32 i = 4; i >= 0; i--) {
        popup->digitTimers[i] = 0;
        void *sprite = popup->digitSprites[i];

        uiSpriteSelectAnim(sprite, 3);
        FUN_00387240(sprite, 13, i + 0x41A);
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
