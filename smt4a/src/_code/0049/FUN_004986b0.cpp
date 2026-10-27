/* NON_MATCHING: register allocation differs (retail keeps panel in r6 with panel+0xB40 hoisted in r4 across the tab switches and rows loop); logic equivalent. */
#include "common.h"
#include "gamedata/AocItemRef.h"
#include "code/Code002a.h"

class PanelWidget {
public:
    virtual void vfn00() = 0;
    virtual void vfn04() = 0;
    virtual void vfn08() = 0;
    virtual void vfn0C() = 0;
    virtual void refresh(u32 value) = 0;    /* 0x10 */
};

/* The list panel (accessed fields). */
struct ListPanel {
    u8 unk000[4];
    s32 mode;                   // 0x004
};

extern "C" {
u16 *gameGetPlayerData(void);
s32 FUN_0031d174(void *list);
void FUN_0049339c(void *rect, u32 style, s32 a, s32 b, u32 context);
void FUN_0049368c(void *rect, s32 sprite, s32 a, s32 b, u32 context, s32 c);
void FUN_00494574(void *panel, u32 tab);
void FUN_00495b04(void *panel, s32 row, s32 selected, const void *value);
void size40Set(void *object, s32 first, s32 second);
s32 flaggedValueHolderGetTotal(void *list);
s32 rangeGetMinimumLimit(void *list);
}

#define PANEL_AT(panel, offset) (reinterpret_cast<u8 *>(panel) + (offset))
#define PANEL_WORD(panel, offset) (*reinterpret_cast<s32 *>(PANEL_AT(panel, offset)))

/* Redraw the tabbed list panel: its frame, the tab's header value and every row of the current page. */
extern "C" void FUN_004986b0(ListPanel *panel, u32 frameStyle)
{
    u32 context = PANEL_WORD(panel, 0x3A0);
    s32 tab = PANEL_WORD(panel, 0xB40);
    switch (tab) {
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
    }
    FUN_0049339c(PANEL_AT(panel, 0x3A4), frameStyle, 0, 0, context);
    FUN_0049368c(PANEL_AT(panel, 0x3A4), PANEL_WORD(panel, 0xB40) + 0x5A, 0, 0, context, 1);
    FUN_00494574(panel, PANEL_WORD(panel, 0xB40));
    AocItemRef headerValue;
    headerValue.id = 0;
    headerValue.unk02Bit0 = 0;
    headerValue.scaled = 0;
    headerValue.percent = 0;
    u16 value = 0;
    switch (PANEL_WORD(panel, 0xB40)) {
    case 0:
        value = gameGetPlayerData()[0];
        break;
    case 1:
        value = gameGetPlayerData()[1];
        break;
    case 2:
        value = gameGetPlayerData()[2];
        break;
    case 3:
        value = gameGetPlayerData()[3];
        break;
    case 4:
        value = gameGetPlayerData()[4];
        break;
    case 5:
        value = gameGetPlayerData()[5];
        break;
    case 6:
        value = gameGetPlayerData()[6];
    }
    headerValue.id = value;
    FUN_00495b04(panel, 0, 0, &headerValue);
    s32 mode = panel->mode;
    bool hasSlot = mode == 7 || mode == 0xB || mode == 8 || mode == 0xC || mode == 9 || mode == 0xD ||
                   mode == 0x11 || mode == 0x12;
    u8 *tabState = PANEL_AT(panel, 0) + PANEL_WORD(panel, 0xB40) * 0x74;
    u8 *list = tabState + 0xB60;
    u8 *values = PANEL_AT(panel, 0) + PANEL_WORD(panel, 0xB40) * 0x1002 + 0xF74;
    s32 top = FUN_002a482c(list);
    s32 rows = rangeGetMinimumLimit(list);
    for (s32 row = 0; row < rows; row++) {
        if (!hasSlot || FUN_0031d174(list) != row)
            FUN_00495b04(panel, row + 2, 0, values + (top + row) * 4);
    }
    s32 pending = 0;
    if (hasSlot)
        pending = *reinterpret_cast<s32 *>(tabState + 0xB68);
    if (hasSlot && pending != 0 && pending >= 0) {
        FUN_00495b04(panel, FUN_0031d174(list) + 2, 1, values + flaggedValueHolderGetTotal(list) * 4);
    }
    s32 last = FUN_0031d174(list);
    s32 first = FUN_002a482c(list);
    PanelWidget *widget = *reinterpret_cast<PanelWidget **>(PANEL_AT(panel, 0xB3C));
    size40Set(widget, first, last);
    widget->refresh(context);
}
