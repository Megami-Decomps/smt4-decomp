/* NON_MATCHING: draws the icon for an element/status index in one of three icon sets and returns its width; written from the decompilation, the case tables are written as data tables and the shared draw/return tail is merged */
#include "common.h"

#define ICON_TABLE 0x13
#define ICON_LAYER 2
#define ICON_FLAGS 0xB
#define ICON_Y_OFFSET 2.0f
#define ICON_WIDTH_MASK 0x7FFF

/* A frame record of the icon table. */
struct IconFrameRecord {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 width;
};

/* Icon set 0: sprite and optional pre-composed icon (-1: draw the sprite itself). */
struct IconEntry {
    u16 sprite;
    s16 composed;
};

extern "C" {
IconFrameRecord *FUN_002bf4f8(u32 table, u32 sprite);
void FUN_002bf288(u32 layer, u32 table, u32 sprite, s32 x, s32 y, u32 flags);
void FUN_002bf380(u32 layer, u32 table, u32 composed);
void efctSetSpeed(f32 speed);

static const IconEntry iconSetMain[0x16] = {
    { 3000, 0 }, { 3000, 1 }, { 3000, 2 }, { 3000, 3 }, { 0xBB9, 4 }, { 0xBBA, 5 },
    { 0xBBB, 7 }, { 0xBBB, 6 }, { 0xBBC, 8 }, { 0xBC1, -1 }, { 0xBC2, -1 }, { 0xBC3, -1 },
    { 0xBC4, -1 }, { 0xBC5, -1 }, { 0xBBD, -1 }, { 0xBBE, -1 }, { 0xBC0, -1 }, { 0xBBF, -1 },
    { 0xBBB, 0x1B }, { 0xBBB, 0x1C }, { 0xBBB, 0x1D }, { 0xBBB, 0x1E },
};

/* Icon set 1: 1000.. with a gap at 0x3F5. */
static const u16 iconSetSecond[14] = {
    1000, 0x3E9, 0x3EA, 0x3EB, 0x3EC, 0x3ED, 0x3EE, 0x3EF, 0x3F0, 0x3F1, 0x3F2, 0x3F3, 0x3F4, 0x3F6
};

#define ICON_SET_THIRD_BASE 0x3F7
#define ICON_SET_THIRD_COUNT 10

/* Draws icon `index` of `set` at (x, y) unless `skip` is set; returns its width (0 when nothing drawn). */
u16 FUN_00109b08(s32 set, u32 index, s32 skip, f32 x, f32 y)
{
    efctSetSpeed(1.0f);
    u32 sprite = 0;
    s32 composed = -1;
    u16 width = 0;

    if (set == 0) {
        if (index < 0x16) {
            sprite = iconSetMain[index].sprite;
            composed = iconSetMain[index].composed;
        }
        IconFrameRecord *frame = FUN_002bf4f8(ICON_TABLE, sprite);
        if (frame != NULL && skip == 0) {
            if (composed >= 0)
                FUN_002bf380(ICON_LAYER, ICON_TABLE, composed);
            else
                FUN_002bf288(ICON_LAYER, ICON_TABLE, sprite, (s32)x, (s32)(y + ICON_Y_OFFSET), ICON_FLAGS);
            width = frame->width & ICON_WIDTH_MASK;
        }
        efctSetSpeed(1.0f);
        return width;
    }

    if (set == 1) {
        if (index < 14)
            sprite = iconSetSecond[index];
    } else if (set == 2) {
        if (index < ICON_SET_THIRD_COUNT)
            sprite = ICON_SET_THIRD_BASE + index;
    } else {
        efctSetSpeed(1.0f);
        return width;
    }
    IconFrameRecord *frame = FUN_002bf4f8(ICON_TABLE, sprite);
    if (frame == NULL || skip != 0) {
        efctSetSpeed(1.0f);
        return width;
    }
    FUN_002bf288(ICON_LAYER, ICON_TABLE, sprite, (s32)x, (s32)(y + ICON_Y_OFFSET), ICON_FLAGS);
    width = frame->width & ICON_WIDTH_MASK;
    efctSetSpeed(1.0f);
    return width;
}

} /* extern "C" */
