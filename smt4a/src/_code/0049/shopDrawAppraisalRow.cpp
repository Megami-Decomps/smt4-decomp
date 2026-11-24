/* NON_MATCHING: 66 lines (66 by shape); a port of IV's shopDrawAppraisalRow with Apocalypse's selected-row frame
 * (FUN_00494d68's). Same instructions, calls, branches and 92-byte frame as retail except:
 * - which frame slot each spilled local takes: retail has the count at sp+88, the touch selection at sp+36, the
 *   badge's x and y at sp+12 and sp+8, the font and the price's item reference at sp+48, the name at sp+16 and
 *   the price's and count's x and y at sp+40/44; the build has the count at sp+52, the touch selection at sp+40,
 *   the badge at sp+36/12 and the positions at sp+44/48;
 * - retail computes the price's x and y before storing either (y first), with the price's load between. */
#include <stdio.h>
#include "classes/Obj536044.h"
#include "classes/Obj55ca08.h"
#include "shard/W6_W6Match2_OffsetPosition2D.h"
#include "shard/W6_W6Match6_ItemIcon.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiControl.h"
#include "ui/AnimatedMessage.h"
#include "gamedata/AocItemRef.h"
#include "code/Code0049_Smt4a.h"
#include "addon/AocSystem_Smt4a.h"

