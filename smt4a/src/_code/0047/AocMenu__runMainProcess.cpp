/* NON_MATCHING: every branch and call matches; retail keeps the archive result at sp+8, the text pointer at
 * sp+16 and the previous slot at sp+24 (built: sp+16, sp+12, sp+4), reads the failed result before storing the
 * error kind, and so schedules the first description call's stack arguments differently (22 rows). */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "classes/Obj422214Owner.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "shard/W6_W6Match2_StatusBytes.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "AsdSDK/AsdMemUtil.h"
#include "nn/Result.h"
#include "shard/Shard004A.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "ui/UiControl.h"
#include "code/Code004d.h"
#include "shop/ShopItemDescription.h"
#include "gamedata/GameDataAccess.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

nn::Result legacyResourceIdRemap(const WindowStatusResult *result); // declcheck: local (the headers return a plain word, which changes this caller's code)
void buttonHelpSetEnabled(u32 value);
u32 buttonHelpIsActionActive(u32 action);
WindowStatusResult FUN_00426fe4(void *file, const void *archive);
void recordClearWideHandle(void *file);
s32 FUN_0031d174(FlaggedValueHolder *holder); // declcheck: local (the header's declaration drops the row it returns)
void listCursorSetPosition(FlaggedValueHolder *holder, s32 position);
void sub10OwnerStart(FlaggedValueHolder *holder);
void selectOwnerReset(AocTouchRows *rows);
s32 selectOwnerGetSelected(AocTouchRows *rows);
s8 selectOwnerGetActive(const AocTouchRows *rows);
void sendEvent100020D(void);
s32 ifTouchIsInitialSelection(s32 region);
bool _ZN13ObjBase3c2ef07vfunc0cEv(Obj4221a4 *panel, FlaggedValueHolder *holder);
u8 countOwnerIsValidIndex(const AocMain *main, u32 index);
u32 statusDecodeActivityState(const StatusBytes *status);
RelativeDirectory *FUN_00473910(AocMain *main, s32 index); // declcheck: local (the header returns the directory as a plain word)
void FUN_0036bea0(AsdText *text, u32 font, s32 mode, s32 x, s32 y, const char *message);
void aocMenuSetButtonHelp(AocMenu *menu, u32 selection, s32 mode);
s32 bgmGetStateById(u32 id);
void bgmResumeOrRequestTrack(u32 id);
u32 tableGroupFindEntryIndex(void *table, const char *name);
void scrScriptProcessStartEntry(ScriptProcess *process, u32 entry);

}

enum {
    AOC_MENU_BGM = 0x1000041,
    AOC_MENU_DECIDE_SOUND = 0x100020e,
    AOC_MENU_LOADING = 0x10000,
    AOC_RESULT_ERROR = 100
};

/* The list the cursor moves in. */
static __inline FlaggedValueHolder *contentList(AocMenu *menu)
{
    return reinterpret_cast<FlaggedValueHolder *>(&menu->selection);
}

/* The slot the cursor is on. */
static __inline u32 selectedSlot(AocMenu *menu)
{
    return flaggedValueHolderGetTotal(contentList(menu));
}

/* The record of the content the cursor is on. */
static __inline Obj422214Owner *selectedRecord(AocMain *main, AocMenu *menu)
{
    return &main->records[selectedSlot(menu)];
}

/* Stops the step with the error of a failed archive operation; false when it succeeded. */
static __inline bool failOnArchiveError(AocMenu *menu, WindowStatusResult result)
{
    if (nnResultIsFailure(legacyResourceIdRemap(&result))) {
        menu->substep = 9999;
        menu->request.kind = AOC_RESULT_ERROR;
        menu->request.result = result;
        return true;
    }
    return false;
}

/* Writes the description of the content under the cursor: its own text, or the stock line of a
 * content that is entered as a code. */
static __inline void showDescription(AocMenu *menu, AsdText **text)
{
    s32 slot = selectedSlot(menu);
    AocMain *main = g_aocMain;
    /* No record when the cursor is past the last content. */
    Obj422214Owner *record = countOwnerIsValidIndex(main, slot) ? &main->records[slot] : NULL;

    if (record != NULL) {
        if (record->flags[7] != 0) {
            asdTextDrawDirectoryEntry(*text, 3, -1, 0, 3, FUN_00473910(g_aocMain, -1), 12);
        } else {
            FUN_0036bea0(*text, 3, -1, 0, 3, reinterpret_cast<const char *>(record->contents));
        }
    }
}

/* Moves the cursor to the row the stylus pressed, and notes a release on the row it is on. */
static __inline void touchRowsUpdate(AocTouchRows *rows, FlaggedValueHolder *holder)
{
    if (rows->firstRegion != -1 && rows->secondRegion != -1 && rows->regionCount != -1) {
        selectOwnerReset(rows);
        s32 current = FUN_0031d174(holder);
        for (s32 i = 0; i < rows->regionCount; i++) {
            bool moved = false;
            if (ifTouchIsInitialSelection(rows->regions[i])) {
                if (i == current) {
                    rows->movedByPress = 0;
                } else {
                    rows->movedByPress = 1;
                    moved = true;
                }
            } else {
                s32 mode = recordGetModeForId(rows->regions[i]);
                if ((mode == 1 || mode == 2) && i != current) {
                    moved = true;
                }
                if (i == current && mode == 6 && rows->movedByPress == 0) {
                    rows->released = 1;
                    rows->selectedIndex = i;
                    break;
                }
            }
            if (moved) {
                listCursorSetPosition(holder, i);
                if (rows->soundEnabled != 0 && i != current) {
                    sendEvent100020D();
                }
                break;
            }
        }
    }
}

