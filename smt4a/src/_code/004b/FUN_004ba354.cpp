/* NON_MATCHING: 105 lines (191 vs 184 rows): fixed sprites[slot].speed at +0xA10, edge.alpha at +0x778, 6-arg texDrawTableEntryAtStoredOrigin, and early coord reads; remaining: r8/r9 swap, wide/edge sub-struct addressing, and stack slot order for mode/offsetX. */
#include "common.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/TextureDrawCall.h"

struct FrameSlotSprite {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 speed;
    /* 0x24 */ u8 unk24[0x68];
};
typedef char FrameSlotSpriteSize[sizeof(FrameSlotSprite) == 0x8C ? 1 : -1];

struct FrameHeader {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ s8 wide;
    /* 0x12 */ u8 unk12[2];
};

struct FrameEdge {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 alpha;
};

/* The menu object (only the fields the frame draw reads). */
struct FrameMenu {
    /* 0x000 */ u8 unk000[0x74];
    /* 0x074 */ FrameHeader header;
    /* 0x088 */ u8 unk088[0x6D0];
    /* 0x758 */ FrameEdge edge;
    /* 0x77C */ u8 unk77C[0x70];
    /* 0x7EC */ void *items[64];
    /* 0x8EC */ s32 itemIds[16];
    /* 0x92C */ u8 unk92C[0xE4];
    /* 0xA10 */ FrameSlotSprite sprites[16];
};
typedef char FrameMenuOffsets[
    offsetof(FrameMenu, header.wide) == 0x85 &&
    offsetof(FrameMenu, edge.alpha) == 0x778 &&
    offsetof(FrameMenu, items) == 0x7EC &&
    offsetof(FrameMenu, itemIds) == 0x8EC &&
    offsetof(FrameMenu, sprites) == 0xA10 ? 1 : -1];

extern "C" {
void texDrawCompositeSprite(s32 a, s32 b, s32 c, s32 x, s32 y, s32 alpha);
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite(void);
s32 FUN_002e5d88(u16 id);

/* Draws a menu frame: the background part chosen by `style`, its two edge sprites, then the
 * selected item's icon scaled by the fade. `style` 0 is plain, 2 the dark variant, anything else the
 * light variant. */
void FUN_004ba354(FrameMenu *menu, s32 slot, s32 itemIndex, s32 style, s32 alpha)
{
    f32 speed = menu->sprites[slot].speed;
    efctSetSpeed(speed);
    TextureTableEntryIV *base;
    s32 x;
    s32 y;
    if (style != 0) {
        base = asdTMTexTableEntryAt(0x1F, slot + 0x15);
        x = base->x;
        y = base->y;
        s32 edgeAlpha = alpha + 1;
        if (menu->header.wide != 0) {
            texDrawCompositeSprite(2, 0x1F, 0x23, x, y, alpha);
            efctSetSpeed(menu->edge.alpha * speed);
            texDrawTableEntryAtStoredOrigin(2, 0x1F, 0x31, x, y, edgeAlpha);
            texDrawTableEntryAtStoredOrigin(2, 0x1F, 0x32, x, y, edgeAlpha);
            efctSetSpeed(speed);
        } else {
            texDrawCompositeSprite(2, 0x1F, 1, x, y, alpha);
            efctSetSpeed(menu->edge.alpha * speed);
            texDrawTableEntryAtStoredOrigin(2, 0x1F, 0x27, x, y, edgeAlpha);
            texDrawTableEntryAtStoredOrigin(2, 0x1F, 0x28, x, y, edgeAlpha);
            efctSetSpeed(speed);
        }
    } else {
        base = asdTMTexTableEntryAt(0x1F, slot + 5);
        x = base->x;
        y = base->y;
        texDrawCompositeSprite(2, 0x1F, 0, x, y, alpha);
    }
    f32 fade = (f32)(0x100 - alpha) * (1.0f / 256.0f);

    s32 iconX;
    s32 iconY;
    s32 offsetX;
    s32 offsetY;
    u32 mode;
    u32 mask;
    if (style != 0) {
        TextureTableEntryIV *icon = asdTMTexTableEntryAt(0x1F, 0x14);
        iconX = icon->x;
        iconY = icon->y;
        TextureTableEntryIV *offset = asdTMTexTableEntryAt(0x1F, 0x2C);
        offsetX = offset->x;
        offsetY = offset->y;
        mode = 3;
        mask = 0x57D8FFFF;
        if (menu->header.wide != 0) {
            if (style != 2) {
                mask = 0xF5FF9FFF;
            }
        } else if (style != 2) {
            mask = 0x9FE7FFFF;
        }
    } else {
        TextureTableEntryIV *icon = asdTMTexTableEntryAt(0x1F, 4);
        iconX = icon->x;
        iconY = icon->y;
        TextureTableEntryIV *offset = asdTMTexTableEntryAt(0x1F, 0x2B);
        offsetX = offset->x;
        offsetY = offset->y;
        mode = 2;
        mask = 0xFFFFFFFF;
    }
    u8 *item = (u8 *)menu->items[itemIndex];
    if (menu->itemIds[slot] > 0) {
        if (menu->itemIds[slot] == 0x1BC6) {
            u16 id = *(u16 *)(item + 0x54);
            if (item[0x21] == 5) {
                id = *(u16 *)(item + 0x56);
            }
            if (!FUN_002e5d88(id)) {
                effectSetByteSpeed(0x66);
            }
        }
        texDrawTableEntryAtStoredOrigin(2, 0xB, menu->itemIds[slot], x + offsetX, y + offsetY, alpha);
        gxResetColorQuadToWhite();
    }
    textDrawString((f32)(iconX + x), (f32)(iconY + y), fade, mode, 0.0f, mask, speed, (const char *)item);
}

} /* extern "C" */
