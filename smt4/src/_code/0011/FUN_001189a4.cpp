/* NON_MATCHING: retail copies the row-sprite ids from inside a larger static table (DAT_004040d4+0x34) and orders the mode-11/19 branches differently; register allocation and block layout differ. */
#include "common.h"

/* Sprite description returned by FUN_002bf4f8(group, id). */
struct SpriteInfo {
    u8 unk00[8];
    s16 x;
    s16 y;
    s16 *size;      // width, height
};

/* Command object with a selectable row list (accessed prefix). */
struct RowMenu {
    u8 unk00[4];
    u8 *view;           // 0x04: the object whose state word is at 0xB0
    u8 state;           // 0x08
    u8 mode;            // 0x09
    u8 unk0A[0xE];
    s32 selected;       // 0x18
    u8 unk1C[4];
    s32 rowCount;       // 0x20
};

extern "C" {
extern u32 g_titleScene;
u32 FUN_002c5d80(u32 value, bool enabled);
void FUN_002bee04(u32 scene, u32 slot, u32 value);
void FUN_002bedb0(u32 scene, u32 slot);
SpriteInfo *FUN_002bf4f8(u32 group, u32 id);
void FUN_002bf380(u32 screen, u32 group, u32 id, s32 x, s32 y, u32 priority);
f32 FUN_00126830(u8 *view, s32 index);
void positionStateSet(f32 scale, u8 *view, u32 a, u32 color);
void FUN_002b75ec(f32 scale, u8 *view, s32 x, s32 y, u32 style, u32 priority, s32 index);

/* Draw the row selector of the menu: one sprite per row, the selected one highlighted. */
void FUN_001189a4(RowMenu *menu)
{
    static const u32 rowSprites[9] = {0xA8, 0xA9, 0x9C, 0x9D, 0x9E, 0xB0, 0xB1, 0xB2, 0xB3};
    if (menu->state != 1 && menu->state != 5)
        return;
    FUN_002bee04(g_titleScene, 3, FUN_002c5d80(1, false));
    if (menu->mode == 11) {
        u32 sprites[9];
        for (s32 i = 0; i < 9; i++)
            sprites[i] = rowSprites[i];
        s32 first = 0;
        if (menu->rowCount != 2) {
            if (menu->rowCount == 3)
                first = 2;
            else if (menu->rowCount == 4)
                first = 5;
        }
        for (s32 i = 0; i < menu->rowCount; i++) {
            SpriteInfo *sprite = FUN_002bf4f8(14, sprites[first + i]);
            if (menu->selected == i) {
                *reinterpret_cast<u32 *>(menu->view + 0xB0) = 10;
                positionStateSet(0.0f, menu->view, 0, 0xFFFFFFFF);
            } else {
                *reinterpret_cast<u32 *>(menu->view + 0xB0) = 11;
                positionStateSet(0.0f, menu->view, 0, 0x5A5A5AFF);
            }
            FUN_002b75ec(1.0f, menu->view, sprite->x, sprite->y - 4, 0x33, 6, i);
        }
    } else if (menu->mode == 19) {
        SpriteInfo *frame = FUN_002bf4f8(0x3A, 0x97);
        for (s32 i = 0; i < menu->rowCount; i++) {
            SpriteInfo *sprite = FUN_002bf4f8(0x3A, 0x98 + i);
            if (menu->selected == i) {
                FUN_002bf380(2, 0x3A, 0x12, sprite->x, sprite->y, 11);
                *reinterpret_cast<u32 *>(menu->view + 0xB0) = 15;
            } else {
                FUN_002bf380(2, 0x3A, 0x11, sprite->x, sprite->y, 11);
                *reinterpret_cast<u32 *>(menu->view + 0xB0) = 14;
            }
            s32 width = static_cast<s32>(FUN_00126830(menu->view, i));
            FUN_002b75ec(1.0f, menu->view, frame->x + sprite->x + (frame->size[0] >> 1) - (width >> 1),
                         frame->y + sprite->y, 0x33, 6, i);
        }
    } else {
        FUN_002bedb0(g_titleScene, 3);
        return;
    }
    *reinterpret_cast<u32 *>(menu->view + 0xB0) = 0;
    positionStateSet(0.0f, menu->view, 0, 0x646464FF);
    FUN_002bedb0(g_titleScene, 3);
}
}