/* Moves the menu to another step and drops the window of the one it leaves. */
static __inline void changeStep(AocMenu *menu, u32 step)
{
    menu->step = step;
    menu->substep = 0;
    if (menu->window != NULL) {
        delete menu->window;
        menu->window = NULL;
    }
}

/* Starts the script that asks the player to confirm an action on the content. */
static __inline void startQuestion(AocMenu *menu, u32 substep, const char *entry)
{
    menu->substep = substep;
    scrScriptProcessStartEntry(menu->script, tableGroupFindEntryIndex(menu->tableFile, entry));
    eventQueueAddUniqueIfValid(AOC_MENU_DECIDE_SOUND);
    menu->panel.ready = 0;
}

/* The content list: substep 0 reopens the content archive and shows the list, 1 follows the cursor
 * and the buttons, 2-6 ask for confirmation of the chosen action and move to its step. */
void AocMenu::runMainProcess()
{
    AsdText **text = &descriptionText;
    AocMain *main = g_aocMain;

    switch (substep) {
    case 0: {
        buttonHelpSetEnabled(0);
        flags &= ~AOC_MENU_LOADING;
        if (failOnArchiveError(this, FUN_00426fe4(main->contentFile, main->contentArchive))) {
            return;
        }
        recordClearWideHandle(main->contentFile);
        substep = 1;
        animated.slowTick = 0;
        animated.fastTick = 0;
        showDescription(this, text);
        panel.ready = 1;
        if (bgmGetStateById(AOC_MENU_BGM) != 1) {
            bgmResumeOrRequestTrack(AOC_MENU_BGM);
        }
        return;
    }
    case 1: {
        s32 previous = flaggedValueHolderGetTotal(contentList(this));
        sub10OwnerStart(contentList(this));
        touchRowsUpdate(&touchRows, contentList(this));
        _ZN13ObjBase3c2ef07vfunc0cEv(&panel, contentList(this));
        if (flaggedValueHolderGetTotal(contentList(this)) != previous) {
            showDescription(this, text);
            aocMenuSetButtonHelp(this, 2, 0);
        }
        if (selectOwnerGetActive(&touchRows) != 0) {
            /* A tap on the row under the cursor does what the A button would. */
            if (FUN_004d0058(contentList(this), selectOwnerGetSelected(&touchRows)) == 0) {
                return;
            }
            if (!countOwnerIsValidIndex(main, selectedSlot(this))) {
                return;
            }
            if (selectedRecord(main, this)->flags[7] != 0) {
                startQuestion(this, 6, "aoc_IsCardInput");
                return;
            }
            switch (statusDecodeActivityState(reinterpret_cast<const StatusBytes *>(selectedRecord(main, this)))) {
            case 0:
                startQuestion(this, 2, "aoc_IsPurchase");
                return;
            case 1:
                startQuestion(this, 3, "aoc_IsReDownload");
                return;
            case 2:
                startQuestion(this, 4, "aoc_IsDelete");
                return;
            }
            return;
        }
        if (buttonHelpIsActionActive(12)) {
            startQuestion(this, 2, "aoc_IsPurchase");
            return;
        }
        if (buttonHelpIsActionActive(13)) {
            startQuestion(this, 3, "aoc_IsReDownload");
            return;
        }
        if (buttonHelpIsActionActive(14)) {
            startQuestion(this, 4, "aoc_IsDelete");
            return;
        }
        if (buttonHelpIsActionActive(11)) {
            startQuestion(this, 5, "aoc_IsEnd");
            return;
        }
        if (buttonHelpIsActionActive(10)) {
            changeStep(this, 12);
            buttonHelpSetEnabled(1);
            eventQueueAddUniqueIfValid(AOC_MENU_DECIDE_SOUND);
            panel.ready = 0;
            return;
        }
        if (buttonHelpIsActionActive(15)) {
            startQuestion(this, 6, "aoc_IsCardInput");
            return;
        }
        return;
    }
    case 2:
    case 3:
    case 4:
    case 5:
    case 6: {
        /* The question names the content. */
        char name[0x80];
        Obj422214Owner *record = selectedRecord(main, this);
        sysMemClear(name, sizeof(name));
        textFormatBuffer(name, "%ls", record);
        scrSetStringSlot(0, name);
        buttonHelpSetEnabled(1);
        if (scrRunOpcodesStub(script) != 2) {
            return;
        }
        s32 choice = messageGetChoiceResult();
        if (choice == 0) {
            if (substep == 2) {
                changeStep(this, 7);
                return;
            }
            if (substep == 3) {
                changeStep(this, 8);
                return;
            }
            if (substep == 4) {
                changeStep(this, 9);
                return;
            }
            if (substep == 5) {
                changeStep(this, 15);
                return;
            }
            if (substep == 6) {
                changeStep(this, 13);
                return;
            }
        } else if (choice == 1) {
            substep = 0;
        }
        return;
    }
    }
}
