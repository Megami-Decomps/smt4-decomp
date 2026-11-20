/* NON_MATCHING: same calls and branches as retail, and the same 92-byte frame with the text at sp+56, the count
 * at sp+88 and the font at sp+48. What differs is where the other locals live: retail puts the price's item
 * reference at sp+48 too (sharing the font's slot) and the price's x and y at sp+36 and sp+44 (here the item is
 * at sp+36 and x and y at sp+40/44, which armcc then loads with one ldrd: three rows fewer), keeps the name in
 * the outgoing-argument slot sp+16 and the badge's y in sp+8 (here sp+4 and sp+16), spills the scroll sprite and
 * its layout entry in the other order, computes the price's x and y before storing either, and sets up the
 * mark's stack arguments after loading its position. */
#include <stdio.h>
#include "shard/S2Scene3a.h"
#include "shard/S1ListPanel.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiControl.h"
#include "camp/RenderCtxTitle.h"
#include "classes/Obj55ca08.h"
#include "ui/AnimatedMessage.h"
#include "code/Code0022_Smt4.h"
#include "gamedata/AocItemRef.h"

extern "C" {
void uiDrawBottomRightOffset(const AsdTextureRegion *region, u32 id, s32 x, s32 y, u32 depth);
void FUN_00231bcc(const AsdTextureRegion *region, u32 id, s32 x, s32 y, u32 depth, u32 mode);
void FUN_00230d2c(const AsdTextureRegion *region, u32 id, s32 x, s32 y, s32 depth, s32 showEquipped);
void gxSetClippedBottomScreenScissor(s32 x, s32 y, s32 width, s32 height);
f32 drawTextAtSnappedRectangle(const AsdTextureRegion *region, f32 x, f32 y, u32 layer, u32 color,
                               const char *text, f32 depth, f32 spacing, f32 opacity);
const char *itemGetNameOrFallback(u32 id, s32 payload);
s32 aocItemGetPrice(const AocItemRef *ref);
s8 touchSelectionGetSelected(const Obj55ca08 *selection);

/* Draw one row of the appraisal list: the selected row's frame and scrolling highlight, then the items the
 * record holds. A record whose second item is of kind 10 shows that item with its price; any other record
 * shows the first item and, on a second line, the second one. Then the count, and the row's frame on top. */
void shopDrawAppraisalRow(Scene3a *scene, s32 row, s32 selected, s32 index)
{
    u32 first = scene->transaction.records[index].item;
    u32 second = scene->transaction.records[index].id;
    u32 quantity = scene->transaction.records[index].quantity;
    if (first == 0) {
        return;
    }
    s32 depth = scene->listId;
    if (selected) {
        depth++;
    }
    f32 z = (f32)(256 - depth) * 0.00390625f;
    const TextureTableEntryIV *origin;
    if (!selected) {
        origin = layoutFindTableEntry(&scene->region, row + 0x27);
    } else {
        origin = layoutFindTableEntry(&scene->region, row + 0x4F);
    }
    s32 x = origin->x;
    s32 y = origin->y;

    if (selected) {
        efctSetSpeed(vec2GetSpeed(&scene->animation.sprites[2]));
        uiDrawBottomRightOffset(&scene->region, 0x47, x, y, depth);
        uiDrawBottomRightOffset(&scene->region, 0x48, x, y, depth);
        uiDrawBottomRightOffset(&scene->region, 0x49, x, y, depth);
        efctSetSpeed(1.0f);
        FUN_00231bcc(&scene->region, 0x4A, x, y, depth, 1);
        if (touchSelectionGetSelected((Obj55ca08 *)scene->touchSelection) != 0) {
            FUN_00231bcc(&scene->region, 0x4C, x, y, depth, 1);
        } else {
            FUN_00231bcc(&scene->region, 0x4B, x, y, depth, 1);
        }
        const TextureTableEntryIV *clip = layoutFindTableEntry(&scene->region, 0x4E);
        s32 clipX = clip->x + x;
        s32 clipY = clip->y + y;
        s32 clipWidth = clip->placement->width;
        s32 clipHeight = clip->placement->height;
        gxSetClippedBottomScreenScissor(clipX, clipY, clipWidth, clipHeight);
        const TextureTableEntryIV *content = layoutFindTableEntry(&scene->region, 0x4D);
        UiSpriteState *scroll = &scene->animation.sprites[3];
        s32 contentX = vec2GetXInt(scroll) + x - (content->width & 0x7FFF);
        s32 contentY = vec2GetYInt(scroll) + y;
        FUN_00231bcc(&scene->region, 0x4D, contentX, contentY, depth, 1);
        renderStackSet(&g_titleScene->scissor, 0);
    }

    u32 shown = second;
    if (!aocEntryIsKindTen(second)) {
        shown = first;
    }
    const TextureTableEntryIV *badge;
    if (!selected) {
        badge = layoutFindTableEntry(&scene->region, 0xD2);
    } else {
        badge = layoutFindTableEntry(&scene->region, 0xE6);
    }
    s32 badgeX = badge->x + x;
    s32 badgeY = badge->y + y;
    if (selected) {
        FUN_00231bcc(&scene->region, 0xE4, x, y, depth, 1);
    }
    FUN_00230d2c(&scene->region, (s16)shown, badgeX, badgeY, depth, 0);

    u32 font = !selected ? 2 : 3;
    const char *name = itemGetNameOrFallback(shown, 0);
    u32 color;
    u32 nameSprite;
    if (!selected) {
        nameSprite = 0xD3;
        color = 0xFF;
    } else {
        nameSprite = 0xE7;
        color = 0xFFFFFFFF;
    }
    const TextureTableEntryIV *nameOrigin = layoutFindTableEntry(&scene->region, nameSprite);
    s32 nameX = nameOrigin->x + x;
    s32 nameY = nameOrigin->y + y;
    drawTextAtSnappedRectangle(&scene->region, (f32)nameX, (f32)nameY, font, color, name, z, 0.0f, 1.0f);

    char text[32];
    if (!aocEntryIsKindTen(second)) {
        /* Anything else: the second item on its own line. */
        const TextureTableEntryIV *secondBadge;
        if (!selected) {
            secondBadge = layoutFindTableEntry(&scene->region, 0xD4);
        } else {
            secondBadge = layoutFindTableEntry(&scene->region, 0xE8);
        }
        s32 secondX = secondBadge->x + x;
        s32 secondY = secondBadge->y + y;
        if (selected) {
            FUN_00231bcc(&scene->region, 0xE5, x, y, depth, 1);
        }
        FUN_00230d2c(&scene->region, (s16)second, secondX, secondY, depth, 0);
        const char *secondName = itemGetNameOrFallback(second, 0);
        u32 secondColor;
        u32 secondSprite;
        if (!selected) {
            secondSprite = 0xD5;
            secondColor = 0xFF;
        } else {
            secondSprite = 0xE9;
            secondColor = 0xFFFFFFFF;
        }
        const TextureTableEntryIV *secondOrigin = layoutFindTableEntry(&scene->region, secondSprite);
        s32 secondNameX = secondOrigin->x + x;
        s32 secondNameY = secondOrigin->y + y;
        drawTextAtSnappedRectangle(&scene->region, (f32)secondNameX, (f32)secondNameY, font, secondColor, secondName, z,
                                   0.0f, 1.0f);
    } else {
        /* A kind-10 item: its price. */
        AocItemRef item;
        item.unk02Bit0 = 0;
        item.scaled = 0;
        item.percent = 0;
        item.id = second;
        s32 price = aocItemGetPrice(&item);
        FUN_00231bcc(&scene->region, !selected ? 0xD1 : 0xE3, x, y, depth, 1);
        const TextureTableEntryIV *priceOrigin;
        u32 priceColor;
        if (!selected) {
            priceOrigin = layoutFindTableEntry(&scene->region, 0xDD);
            priceColor = 0x5A5A5AFF;
        } else {
            priceOrigin = layoutFindTableEntry(&scene->region, 0xF1);
            priceColor = 0xFFFFFFFF;
        }
        s32 priceX = priceOrigin->x + x;
        s32 priceY = priceOrigin->y + y;
        sprintf(text, "%8d", price);
        drawTextAtRelativePosition(&scene->region, 0, priceX, priceY, 0, 7, priceColor, depth, text);
    }

    const TextureTableEntryIV *countOrigin;
    u32 countColor;
    if (!selected) {
        countOrigin = layoutFindTableEntry(&scene->region, 0xE0);
        countColor = 0x323232FF;
    } else {
        countOrigin = layoutFindTableEntry(&scene->region, 0xF4);
        countColor = 0xFFFFFFFF;
    }
    s32 countX = countOrigin->x + x;
    s32 countY = countOrigin->y + y;
    sprintf(text, "%3d", quantity);
    drawTextAtRelativePosition(&scene->region, 0, countX, countY, 0, 7, countColor, depth, text);

    const char *mark = "*";
    const TextureTableEntryIV *markOrigin = layoutFindTableEntry(&scene->region, !selected ? 0x100 : 0x101);
    drawTextAtRelativePosition(&scene->region, 0, markOrigin->x + x, markOrigin->y + y, 0, 7, countColor, depth, mark);

    u32 frame;
    if (scene->appraisal.kindTenFrame && aocEntryIsKindTen(second)) {
        frame = !selected ? 0xD0 : 0xE2;
    } else {
        frame = !selected ? 0xCF : 0xE1;
    }
    FUN_00231bcc(&scene->region, frame, x, y, depth, 1);
}
}
