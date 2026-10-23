/* NON_MATCHING: extended-view address caching, category branch outlining and label-coordinate register lifetimes differ. */
#include "shop/shopMain.h"
#include "shard/S1ListPanel.h"

extern "C" {
s32 FUN_0031d174(const void *selection);
const SpriteInfo *FUN_0018349c(void *group, u32 sprite);
void FUN_0049339c(void *group, u32 sprite, s32 x, s32 y, s32 depth);
void FUN_0049368c(void *group, u32 sprite, s32 x, s32 y, s32 depth, s32 enabled);
void textFormatBuffer(char *buffer, const char *format, ...);
void drawTextAtRelativePosition(void *group, u32 font, s32 x, s32 y, s32 mode,
    s32 alignment, u32 color, s32 depth, const char *text);
extern const char DAT_0053617c[];

void FUN_004957b4(ShopWork *base)
{
    // The shared ShopWork exposes only the task prefix, not this Apocalypse screen's body.
    struct QuantityView {
        ShopWork prefix;
        u8 unk01C[0x3A0 - sizeof(ShopWork)];
        s32 depth;
        u8 unk3A4[0x14];
        u8 sprites[0x788];
        s32 category;
        u32 unkB44, quantity, maximum;
        u8 unkB50[8];
        u8 showDecrease, showIncrease;
        u8 unkB5A[6];
        u8 selections[9][0x74];
    };
    typedef char QuantityViewOffsetsCheck[offsetof(QuantityView, sprites) == 0x3B8 &&
        offsetof(QuantityView, category) == 0xB40 &&
        offsetof(QuantityView, showIncrease) == 0xB59 &&
        offsetof(QuantityView, selections) == 0xB60 ? 1 : -1];
    QuantityView *work = reinterpret_cast<QuantityView *>(base);
    s32 depth = work->depth + 6;
    s32 spriteOffset = 2;
    if (work->category == 7 || work->category == 8)
        spriteOffset = 1;
    s32 row = FUN_0031d174(work->selections[work->category]);
    const SpriteInfo *position = FUN_0018349c(work->sprites, row + spriteOffset + 0x4F);
    s16 positionX = position->x, positionY = position->y;
    const SpriteInfo *origin = FUN_0018349c(work->sprites, 200);
    s32 x = origin->x + positionX, y = positionY + origin->y;
    if (work->category != 8)
        FUN_0049339c(work->sprites, 8, x, y, depth);
    else
        FUN_0049339c(work->sprites, 9, x, y, depth);
    FUN_0049368c(work->sprites, 0xC2, x, y, depth, 1);
    FUN_0049368c(work->sprites, 0xC3, x, y, depth, 1);
    if (work->showDecrease)
        FUN_0049368c(work->sprites, 0xC4, x, y, depth + 1, 1);
    if (work->showIncrease)
        FUN_0049368c(work->sprites, 0xC5, x, y, depth + 1, 1);
    u32 quantity = work->quantity;
    const SpriteInfo *label = FUN_0018349c(work->sprites, 199);
    u32 color = 0xFFFFFFFF;
    s16 labelX = label->x, labelY = label->y;
    if (work->quantity == work->maximum)
        color = 0x57D8FFFF;
    char text[32];
    textFormatBuffer(text, DAT_0053617c, quantity);
    drawTextAtRelativePosition(work->sprites, 0, labelX + x, labelY + y, 0, 7, color, depth, text);
}
}
