/* NON_MATCHING: 120 lines (58 by shape); same calls, branches, registers and 84-byte frame as retail. What differs:
 * - where the spilled locals live: retail keeps the font at sp+36, the text at sp+40 and the name and its sprite at
 *   sp+72/76, the scroll highlight's layout entry, sprite and x in sp+0/4/12 and the helper's id copy and the price
 *   in sp+8; the build puts the text at sp+48, the name at sp+40 and the others in the outgoing-argument slots
 *   (font sp+0, name sprite sp+12, layout entry/sprite/x sp+4/0/8, id copy sp+4, price sp+0). shopDrawAppraisalRow
 *   differs the same way;
 * - `row != 0` is `mov #1; moveq #0` in retail (`movne #1; moveq #0` here);
 * - retail loads the entry id into r2 before it moves the price for btlRollClamped, as its four other callers do
 *   (a plain `static` helper around the call gives that, but moves the id's slot to sp+28);
 * - the name draw loads the 0.0 spacing after the colour move (before it here). */
#include <stdio.h>
#include "shard/S2Scene3a.h"
#include "shard/S1ListPanel.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiControl.h"
#include "camp/RenderCtxTitle.h"
#include "classes/Obj55ca08.h"
#include "ui/AnimatedMessage.h"
#include "gamedata/EquipmentSortPower.h"

extern "C" {
void uiDrawBottomRightOffset(const AsdTextureRegion *region, u32 id, s32 x, s32 y, u32 depth);
void FUN_00231bcc(const AsdTextureRegion *region, u32 id, s32 x, s32 y, u32 depth, u32 mode);
void FUN_00230d2c(const AsdTextureRegion *region, u32 id, s32 x, s32 y, s32 depth, s32 showEquipped);
void uiRectDrawAtBottomRight(const AsdTextureRegion *region, u32 image, s32 x, s32 y, u32 depth);
void gxSetClippedBottomScreenScissor(s32 x, s32 y, s32 width, s32 height);
f32 drawTextAtSnappedRectangle(const AsdTextureRegion *region, f32 x, f32 y, u32 layer, u32 color,
                               const char *text, f32 depth, f32 spacing, f32 opacity);
const char *itemGetNameOrFallback(u32 id, s32 payload);
s32 shopSlotGetPrice(const Scene3aEntry *entry);
s32 aocItemGetPrice(const Scene3aEntry *entry);
s32 btlRollClamped(u32 id, s32 divisor);
s32 playerSlotHoldsEntry(Scene3a *scene, u32 id);
s8 touchSelectionGetSelected(const Obj55ca08 *selection);

/* Whether the player already holds the item and owns at most one of it. */
static __inline bool sceneHoldsLastItem(Scene3a *scene, u32 id)
{
    return playerSlotHoldsEntry(scene, id) && itemGetOwnedCount(id) <= 1;
}

/* Draw one row of the shop list: the selected row's frame and scrolling highlight, the item's
 * category badge, its marks, its name (greyed when the player can afford none, or for the last
 * held piece in tab 8), its price and the count the player owns. Row 0 shows neither marks nor price. */
void shopDrawListRow(Scene3a *scene, s32 row, s32 selected, const Scene3aEntry *entry)
{
    u32 id = entry->id;
    if (id == 0) {
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
    const TextureTableEntryIV *badge;
    if (!selected) {
        badge = layoutFindTableEntry(&scene->region, 0x99);
    } else {
        badge = layoutFindTableEntry(&scene->region, 0xAC);
    }
    s32 badgeX = badge->x + x;
    s32 badgeY = badge->y + y;
    if (selected) {
        FUN_00231bcc(&scene->region, 0xAA, x, y, depth, 1);
    }
    FUN_00230d2c(&scene->region, (s16)id, badgeX, badgeY, depth, row != 0);

    if (row != 0) {
        if (entry->unk02 & 1) {
            const TextureTableEntryIV *mark;
            if (!selected) {
                mark = layoutFindTableEntry(&scene->region, 0x98);
            } else {
                mark = layoutFindTableEntry(&scene->region, 0xAB);
            }
            s32 markX = mark->x + x;
            s32 markY = mark->y + y;
            uiRectDrawAtBottomRight(&scene->region, 5, markX, markY, depth);
        }
        if (entry->unk02 & 2) {
            const TextureTableEntryIV *mark;
            if (!selected) {
                mark = layoutFindTableEntry(&scene->region, 0x9F);
            } else {
                mark = layoutFindTableEntry(&scene->region, 0xB2);
            }
            s32 markX = mark->x + x;
            s32 markY = mark->y + y;
            if (scene->slot == 8) {
                uiRectDrawAtBottomRight(&scene->region, 7, markX, markY, depth);
            } else {
                uiRectDrawAtBottomRight(&scene->region, 6, markX, markY, depth);
            }
        }
    }

    u32 font = !selected ? 2 : 3;
    const char *name = itemGetNameOrFallback(id, 0);
    u32 color;
    u32 nameSprite;
    if (!selected) {
        color = 0xFF;
        nameSprite = 0x9A;
        if (scene->slot == 8) {
            if (sceneHoldsLastItem(scene, id)) {
                color = 0x5A5A5AFF;
            }
        } else if (!btlRollClamped(entry->id, shopSlotGetPrice(entry))) {
            color = 0x5A5A5AFF;
        }
    } else {
        color = 0xFFFFFFFF;
        nameSprite = 0xAD;
        if (scene->slot == 8) {
            if (sceneHoldsLastItem(scene, id)) {
                color = 0x787878FF;
            }
        } else if (!btlRollClamped(entry->id, shopSlotGetPrice(entry))) {
            color = 0x787878FF;
        }
    }
    const TextureTableEntryIV *nameOrigin = layoutFindTableEntry(&scene->region, nameSprite);
    s32 nameX = nameOrigin->x + x;
    s32 nameY = nameOrigin->y + y;
    drawTextAtSnappedRectangle(&scene->region, (f32)nameX, (f32)nameY, font, color, name, z, 0.0f, 1.0f);

    char text[32];
    if (row != 0) {
        s32 price;
        if (scene->slot == 8) {
            price = aocItemGetPrice(entry);
        } else {
            price = shopSlotGetPrice(entry);
        }
        const TextureTableEntryIV *priceOrigin;
        u32 priceColor;
        if (!selected) {
            priceOrigin = layoutFindTableEntry(&scene->region, 0xA7);
            priceColor = 0x5A5A5AFF;
        } else {
            priceOrigin = layoutFindTableEntry(&scene->region, 0xBA);
            priceColor = 0xFFFFFFFF;
        }
        s32 priceX = priceOrigin->x + x;
        s32 priceY = priceOrigin->y + y;
        sprintf(text, "%8d", price);
        drawTextAtRelativePosition(&scene->region, 0, priceX, priceY, 0, 7, priceColor, depth, text);
    }

    s32 owned = itemGetOwnedCount(id);
    const TextureTableEntryIV *ownedOrigin;
    u32 ownedColor;
    if (!selected) {
        ownedOrigin = layoutFindTableEntry(&scene->region, 0xA9);
        ownedColor = 0x7A4C00FF;
    } else {
        ownedOrigin = layoutFindTableEntry(&scene->region, 0xBC);
        ownedColor = 0xF49800FF;
    }
    s32 ownedX = ownedOrigin->x + x;
    s32 ownedY = ownedOrigin->y + y;
    sprintf(text, "%2d", owned);
    drawTextAtRelativePosition(&scene->region, 0, ownedX, ownedY, 0, 7, ownedColor, depth, text);
}
}
