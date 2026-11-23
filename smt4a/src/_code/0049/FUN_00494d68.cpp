/* NON_MATCHING: 230 lines (146 by shape); same calls, branches and 84-byte frame as retail. What differs:
 * - the build keeps the constant 1 (FUN_0049368c's flags) in r6 and spills the highlight sprite's address and the
 *   badge's y; retail writes `mov r0, #1` at each call and keeps those two in r6;
 * - `row != 0` is `mov #1; moveq #0` in retail (`movne #1` here), as in IV's shopDrawListRow;
 * - retail moves the shop into r0 (`moveq r0, r4`) before each branch to the selling list's test, the build after it;
 * - retail loads the entry id into r2 before it moves the price for shopAffordableCount;
 * - the spilled price position and the text buffer sit in other frame slots. */
#include <stdio.h>
#include "classes/Obj536044.h"
#include "classes/Obj55ca08.h"
#include "shard/W6_W6Match2_OffsetPosition2D.h"
#include "shard/W6_W6Match6_ItemIcon.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiControl.h"
#include "ui/AnimatedMessage.h"
#include "shop/ShopBuyItem.h"
#include "code/Code0049_Smt4a.h"
#include "addon/AocSystem_Smt4a.h"

extern "C" {
void uiDrawCompositeSpriteAtRectCorner(ScreenRect *rect, u32 id, s32 dx, s32 dy, u32 extra);
void FUN_0049368c(const AsdTextureRegion *region, u32 image, s32 offsetX, s32 offsetY, u32 color, u32 flags);
f32 drawTextAtSnappedRectangle(const AsdTextureRegion *region, f32 x, f32 y, f32 depth, f32 spacing,
                               u32 layer, u32 color, f32 opacity, const char *text);
const char *itemGetNameOrFallback(u32 id, s32 payload);
u32 playerSlotHoldsEntry(Obj536044 *scene, u32 id);
s32 FUN_001ba3d0(u32 id); // declcheck: local (a forwarder: this caller passes the id and uses the count)
u32 FUN_0047fe44(u32 id);
bool equipmentHasPositiveUpgrade(u32 item);
u32 equipmentIsFullyUpgraded(u32 itemId);
s8 touchSelectionGetSelected(const Obj55ca08 *selection);

/* Whether the selling list keeps the item: playerSlotHoldsEntry names it and the player holds at most one, or
 * FUN_0047fe44 refuses it. */
static __inline bool shopItemIsKept(Obj536044 *shop, u32 id)
{
    return (playerSlotHoldsEntry(shop, id) != 0 && FUN_001ba3d0(id) <= 1) || FUN_0047fe44(id) != 0;
}

/* Draw one row of the shop list: the selected row's frame and its highlight, the item's category
 * badge, its marks, its name (greyed when the player can afford none, or when the selling list
 * keeps it; tinted for upgraded equipment), its price and the count the player owns. Row 0 shows
 * neither marks nor price. */
void FUN_00494d68(Obj536044 *shop, s32 row, s32 selected, const EquipmentMenuItem *entry)
{
    u32 id = entry->id;
    if (id == 0) {
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
    const TextureTableEntryIV *badge;
    if (!selected) {
        badge = layoutFindTableEntry(&shop->region, 0x99);
    } else {
        badge = layoutFindTableEntry(&shop->region, 0xAC);
    }
    s32 badgeX = badge->x + x;
    s32 badgeY = badge->y + y;
    if (selected) {
        FUN_0049368c(&shop->region, 0xAA, x, y, depth, 1);
    }
    FUN_00493344((const OffsetPosition2D *)&shop->region, (s16)id, badgeX, badgeY, depth, row != 0);

    if (row != 0) {
        if (entry->unk02 & 1) {
            const TextureTableEntryIV *mark;
            if (!selected) {
                mark = layoutFindTableEntry(&shop->region, 0x98);
            } else {
                mark = layoutFindTableEntry(&shop->region, 0xAB);
            }
            s32 markX = mark->x + x;
            s32 markY = mark->y + y;
            uiDrawCompositeSpriteAtRectCorner((ScreenRect *)&shop->region, 5, markX, markY, depth);
        }
        if (entry->unk02 & 2) {
            const TextureTableEntryIV *mark;
            if (!selected) {
                mark = layoutFindTableEntry(&shop->region, 0x9F);
            } else {
                mark = layoutFindTableEntry(&shop->region, 0xB2);
            }
            s32 markX = mark->x + x;
            s32 markY = mark->y + y;
            if (shop->slot == 8) {
                uiDrawCompositeSpriteAtRectCorner((ScreenRect *)&shop->region, 7, markX, markY, depth);
            } else {
                uiDrawCompositeSpriteAtRectCorner((ScreenRect *)&shop->region, 6, markX, markY, depth);
            }
        }
    }

    u32 font = !selected ? 2 : 3;
    const char *name = itemGetNameOrFallback(id, 0);
    u32 color;
    u32 nameSprite;
    if (!selected) {
        color = 0xFFFFFFFF;
        nameSprite = 0x9A;
        if (shop->slot != 8) {
            if (!shopAffordableCount(entry->id, shopGetEntryPrice((const ShopEntry *)entry))) {
                color = 0x9B9B9BFF;
            }
        } else if (shopItemIsKept(shop, id)) {
            color = 0x9B9B9BFF;
        }
    } else {
        nameSprite = 0xAD;
        if (touchSelectionGetSelected((Obj55ca08 *)shop->touchSelection) != 0) {
            color = 0xF5FF9FFF;
        } else {
            color = 0x9FE7FFFF;
        }
        if (shop->slot != 8) {
            if (!shopAffordableCount(entry->id, shopGetEntryPrice((const ShopEntry *)entry))) {
                color = 0x787878FF;
            }
        } else if (shopItemIsKept(shop, id)) {
            color = 0x787878FF;
        }
    }
    if (color != 0x787878FF && color != 0x9B9B9BFF && equipmentHasPositiveUpgrade(id)) {
        if (equipmentIsFullyUpgraded(id)) {
            color = 0xFBEB39FF;
        } else {
            color = 0x008400FF;
        }
    }
    const TextureTableEntryIV *nameOrigin = layoutFindTableEntry(&shop->region, nameSprite);
    s32 nameX = nameOrigin->x + x;
    s32 nameY = nameOrigin->y + y;
    drawTextAtSnappedRectangle(&shop->region, (f32)nameX, (f32)nameY, z, -1.0f, font, color, 1.0f, name);

    char text[32];
    if (row != 0) {
        s32 price;
        if (shop->slot == 8) {
            price = aocItemGetPrice((AocPricedItem *)entry);
        } else {
            price = shopGetEntryPrice((const ShopEntry *)entry);
        }
        const TextureTableEntryIV *priceOrigin;
        u32 priceColor;
        if (!selected) {
            priceOrigin = layoutFindTableEntry(&shop->region, 0xA7);
            priceColor = 0x9B9B9BFF;
        } else {
            priceOrigin = layoutFindTableEntry(&shop->region, 0xBA);
            priceColor = 0xFFFFFFFF;
        }
        s32 priceX = priceOrigin->x + x;
        s32 priceY = priceOrigin->y + y;
        sprintf(text, "%8d", price);
        if (shop->slot == 8 && shopItemIsKept(shop, id)) {
            sprintf(text, "     ---");
        }
        drawTextAtRelativePosition(&shop->region, 0, priceX, priceY, 0, 7, priceColor, depth, text);
    }

    s32 owned = FUN_001ba3d0(id);
    const TextureTableEntryIV *ownedOrigin;
    u32 ownedColor;
    if (!selected) {
        ownedOrigin = layoutFindTableEntry(&shop->region, 0xA9);
        ownedColor = 0x9FDDDDFF;
    } else {
        ownedOrigin = layoutFindTableEntry(&shop->region, 0xBC);
        ownedColor = 0x57D8FFFF;
    }
    s32 ownedX = ownedOrigin->x + x;
    s32 ownedY = ownedOrigin->y + y;
    sprintf(text, "%2d", owned);
    drawTextAtRelativePosition(&shop->region, 0, ownedX, ownedY, 0, 7, ownedColor, depth, text);
}
}
