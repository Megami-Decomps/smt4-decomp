#include "status/CompendiumBrowse.h"
#include "bible/BibleDevilInput.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "status/StatusCamera.h"
#include "bible/bibleDevil.h"
#include "addon/LookupRecord.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "code/Code0023_Smt4.h"
#include "gamedata/GameDataAccess_VariantF.h"
#include "shard/Shard004A.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {
extern BibleDevilCallbackContext g_bibleDevilCallbackContext;

s8 uiSubStateGetReady(const void *subState);
s32 compendiumComputeSummonCost(u16 devil, s32 source, s32 a, s32 specialMode, s32 b);
void messageTargetSetValue(u32 value, s32 flag);
s32 inputIsQuestMenuPressed(void);
s32 inputIsQuestCancelPressed(void);
s32 inputConfirmPressed(void);
s32 gameGetNavigationState(void);
s32 gameGetFlagByte12e8(void);
void uiSceneApplySpritePreset(void *status, s32 mode);
void ifTouchRegionClearAll(u32 region);
s32 demonPurchaseValidate(BibleDevilWork *view, u32 devil);
void scrScriptProcessStartEntry(u32 script, s32 entry);
void buttonHelpSetPreset(s32 preset);
void messageMainSetTargetFlags(s32 flags);
void FUN_002328b4(void);
void sortMenuCreate(s32 a, s32 b);
void useCounterAppendValue(u8 value);
void useCounterStart(void);
void buttonHelpSetText(s32 a, u32 color);
void beginStatusPanelClose(void);
void FUN_00232848(void);
void uniteLoadPreviewRoomModel(void);

/* Refreshes the compendium's selected devil and handles summoning, sorting, or leaving the list. */
void bibleDevilHandleSelectionInput(BibleDevilWork *view)
{
    s32 confirm = 0;
    s32 cancel = 0;
    s16 devil = compendiumSelectedId(view);
    s32 price = compendiumComputeSummonCost(devil, (u8)view->column, 0, view->sortMode >= 100, 0);
    messageTargetSetValue(-price, 0);
    s32 menuPressed = inputIsQuestMenuPressed();
    BibleDevilTouchSelection *row = &view->touchSelection;
    if ((s16)view->entries[0].present > 0) {
        confirm = inputConfirmPressed();
        cancel = inputIsQuestCancelPressed();
        if (confirm == 0)
            confirm = uiSubStateGetReady(row);
    }
    if (gameGetNavigationState() != 0) {
        view->step = 9;
        view->phase = 0;
        if (gameGetFlagByte12e8() == 1) {
            view->exitPreset = 1;
        } else {
            view->exitPreset = 5;
        }
        uiSceneApplySpritePreset(&view->display.animation, view->exitPreset);
        if (view->mode == 0)
            messageDismissNumericBanner(1);
        ifTouchRegionClearAll(view->touchSelection.regions);
        releaseEntriesA((Obj *)row);
        return;
    }
    if (confirm != 0) {
        s16 shown = compendiumSelectedId(view);
        FUN_0029ede8(0x18, compendiumComputeSummonCost(shown, (u8)view->column, 0, view->sortMode >= 100, 0), 0xFFFFFFFF, 0);
        if (demonPurchaseValidate(view, (u16)shown) != 0) {
            u8 text[0x84];
            libc_strcpy((unsigned int *)text, (unsigned int *)dataTable01FindByIdWithAoc((u16)shown));
            textEncodeFontSlot(8, text);
            libc_strcpy((unsigned int *)text, (unsigned int *)demonGetRaceLabel((u16)shown, 1));
            textEncodeFontSlot(0x10, text);
            scrScriptProcessStartEntry(view->script, 0);
            view->step = 3;
            view->phase = 0;
        } else {
            s32 entry = 0;
            switch (view->purchaseState) {
            case 1:
                entry = 2;
                break;
            case 2:
                entry = 1;
                break;
            case 3:
                entry = 3;
                break;
            case 4:
                entry = 4;
                break;
            case 5:
                entry = 5;
                break;
            }
            scrScriptProcessStartEntry(view->script, entry);
            view->step = 5;
            view->phase = 0;
            buttonHelpSetPreset(0x9E);
        }
        messageMainSetTargetFlags(1);
        gameGlobalsSetSubScreenActive(1);
        FUN_002328b4();
        return;
    }
    if (menuPressed == 0) {
        if (cancel == 0)
            return;
        g_bibleDevilCallbackContext.selected = -1;
        sortMenuCreate(0xF, 0);
        useCounterAppendValue(1);
        useCounterAppendValue(2);
        useCounterAppendValue(7);
        useCounterAppendValue(3);
        useCounterStart();
        gameGlobalsSetSubScreenActive(1);
        view->step = 6;
        view->phase = 0;
        buttonHelpSetText(0, 0x323232FF);
        FUN_002328b4();
        return;
    }
    if (view->mode == 0)
        messageDismissNumericBanner(1);
    buttonHelpSetText(0, 0x323232FF);
    beginStatusPanelClose();
    uiSceneApplySpritePreset(&view->display.animation, 1);
    gameGlobalsSetSubScreenActive(1);
    view->step = 11;
    view->phase = 0;
    FUN_00232848();
    uniteLoadPreviewRoomModel();
}

} /* extern "C" */
