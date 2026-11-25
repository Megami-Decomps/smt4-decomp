#include "status/CompendiumBrowse.h"
#include "bible/BibleDevilInput.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "status/StatusCamera.h"
#include "addon/LookupRecord.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/GameDataAccess_VariantF.h"
#include "gamedata/GameDataAccess.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "code/Code0023_Smt4.h"
#include "shard/Shard004A.h"

extern "C" {

extern BibleDevilCallbackContext g_bibleDevilCallbackContext;

s32 inputIsQuestMenuPressed(void);
s8 uiSubStateGetReady(const void *subState);
s32 inputConfirmPressed(void);
s32 inputIsQuestConfirmPressed(void);
s32 inputIsQuestCancelPressed(void);
s32 gameGetNavigationState(void);
s32 gameGetFlagByte12e8(void);
void uiSceneApplySpritePreset(void *panel, s32 value);
void ifTouchRegionClearAll(u32 regions);
void scrScriptProcessStartEntry(u32 script, s32 entry);
void FUN_002328b4(void);
void buttonHelpSetText(s32 a, u32 color);
void beginStatusPanelClose(void);
void FUN_00232848(void);
void uniteLoadPreviewRoomModel(void);
void buttonHelpSetPreset(u32 preset);
void FUN_0029da34(s32 a, s32 b, u16 id, const void *record);

/* Handles the devil list's preview input, including exiting, opening the entry script, and switching previews. */
void bibleDevilHandleListInput(BibleDevilWork *work)
{
    enum { LIST_SCRIPT_SHOW_ENTRY = 6, LIST_SCRIPT_CANCEL = 7, LIST_PREVIEW_PARTY = 1 };
    s32 select = 0;
    s32 confirm = 0;
    s32 cancel = 0;
    s32 menu = inputIsQuestMenuPressed();

    if ((s16)work->entries[0].present > 0) {
        select = inputConfirmPressed();
        confirm = inputIsQuestConfirmPressed();
        cancel = inputIsQuestCancelPressed();
        if (select == 0) {
            select = uiSubStateGetReady(&work->touchSelection);
        }
    }
    if (gameGetNavigationState() != 0) {
        work->step = 9;
        work->phase = 0;
        if (gameGetFlagByte12e8() == 1) {
            work->exitPreset = 1;
        } else {
            work->exitPreset = 5;
        }
        uiSceneApplySpritePreset(&work->display.animation, work->exitPreset);
        if (work->mode == 0) {
            messageDismissNumericBanner(1);
        }
        ifTouchRegionClearAll(work->touchSelection.regions);
        releaseEntriesA((Obj *)&work->touchSelection);
        return;
    }
    if (select != 0) {
        u16 id = compendiumSelectedId(work);
        u8 text[0x84];
        libc_strcpy((unsigned int *)text, (unsigned int *)dataTable01FindByIdWithAoc(id));
        textEncodeFontSlot(8, text);
        libc_strcpy((unsigned int *)text, (unsigned int *)demonGetRaceLabel(id, 1));
        textEncodeFontSlot(0x10, text);
        scrScriptProcessStartEntry(work->script, LIST_SCRIPT_SHOW_ENTRY);
        gameGlobalsSetSubScreenActive(1);
        work->step = 7;
        work->phase = 0;
        FUN_002328b4();
    } else {
        if (menu != 0) {
            if (work->mode == 0) {
                messageDismissNumericBanner(1);
            }
            buttonHelpSetText(0, 0x323232FF);
            beginStatusPanelClose();
            uiSceneApplySpritePreset(&work->display.animation, 1);
            gameGlobalsSetSubScreenActive(1);
            work->step = 11;
            work->phase = 0;
            FUN_00232848();
            uniteLoadPreviewRoomModel();
            return;
        }
        if (confirm != 0) {
            g_bibleDevilCallbackContext.selected = -1;
            work->column++;
            if (work->column > LIST_PREVIEW_PARTY) {
                work->column = 0;
            }
            FUN_002328b4();
            work->viewing = 1;
            buttonHelpSetPreset(work->column == LIST_PREVIEW_PARTY ? 0x4C : 0x4D);
            s16 id = compendiumSelectedId(work);

            if (work->column == LIST_PREVIEW_PARTY) {
                FUN_0029da34(0, 1, id, (const void *)partyMemberFindById((u16)id));
            } else {
                StatBlock record;
                unitInitializeFromSavedRecord((u16)id, &record);
                FUN_0029da34(0, 1, id, &record);
            }
            return;
        }
        if (cancel != 0) {
            g_bibleDevilCallbackContext.selected = -1;
            gameGlobalsSetSubScreenActive(1);
            work->step = 8;
            work->phase = 0;
            scrScriptProcessStartEntry(work->script, LIST_SCRIPT_CANCEL);
            FUN_002328b4();
        }
    }
}

} /* extern "C" */
