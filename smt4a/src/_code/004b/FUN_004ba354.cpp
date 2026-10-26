/* NON_MATCHING: readable rebuild of the menu frame effect draw; the remaining differences are the integer/float register split around the efct speed saves (retail keeps the speed in s16 and 1/256 alpha in s17 across the calls). */
#include "common.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"


/* The menu object (only the fields the frame draw reads). */
struct FrameMenu {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ f32 speed;
    /* 0x024 */ u8 unk024[0x61];
    /* 0x085 */ u8 wide;
    /* 0x086 */ u8 unk086[0x766];
    /* 0x7EC */ void *items[1];
};

extern "C" {
void FUN_00164b5c(s32 a, s32 b, s32 c, s32 x, s32 y, s32 alpha);
void efctSetSpeed(f32 speed);
void FUN_001835b4(s32 a, s32 b, s32 c, s32 x, s32 y, s32 alpha, ...);
void FUN_00183bb0(void);
s32 FUN_002e5d88(u16 id);

/* Draws a menu frame: the background part chosen by `style`, its two edge sprites, then the
 * selected item's icon scaled by the fade. `style` 0 is plain, 2 the dark variant, anything else the
 * light variant. */
void FUN_004ba354(FrameMenu *menu, s32 slot, s32 itemIndex, s32 style, s32 alpha)
{
    efctSetSpeed(menu->speed);
    TextureTableEntryIV *base;
    s32 x;
    s32 y;
    if (style != 0) {
        base = asdTMTexTableEntryAt(0x1F, slot + 0x15);
        x = base->x;
        y = base->y;
        s32 edgeAlpha = alpha + 1;
        if (menu->wide) {
            FUN_00164b5c(2, 0x1F, 0x23, x, y, alpha);
            efctSetSpeed(menu->speed);
            FUN_001835b4(2, 0x1F, 0x31, x, y, edgeAlpha);
            FUN_001835b4(2, 0x1F, 0x32, x, y, edgeAlpha);
        } else {
            FUN_00164b5c(2, 0x1F, 1, x, y, alpha);
            efctSetSpeed(menu->speed);
            FUN_001835b4(2, 0x1F, 0x27, x, y, edgeAlpha);
            FUN_001835b4(2, 0x1F, 0x28, x, y, edgeAlpha);
        }
        efctSetSpeed(menu->speed);
    } else {
        base = asdTMTexTableEntryAt(0x1F, slot + 5);
        x = base->x;
        y = base->y;
        FUN_00164b5c(2, 0x1F, 0, x, y, alpha);
    }
    f32 fade = (f32)(0x100 - alpha) * (1.0f / 256.0f);

    TextureTableEntryIV *icon;
    TextureTableEntryIV *offset;
    u32 mode;
    u32 mask;
    if (style != 0) {
        icon = asdTMTexTableEntryAt(0x1F, 0x14);
        offset = asdTMTexTableEntryAt(0x1F, 0x2C);
        mode = 3;
        mask = 0x57D8FFFF;
        if (menu->wide) {
            if (style != 2)
                mask = 0xF5FF9FFF;
        } else if (style != 2) {
            mask = 0x9FE7FFFF;
        }
    } else {
        icon = asdTMTexTableEntryAt(0x1F, 4);
        offset = asdTMTexTableEntryAt(0x1F, 0x2B);
        mode = 2;
        mask = 0xFFFFFFFF;
    }
    u8 *item = (u8 *)menu->items[itemIndex];
    s32 itemId = *(s32 *)((u8 *)menu + 0x8EC + slot * 4);
    if (itemId > 0) {
        if (itemId == 0x1BC6) {
            u16 id = *(u16 *)(item + 0x54);
            if (item[0x21] == 5)
                id = *(u16 *)(item + 0x56);
            if (!FUN_002e5d88(id))
                effectSetByteSpeed(0x66);
        }
        FUN_001835b4(2, 0xB, itemId, x + offset->x, y + offset->y, alpha, icon->y);
        FUN_00183bb0();
    }
    textDrawString(mode, mask, (const char *)item, (f32)(icon->x + x), (f32)(icon->y + y), fade, 0.0f, menu->speed);
}

} /* extern "C" */
