#include "common.h"
#include "shard/TextureDrawCall.h"
#include "gfx/SpritePartDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

enum {
    ICON_TABLE = 0xB,        /* the sprite table that holds the text icons */
    ICON_LAYER = 2,
    ICON_FLAGS = 0xB,
    ICON_WIDTH_MASK = 0x7FFF /* the entry's width without its flag bit */
};
#define ICON_Y_OFFSET 2.0f

extern "C" {
void efctSetSpeed(f32 speed);

/* The text system's icon callback: draws icon `index` of icon set `set` at (x, y) with the given opacity, unless
 * `skip` is set, and returns the icon's width (0 when there is none). Set 0 holds the icons that have a composed
 * sprite; sets 1 and 2 are plain table entries. The sets are three separate `if (set == N)` blocks, not an
 * else-if chain: retail keeps the first copy of the blocks' shared draw-and-measure tail and branches into it from
 * the later sets, which armcc's cross-jumping gives only for separate ifs (an else-if chain keeps the last copy). */
u16 textIconDraw(s32 set, u32 index, s32 skip, f32 x, f32 y, f32 unused, f32 opacity)
{
    efctSetSpeed(opacity);

    const TextureTableEntryIV *frame;
    u32 sprite = 0;
    s32 composed = -1;
    u16 width = 0;

    if (set == 0) {
        switch (index) {
        case 0:
            composed = 0;
            sprite = 0xBB8;
            break;
        case 1:
            composed = 1;
            sprite = 0xBB8;
            break;
        case 2:
            composed = 2;
            sprite = 0xBB8;
            break;
        case 3:
            composed = 3;
            sprite = 0xBB8;
            break;
        case 4:
            composed = 4;
            sprite = 0xBB9;
            break;
        case 5:
            composed = 5;
            sprite = 0xBBA;
            break;
        case 6:
            composed = 7;
            sprite = 0xBBB;
            break;
        case 7:
            composed = 6;
            sprite = 0xBBB;
            break;
        case 8:
            composed = 8;
            sprite = 0xBBC;
            break;
        case 9:
            sprite = 0xBC1;
            break;
        case 10:
            sprite = 0xBC2;
            break;
        case 11:
            sprite = 0xBC3;
            break;
        case 12:
            sprite = 0xBC4;
            break;
        case 13:
            sprite = 0xBC5;
            break;
        case 14:
            sprite = 0xBBD;
            break;
        case 15:
            sprite = 0xBBE;
            break;
        case 16:
            sprite = 0xBC0;
            break;
        case 17:
            sprite = 0xBBF;
            break;
        case 18:
            composed = 27;
            sprite = 0xBBB;
            break;
        case 19:
            composed = 28;
            sprite = 0xBBB;
            break;
        case 20:
            composed = 29;
            sprite = 0xBBB;
            break;
        case 21:
            composed = 30;
            sprite = 0xBBB;
            break;
        }
        frame = asdTMTexTableEntryAt(ICON_TABLE, sprite);
        if (frame != NULL && skip == 0) {
            if (composed >= 0) {
                texDrawCompositeSprite(ICON_LAYER, ICON_TABLE, composed, (s32)x, (s32)(y + ICON_Y_OFFSET), ICON_FLAGS);
            } else {
                texDrawTableEntryAtStoredOrigin(ICON_LAYER, ICON_TABLE, sprite, (s32)x, (s32)(y + ICON_Y_OFFSET), ICON_FLAGS);
            }
            width = frame->width & ICON_WIDTH_MASK;
        }
    }
    if (set == 1) {
        switch (index) {
        case 0:
            sprite = 0x3E8;
            break;
        case 1:
            sprite = 0x3E9;
            break;
        case 2:
            sprite = 0x3EA;
            break;
        case 3:
            sprite = 0x3EB;
            break;
        case 4:
            sprite = 0x3EC;
            break;
        case 5:
            sprite = 0x3ED;
            break;
        case 6:
            sprite = 0x3EE;
            break;
        case 7:
            sprite = 0x3EF;
            break;
        case 8:
            sprite = 0x3F0;
            break;
        case 9:
            sprite = 0x3F1;
            break;
        case 10:
            sprite = 0x3F2;
            break;
        case 11:
            sprite = 0x3F3;
            break;
        case 12:
            sprite = 0x3F4;
            break;
        case 13:
            sprite = 0x3F6;
            break;
        }
        frame = asdTMTexTableEntryAt(ICON_TABLE, sprite);
        if (frame != NULL && skip == 0) {
            texDrawTableEntryAtStoredOrigin(ICON_LAYER, ICON_TABLE, sprite, (s32)x, (s32)(y + ICON_Y_OFFSET), ICON_FLAGS);
            width = frame->width & ICON_WIDTH_MASK;
        }
    }
    if (set == 2) {
        switch (index) {
        case 0:
            sprite = 0x3F7;
            break;
        case 1:
            sprite = 0x3F8;
            break;
        case 2:
            sprite = 0x3F9;
            break;
        case 3:
            sprite = 0x3FA;
            break;
        case 4:
            sprite = 0x3FB;
            break;
        case 5:
            sprite = 0x3FC;
            break;
        case 6:
            sprite = 0x3FD;
            break;
        case 7:
            sprite = 0x3FE;
            break;
        case 8:
            sprite = 0x3FF;
            break;
        case 9:
            sprite = 0x400;
            break;
        }
        frame = asdTMTexTableEntryAt(ICON_TABLE, sprite);
        if (frame != NULL && skip == 0) {
            texDrawTableEntryAtStoredOrigin(ICON_LAYER, ICON_TABLE, sprite, (s32)x, (s32)(y + ICON_Y_OFFSET), ICON_FLAGS);
            width = frame->width & ICON_WIDTH_MASK;
        }
    }
    efctSetSpeed(1.0f);
    return width;
}

} /* extern "C" */
