#include "shard/W4_Match6_BibleScreen.h"
#include "bible/bibleMain.h"

extern "C" {
extern BibleGlobals DAT_0043d9c8;
s32 scrRunOpcodesStub(BibleScript *script);
s32 messageMainGetChoiceResult();
s32 flaggedValueHolderGetTotal(void *cursor);
void FUN_003a7fec(BibleScreen *screen, u32 id);
s32 FUN_00240d5c(void *cursor);
s32 FUN_0029e924(void *cursor);
void FUN_0022d434(BibleScreen *screen);
void panelSetScrollPosition(void *cursor, s32 row, s32 scroll);
s32 buttonHelpGetMode();
void buttonHelpSetPreset(s32 mode);
void FUN_002a0cc8(s32 enabled);
void FUN_0029cc44(s32 enabled);
void FUN_0029ee6c(s32 mode, u32 color);
void beginStatusPanelClose();
void FUN_00233240(void *panel, s32 enabled);
void FUN_00232848();
void uniteLoadPreviewRoomModel();

// Commit a confirmed compendium change, adjust selection and return or close the empty list.
void bibleApplyConfirmedSelection(BibleScreen *screen)
{
    struct ConfirmationEntry {
        s16 count;
        u16 unk02;
        u16 id;
        u8 data[0x1A];
    };
    struct ConfirmationListView {
        u8 prefix[0x5A4];
        s8 keepPanel;
        u8 unk5A5[3];
        ConfirmationEntry entries[1];
    };
    struct ConfirmationCursorView {
        u8 prefix[8];
        s32 count;
    };
    struct ConfirmationPanelView {
        u8 prefix[0xDC];
        u8 panel[1];
    };
    ConfirmationListView *list = reinterpret_cast<ConfirmationListView *>(screen);
    if (scrRunOpcodesStub(screen->script) != 2)
        return;
    if (messageMainGetChoiceResult() == 0) {
        ConfirmationEntry *entries = list->entries;
        s32 selected = flaggedValueHolderGetTotal(screen->cursor);
        FUN_003a7fec(screen, entries[selected].id);
        DAT_0043d9c8.mode = -1;
        s32 scroll = FUN_00240d5c(screen->cursor);
        s32 row = FUN_0029e924(screen->cursor);
        FUN_0022d434(screen);
        if (row > 0)
            --row;
        else if (scroll != 0 && reinterpret_cast<ConfirmationCursorView *>(screen->cursor)->count <= scroll + row)
            --scroll;
        panelSetScrollPosition(screen->cursor, row, scroll);
    }
    buttonHelpSetPreset(buttonHelpGetMode());
    FUN_002a0cc8(0);
    if (list->entries[0].count <= 0) {
        if (list->keepPanel == 0)
            FUN_0029cc44(1);
        FUN_0029ee6c(0, 0x323232FF);
        beginStatusPanelClose();
        FUN_00233240(reinterpret_cast<ConfirmationPanelView *>(screen)->panel, 1);
        FUN_002a0cc8(1);
        screen->state = 11;
        screen->stateArg = 0;
        FUN_00232848();
        uniteLoadPreviewRoomModel();
    } else {
        screen->state = 2;
        screen->stateArg = 0;
    }
}
}
