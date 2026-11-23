/* NON_MATCHING: only 2 instructions differ at header/category load (retail uses writeback ldr r9, [r0, #928]!; ldr r2, [r0, #1952], same as sibling shopDrawEquipmentList). */
#include "common.h"
#include <stddef.h>
#include "code/Code002a.h"
#include "code/Code0031_Smt4a.h"

/* The panel object the shop screen owns; slot 4 refreshes it. */
class ShopPanel {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void unk08();
    virtual void unk0c();
    virtual void refresh(u32 color);
};

/* A category's list: the scroll/limit state read through the shop list helpers (0x74 bytes). */
struct ShopCategoryList {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 limit;
    /* 0x0C */ u8 unk0C[0x68];
};

/* One entry of a category's slot table. */
struct ShopSlot {
    u16 id;
    u16 value;
};

/* The shop screen; only the fields this refresh reads are named. */
struct ShopScreen {
    /* 0x0000 */ u8 unk0000[4];
    /* 0x0004 */ s32 mode;
    /* 0x0008 */ u8 unk0008[0x398];
    /* 0x03A0 */ struct Detail {
        /* 0x000 */ u32 color;
        /* 0x004 */ u8 header[0x798];
        /* 0x79C */ ShopPanel *panel;
        /* 0x7A0 */ s32 category;
        /* 0x7A4 */ s32 tab;
    } detail;
    /* 0x0B48 */ u8 unk0B48[0x18];
    /* 0x0B60 */ ShopCategoryList lists[9];
    /* 0x0F74 */ u8 slotTables[9][0x1002];
};
typedef char ShopScreenOffsets[
    offsetof(ShopScreen, detail.header) == 0x3A4 && offsetof(ShopScreen, detail.panel) == 0xB3C &&
    offsetof(ShopScreen, lists) == 0xB60 && sizeof(ShopCategoryList) == 0x74 ? 1 : -1];

struct ShopIconGroup {
    u32 ids[4];
};
struct ShopMainIconTables {
    u8 unk00[0xF8];
    ShopIconGroup firstIcons;
    ShopIconGroup secondIcons;
};

/* The two sprite choices each tab makes (indices into the icon table). */
struct ShopTabIcons {
    s32 first;
    s32 second;
};

extern "C" {
extern const ShopMainIconTables g_equipMenuStateHandlerInit;
extern ShopTabIcons g_shopItemTabNeighbors[];
void uiDrawCompositeSpriteAtRectCorner(void *header, u32 id, s32 dx, s32 dy, u32 flags);
void FUN_0049368c(void *header, u32 id, s32 dx, s32 dy, u32 color, u32 flags);
void FUN_00494d68(ShopScreen *screen, s32 index, s32 flag, ShopSlot *slot);
void size40Set(ShopPanel *panel, s32 first, s32 second);
s32 rangeGetMinimumLimit(ShopCategoryList *list);
s32 flaggedValueHolderGetTotal(ShopCategoryList *list);

/* Redraws the shop screen's header icons and the visible slots of the current category. */
void shopScreenRedrawHeaderAndSlots(ShopScreen *screen)
{
    u32 sprite;
    ShopScreen::Detail *detail = &screen->detail;
    u32 color = detail->color;
    switch (detail->category) {
    case 0:
        sprite = 0;
        break;
    case 1:
    case 2:
        sprite = 1;
        break;
    case 3:
    case 4:
    case 5:
        sprite = 2;
        break;
    case 6:
        sprite = 11;
        break;
    case 7:
        sprite = 3;
        break;
    case 8:
        sprite = 4;
        break;
    }
    uiDrawCompositeSpriteAtRectCorner(screen->detail.header, sprite, 0, 0, color);
    FUN_0049368c(screen->detail.header, screen->detail.tab + 0x61, 0, 0, color, 1);
    FUN_0049368c(screen->detail.header, 0x65, 0, 0, color, 1);
    FUN_0049368c(screen->detail.header, 0x66, 0, 0, color, 1);
    s32 firstIndex = g_shopItemTabNeighbors[screen->detail.tab].first;
    s32 secondIndex = g_shopItemTabNeighbors[screen->detail.tab].second;
    ShopIconGroup firstIcons = g_equipMenuStateHandlerInit.firstIcons;
    ShopIconGroup secondIcons = g_equipMenuStateHandlerInit.secondIcons;
    FUN_0049368c(screen->detail.header, firstIcons.ids[firstIndex], 0, 0, color, 1);
    FUN_0049368c(screen->detail.header, secondIcons.ids[secondIndex], 0, 0, color, 1);

    s32 compact = ((screen->mode) == 7 || (screen->mode) == 11) || ((screen->mode) == 8 || (screen->mode) == 12) || ((screen->mode) == 9 || (screen->mode) == 13) ||
                  ((screen->mode) == 17 || (screen->mode) == 18);
    ShopCategoryList *list = &screen->lists[screen->detail.category];
    ShopSlot *slots = reinterpret_cast<ShopSlot *>(screen->slotTables[screen->detail.category]);
    s32 first = resourceDispatchTaggedOperation(list);
    s32 count = rangeGetMinimumLimit(list);
    for (s32 i = 0; i < count; ++i) {
        if (!compact || FUN_0031d174(list) != i)
            FUN_00494d68(screen, i + 1, 0, &slots[first + i]);
    }
    if (compact && list->limit > 0)
        FUN_00494d68(screen, FUN_0031d174(list) + 1, 1, &slots[flaggedValueHolderGetTotal(list)]);
    size40Set(screen->detail.panel, resourceDispatchTaggedOperation(list), FUN_0031d174(list));
    screen->detail.panel->refresh(color);
}

} /* extern "C" */