extern "C" {
void FUN_0049368c(const AsdTextureRegion *region, u32 image, s32 offsetX, s32 offsetY, u32 color, u32 flags);
f32 drawTextAtSnappedRectangle(const AsdTextureRegion *region, f32 x, f32 y, f32 depth, f32 spacing,
                               u32 layer, u32 color, f32 opacity, const char *text);
const char *itemGetNameOrFallback(u32 id, s32 payload);
u8 FUN_0049cab8(u32 id);
s8 touchSelectionGetSelected(const Obj55ca08 *selection);

/* Draw one row of the appraisal list: the selected row's frame and its highlight, then the items the
 * record holds. A record whose second item is of kind 10 shows that item with its price; any other record
 * shows the first item and, on a second line, the second one. Then the count, and the row's frame on top. */
void shopDrawAppraisalRow(Obj536044 *shop, s32 row, s32 selected, s32 index)
{
    u32 first = shop->records[index].item;
    u32 second = shop->records[index].id;
    u32 quantity = shop->records[index].quantity;
    if (first == 0) {
        return;
    }
    s32 depth = shop->depth;
    if (selected) {
        depth++;
    }
    f32 z = (f32)(256 - depth) * 0.00390625f;
    const TextureTableEntryIV *origin;
    if (!selected) {
        origin = layoutFindTableEntry(&shop->region, row + 0x27);
    } else {
        origin = layoutFindTableEntry(&shop->region, row + 0x4F);
    }
    s32 x = origin->x;
    s32 y = origin->y;

    if (selected) {
        efctSetSpeed(vec2GetSpeed(&shop->animation.sprites[2]));
        uiDrawTableTextureAtRectCorner((ScreenRect *)&shop->region, 0x47, x, y, depth);
        uiDrawTableTextureAtRectCorner((ScreenRect *)&shop->region, 0x48, x, y, depth);
        uiDrawTableTextureAtRectCorner((ScreenRect *)&shop->region, 0x49, x, y, depth);
        efctSetSpeed(1.0f);
        FUN_0049368c(&shop->region, 0x4A, x, y, depth, 1);
        if (touchSelectionGetSelected((Obj55ca08 *)shop->touchSelection) != 0) {
            uiDrawTableTextureAtRectCorner((ScreenRect *)&shop->region, 0x108, x, y, depth);
            uiDrawTableTextureAtRectCorner((ScreenRect *)&shop->region, 0x109, x, y, depth);
            uiDrawTableTextureAtRectCorner((ScreenRect *)&shop->region, 0x10A, x, y, depth);
            efctSetSpeed(vec2GetSpeed(&shop->animation.sprites[12]));
            uiDrawTableTextureAtRectCorner((ScreenRect *)&shop->region, 0x10B, x, y, depth);
            efctSetSpeed(1.0f);
        } else {
            uiDrawTableTextureAtRectCorner((ScreenRect *)&shop->region, 0x4B, x, y, depth);
            uiDrawTableTextureAtRectCorner((ScreenRect *)&shop->region, 0x4C, x, y, depth);
            uiDrawTableTextureAtRectCorner((ScreenRect *)&shop->region, 0x4D, x, y, depth);
            efctSetSpeed(vec2GetSpeed(&shop->animation.sprites[12]));
            uiDrawTableTextureAtRectCorner((ScreenRect *)&shop->region, 0x105, x, y, depth);
            efctSetSpeed(1.0f);
        }
    }

    u32 shown = second;
    if (!FUN_0049cab8(second)) {
        shown = first;
    }
    const TextureTableEntryIV *badge;
    if (!selected) {
        badge = layoutFindTableEntry(&shop->region, 0xD2);
    } else {
        badge = layoutFindTableEntry(&shop->region, 0xE6);
    }
    s32 badgeX = badge->x + x;
    s32 badgeY = badge->y + y;
    if (selected) {
        FUN_0049368c(&shop->region, 0xE4, x, y, depth, 1);
    }
    FUN_00493344((const OffsetPosition2D *)&shop->region, (s16)shown, badgeX, badgeY, depth, 0);

    u32 font = !selected ? 2 : 3;
    const char *name = itemGetNameOrFallback(shown, 0);
    u32 color;
    u32 nameSprite;
    if (!selected) {
        nameSprite = 0xD3;
        color = 0xFFFFFFFF;
    } else {
        nameSprite = 0xE7;
        if (touchSelectionGetSelected((Obj55ca08 *)shop->touchSelection) != 0) {
            color = 0xF5FF9FFF;
        } else {
            color = 0x9FE7FFFF;
        }
    }
    const TextureTableEntryIV *nameOrigin = layoutFindTableEntry(&shop->region, nameSprite);
    s32 nameX = nameOrigin->x + x;
    s32 nameY = nameOrigin->y + y;
    drawTextAtSnappedRectangle(&shop->region, (f32)nameX, (f32)nameY, z, -1.0f, font, color, 1.0f, name);

    char text[32];
    if (!FUN_0049cab8(second)) {
        /* Anything else: the second item on its own line. */
        const TextureTableEntryIV *secondBadge;
        if (!selected) {
            secondBadge = layoutFindTableEntry(&shop->region, 0xD4);
        } else {
            secondBadge = layoutFindTableEntry(&shop->region, 0xE8);
        }
        s32 secondX = secondBadge->x + x;
        s32 secondY = secondBadge->y + y;
        if (selected) {
            FUN_0049368c(&shop->region, 0xE5, x, y, depth, 1);
        }
        FUN_00493344((const OffsetPosition2D *)&shop->region, (s16)second, secondX, secondY, depth, 0);
        const char *secondName = itemGetNameOrFallback(second, 0);
        u32 secondColor;
        u32 secondSprite;
        if (!selected) {
            secondSprite = 0xD5;
            secondColor = 0xFFFFFFFF;
        } else {
            secondSprite = 0xE9;
            secondColor = 0x9FE7FFFF;
        }
        const TextureTableEntryIV *secondOrigin = layoutFindTableEntry(&shop->region, secondSprite);
        s32 secondNameX = secondOrigin->x + x;
        s32 secondNameY = secondOrigin->y + y;
        drawTextAtSnappedRectangle(&shop->region, (f32)secondNameX, (f32)secondNameY, z, -1.0f, font, secondColor,
                                   1.0f, secondName);
    } else {
        /* A kind-10 item: its price. */
        AocItemRef item;
        item.unk02Bit0 = 0;
        item.scaled = 0;
        item.percent = 0;
        item.id = second;
        s32 price = aocItemGetPrice((AocPricedItem *)&item);
        FUN_0049368c(&shop->region, !selected ? 0xD1 : 0xE3, x, y, depth, 1);
        const TextureTableEntryIV *priceOrigin;
        u32 priceColor;
        if (!selected) {
            priceOrigin = layoutFindTableEntry(&shop->region, 0xDD);
            priceColor = 0x9B9B9BFF;
        } else {
            priceOrigin = layoutFindTableEntry(&shop->region, 0xF1);
            priceColor = 0xFFFFFFFF;
        }
        s32 priceX = priceOrigin->x + x;
        s32 priceY = priceOrigin->y + y;
        sprintf(text, "%8d", price);
        drawTextAtRelativePosition(&shop->region, 0, priceX, priceY, 0, 7, priceColor, depth, text);
    }

    const TextureTableEntryIV *countOrigin;
    u32 countColor;
    if (!selected) {
        countOrigin = layoutFindTableEntry(&shop->region, 0xE0);
        countColor = 0x9FDDDDFF;
    } else {
        countOrigin = layoutFindTableEntry(&shop->region, 0xF4);
        countColor = 0x57D8FFFF;
    }
    s32 countX = countOrigin->x + x;
    s32 countY = countOrigin->y + y;
    sprintf(text, "%3d", quantity);
    drawTextAtRelativePosition(&shop->region, 0, countX, countY, 0, 7, countColor, depth, text);

    const char *mark = "*";
    const TextureTableEntryIV *markOrigin = layoutFindTableEntry(&shop->region, !selected ? 0x100 : 0x101);
    s32 markX = markOrigin->x + x;
    s32 markY = markOrigin->y + y;
    drawTextAtRelativePosition(&shop->region, 0, markX, markY, 0, 7, countColor, depth, mark);

    u32 frame;
    if (shop->kindTenFrame && FUN_0049cab8(second)) {
        frame = !selected ? 0xD0 : 0xE2;
    } else {
        frame = !selected ? 0xCF : 0xE1;
    }
    FUN_0049368c(&shop->region, frame, x, y, depth, 1);
}
}
