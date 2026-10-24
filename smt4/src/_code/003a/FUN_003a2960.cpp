/* NON_MATCHING: register allocation differs (retail keeps panel in r6 with panel+0x860 hoisted in r4 across the tab switches and rows loop); logic equivalent. */
#include "common.h"

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
s32 FUN_0029e924(void *list);
s32 FUN_00240d5c(void *list);
void uiRectDrawAtBottomRight(void *rect, u32 style, s32 a, s32 b, u32 context);
void FUN_00231bcc(void *rect, s32 sprite, s32 a, s32 b, u32 context, s32 c);
void FUN_003a07a0(void *panel, u32 tab);
void FUN_0022ea70(void *panel, s32 row, s32 selected, const void *value);
void FUN_002332e8(void *object, s32 first, s32 second);
s32 flaggedValueHolderGetTotal(void *list);
s32 rangeLimitMin(void *list);
}

#define PANEL_AT(panel, offset) (reinterpret_cast<u8 *>(panel) + (offset))
#define PANEL_WORD(panel, offset) (*reinterpret_cast<s32 *>(PANEL_AT(panel, offset)))

/* Redraw the tabbed list panel: its frame, the tab's header value and every row of the current page. */
extern "C" void FUN_003a2960(ListPanel *panel, u32 frameStyle)
{
    u32 context = PANEL_WORD(panel, 0x37C);
    s32 tab = PANEL_WORD(panel, 0x860);
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
    uiRectDrawAtBottomRight(PANEL_AT(panel, 0x380), frameStyle, 0, 0, context);
    FUN_00231bcc(PANEL_AT(panel, 0x380), PANEL_WORD(panel, 0x860) + 0x5A, 0, 0, context, 1);
    FUN_003a07a0(panel, PANEL_WORD(panel, 0x860));
    u16 headerValue[2];
    u16 value = 0;
    switch (PANEL_WORD(panel, 0x860)) {
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
    headerValue[0] = value;
    FUN_0022ea70(panel, 0, 0, headerValue);
    s32 mode = panel->mode;
    bool hasSlot = mode == 5 || mode == 9 || mode == 6 || mode == 0xA || mode == 7 || mode == 0xB ||
                   mode == 0xF || mode == 0x10;
    u8 *tabState = PANEL_AT(panel, 0) + PANEL_WORD(panel, 0x860) * 0x74;
    u8 *list = tabState + 0x880;
    u8 *values = PANEL_AT(panel, 0) + PANEL_WORD(panel, 0x860) * 0x1002 + 0xC94;
    s32 top = FUN_0029e924(list);
    s32 rows = rangeLimitMin(list);
    for (s32 row = 0; row < rows; row++) {
        if (!hasSlot || FUN_00240d5c(list) != row)
            FUN_0022ea70(panel, row + 2, 0, values + (top + row) * 4);
    }
    s32 pending = 0;
    if (hasSlot)
        pending = *reinterpret_cast<s32 *>(tabState + 0x888);
    if (hasSlot && pending != 0 && pending >= 0) {
        s32 total = flaggedValueHolderGetTotal(list);
        FUN_0022ea70(panel, FUN_00240d5c(list) + 2, 1, values + total * 4);
    }
    s32 last = FUN_00240d5c(list);
    s32 first = FUN_0029e924(list);
    PanelWidget *widget = *reinterpret_cast<PanelWidget **>(PANEL_AT(panel, 0x85C));
    FUN_002332e8(widget, first, last);
    widget->refresh(context);
}
