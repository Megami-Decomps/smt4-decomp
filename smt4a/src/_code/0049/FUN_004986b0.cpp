/* NON_MATCHING: 50 lines; EquipmentMenuState matches all offsets and row count (185 vs 185), remaining: r5/r6 register swap (keeping 2-param signature to avoid retail's uninitialized frameStyle UB in default). */
#include "common.h"
#include "shard/Shard0049.h"
#include "gamedata/AocItemRef.h"
#include "code/Code002a.h"
#include "gamedata/GamePlayerData.h"

class PanelWidget {
public:
    virtual void vfn00() = 0;
    virtual void vfn04() = 0;
    virtual void vfn08() = 0;
    virtual void vfn0C() = 0;
    virtual void refresh(u32 value) = 0;    /* 0x10 */
};

extern "C" {
s32 FUN_0031d174(void *list);
void uiDrawCompositeSpriteAtRectCorner(void *rect, u32 style, s32 a, s32 b, u32 context);
void FUN_0049368c(void *rect, s32 sprite, s32 a, s32 b, u32 context, s32 c);
void FUN_00494574(void *panel, u32 tab);
void FUN_00495b04(void *panel, s32 row, s32 selected, const void *value);
void size40Set(void *object, s32 first, s32 second);
s32 flaggedValueHolderGetTotal(void *list);
s32 rangeGetMinimumLimit(void *list);
}

/* The item equipped in the active equipment page's slot (the same switch as smt4 shopDrawEquippedItemPage and
 * smt4a FUN_0022fd80). */
static __inline u16 getEquippedItem(s32 tab)
{
    u16 value = 0;
    switch (tab) {
    case 0: value = gameGetPlayerData()->equipment[0]; break;
    case 1: value = gameGetPlayerData()->equipment[1]; break;
    case 2: value = gameGetPlayerData()->equipment[2]; break;
    case 3: value = gameGetPlayerData()->equipment[3]; break;
    case 4: value = gameGetPlayerData()->equipment[4]; break;
    case 5: value = gameGetPlayerData()->equipment[5]; break;
    case 6: value = gameGetPlayerData()->equipment[6]; break;
    }
    return value;
}

/* Redraws the equipment menu header, equipped item row, visible list slots, and scroll indicator. */
extern "C" void FUN_004986b0(EquipmentMenuState *panel, u32 frameStyle)
{
    u32 context = panel->detail.color;
    switch (panel->page) {
    case 0:
        frameStyle = 0;
        break;
    case 1:
    case 2:
        frameStyle = 1;
        break;
    case 3:
    case 4:
    case 5:
        frameStyle = 2;
        break;
    case 6:
        frameStyle = 0xB;
        break;
    case 7:
        frameStyle = 3;
        break;
    case 8:
        frameStyle = 4;
        break;
    }
    uiDrawCompositeSpriteAtRectCorner(&panel->detail.region, frameStyle, 0, 0, context);
    FUN_0049368c(&panel->detail.region, panel->page + 0x5A, 0, 0, context, 1);
    FUN_00494574(panel, panel->page);
    AocItemRef headerValue;
    headerValue.id = 0;
    headerValue.unk02Bit0 = 0;
    headerValue.scaled = 0;
    headerValue.percent = 0;
    headerValue.id = getEquippedItem(panel->page);
    FUN_00495b04(panel, 0, 0, &headerValue);
    s32 mode = panel->transition.state;
    bool hasSlot = mode == 7 || mode == 0xB || mode == 8 || mode == 0xC ||
        mode == 9 || mode == 0xD || mode == 0x11 || mode == 0x12;
    EquipmentMenuCursor *list = &panel->cursors[panel->page];
    EquipmentMenuItem *values = panel->pages[panel->page].items;
    s32 top = resourceDispatchTaggedOperation(list);
    s32 rows = rangeGetMinimumLimit(list);
    for (s32 row = 0; row < rows; row++) {
        if (!hasSlot || FUN_0031d174(list) != row)
            FUN_00495b04(panel, row + 2, 0, &values[top + row]);
    }
    if (hasSlot && list->range.count > 0) {
        FUN_00495b04(panel, FUN_0031d174(list) + 2, 1, &values[flaggedValueHolderGetTotal(list)]);
    }
    size40Set(panel->scroll.indicator, resourceDispatchTaggedOperation(list), FUN_0031d174(list));
    ((PanelWidget *)panel->scroll.indicator)->refresh(context);
}
