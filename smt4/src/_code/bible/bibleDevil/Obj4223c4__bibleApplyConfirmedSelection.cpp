#include "shard/W4_Match6_BibleScreen.h"
#include "classes/Obj4223c4.h"
#include "bible/bibleMain.h"
#include "status/StatusCamera.h"
#include "script/scrScriptProcess.h"

extern "C" {
extern BibleGlobals g_bibleDevilCallbackContext;
s32 messageMainGetChoiceResult();
s32 flaggedValueHolderGetTotal(void *cursor);
void FUN_003a7fec(BibleScreen *screen, u32 id);
s32 flaggedEntryGetValueByState(void *cursor);
s32 FUN_0029e924(void *cursor);
void bibleDevilListRefresh(BibleScreen *screen);
void panelSetScrollPosition(void *cursor, s32 row, s32 scroll);
s32 buttonHelpGetMode();
void buttonHelpSetPreset(s32 mode);
void messageDismissNumericBanner(s32 enabled);
void buttonHelpSetText(s32 mode, u32 color);
void beginStatusPanelClose();
void uiSceneApplySpritePreset(void *panel, s32 enabled);
void FUN_00232848();
void uniteLoadPreviewRoomModel();

// Commit a confirmed compendium change, adjust selection and return or close the empty list.
}

void Obj4223c4::bibleApplyConfirmedSelection()
{
    BibleScreen * screen = reinterpret_cast<BibleScreen *>(this);
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
        g_bibleDevilCallbackContext.mode = -1;
        s32 scroll = flaggedEntryGetValueByState(screen->cursor);
        s32 row = FUN_0029e924(screen->cursor);
        bibleDevilListRefresh(screen);
        if (row > 0)
            --row;
        else if (scroll != 0 && reinterpret_cast<ConfirmationCursorView *>(screen->cursor)->count <= scroll + row)
            --scroll;
        panelSetScrollPosition(screen->cursor, row, scroll);
    }
    buttonHelpSetPreset(buttonHelpGetMode());
    gameGlobalsSetSubScreenActive(0);
    if (list->entries[0].count <= 0) {
        if (list->keepPanel == 0)
            messageDismissNumericBanner(1);
        buttonHelpSetText(0, 0x323232FF);
        beginStatusPanelClose();
        uiSceneApplySpritePreset(reinterpret_cast<ConfirmationPanelView *>(screen)->panel, 1);
        gameGlobalsSetSubScreenActive(1);
        screen->state = 11;
        screen->stateArg = 0;
        FUN_00232848();
        uniteLoadPreviewRoomModel();
    } else {
        screen->state = 2;
        screen->stateArg = 0;
    }
}
