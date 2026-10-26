/* NON_MATCHING: StreetPass card and centered-label drawing is reconstructed; frame variants merge before the common draw rather than retaining retail out-of-line branches. */
#include "common.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct CecCardLabel {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 text;
    /* 0x14 */ s32 width;
};
struct CecCardEntry {
    /* 0x00 */ u8 unk00[0x21];
    /* 0x21 */ u8 selected;
    /* 0x22 */ u8 unk22[0xe];
    /* 0x30 */ u32 display;
    /* 0x34 */ u16 id;
};
struct CecCardPlacement {
    /* 0x00 */ f32 scale;
    /* 0x04 */ s32 x;
    /* 0x08 */ s32 y;
};
extern "C" {
void FUN_00164b5c(s32 mode, u32 file, u32 sprite, s32 x, s32 y, u32 layer);
void drawSetColorFromRGBA8(u32 color);
void FUN_002e1b64(u32 display, s32 x, s32 y, u32 layer);
void FUN_00183bb0();
}

/* Draw the card background, its entry display, and a horizontally centered label. */
extern "C" void FUN_0034248c(CecCardLabel *label, const CecCardEntry *entry,
                              const CecCardPlacement *placement, s32 x, s32 y)
{
    if (label == NULL) {
        return;
    }
    if (entry != NULL && entry->id == 0) {
        FUN_00164b5c(2, 46, 37, placement->x + x, placement->y + y, 101);
    } else {
        FUN_00164b5c(2, 46, entry->selected ? 25 : 24,
                      placement->x + x, placement->y + y, 101);
    }
    drawSetColorFromRGBA8(0x82fff500);
    const TextureTableEntryIV *entrySprite = asdTMTexTableEntryAt(46, 83);
    FUN_002e1b64(entry->display, placement->x + entrySprite->x + x,
                  placement->y + entrySprite->y + y, 101);
    FUN_00183bb0();
    FUN_00164b5c(2, 46, 14, placement->x + x, placement->y + y, 101);
    const TextureTableEntryIV *labelSprite = asdTMTexTableEntryAt(46, 158);
    s32 center = 6 + (labelSprite->placement->width - label->width) / 2;
    FUN_001527d8(label->text, 0xffffff00);
    FUN_0025cc78(reinterpret_cast<const void *>(label->text), labelSprite->x + placement->x + (x + center),
                  placement->y + labelSprite->y + y, 102, placement->scale);
}
