/* NON_MATCHING: retail shares the record buffer's stack slot with the spilled touch-panel pointer (a 0x610 frame, ip
 * pushed as padding) and keeps the 0x500 block in r5 through the confirm arm (58 lines). */
#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "status/StatusCamera.h"
#include "addon/LookupRecord.h"

extern "C" {

/* The devil list screen's work block (only the fields this handler touches). */
typedef struct DevilListInput {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 mode;
    /* 0x018 */ s32 step;
    /* 0x01C */ u8 unk01c[4];
    /* 0x020 */ u8 cursor[0x70];
    /* 0x090 */ u8 unk090[0x4CC];
    /* 0x55C */ u8 touchPanel[0x34];
    /* 0x590 */ u32 touchRegions;
    /* 0x594 */ u8 unk594[0xC];
    /* 0x5A0 */ u32 script;
    /* 0x5A4 */ u8 previewEnabled;
    /* 0x5A5 */ s8 previewMode;
    /* 0x5A6 */ u8 unk5a6;
    /* 0x5A7 */ u8 previewShown;
    /* 0x5A8 */ struct DevilListRow {
        u8 unk00[4];
        u16 id;
        u8 unk06[0x1A];
    } rows[1];
} DevilListInput;

/* The part of the screen's state at 0x500: the preview flag and the row count. */
typedef struct DevilListBlock {
    u8 unk00[0xA4];
    u8 previewEnabled;
    u8 unkA5[3];
    s16 count;
} DevilListBlock;

typedef struct DevilListInputView {
    u8 unk0000[0xA5B4];
    s16 targetId;
} DevilListInputView;

extern u32 g_bibleDevilCallbackContext[];

s32 inputIsQuestMenuPressed(void);
s8 uiSubStateGetReady(const void *subState);
s32 inputConfirmPressed(void);
s32 inputIsQuestConfirmPressed(void);
s32 inputIsQuestCancelPressed(void);
s32 gameGetNavigationState(void);
s32 gameGetFlagByte12e8(void);
void FUN_00233240(void *panel, s32 value);
void messageDismissNumericBanner(s32 arg);
void ifTouchRegionClearAll(u32 regions);
void releaseEntriesA(void *panel); // declcheck: local (the shared declaration in code/Code0023_Smt4.h does not compile here: argument of type "u8 *" is incompatible with parameter of type "Obj *")
s32 flaggedValueHolderGetTotal(void *cursor);
void textEncodeFontSlot(s32 slot, void *buffer);
u32 demonGetRaceLabel(u32 id, u32 arg);
void scrScriptProcessStartEntry(u32 script, s32 entry);
void FUN_002328b4(void);
void buttonHelpSetText(s32 a, u32 color);
void beginStatusPanelClose(void);
void FUN_00232848(void);
void uniteLoadPreviewRoomModel(void);
void buttonHelpSetPreset(u32 preset);
u32 partyMemberFindById(u16 id);
void FUN_0029da34(s32 a, s32 b, u16 id, const void *record);
void unitInitializeFromSavedRecord(u16 id, void *record);

/* The id of a row of the list. */
static __inline u16 devilListRowGetId(const DevilListInput::DevilListRow *row)
{
    return row->id;
}

/* Handles the input of the devil list's preview screen: leaving to the map, opening the entry
 * (name and race to the text slots, then its script), the menu button (to the room), the confirm
 * button (toggles the preview kind) and the cancel button. */
void FUN_003a6f80(DevilListInput *work)
{
    s32 select = 0;
    s32 confirm = 0;
    s32 cancel = 0;
    s32 menu = inputIsQuestMenuPressed();
    const DevilListBlock *block = reinterpret_cast<const DevilListBlock *>(reinterpret_cast<u8 *>(work) + 0x500);

    if (block->count > 0) {
        select = inputConfirmPressed();
        confirm = inputIsQuestConfirmPressed();
        cancel = inputIsQuestCancelPressed();
        if (select == 0) {
            select = uiSubStateGetReady(work->touchPanel);
        }
    }
    if (gameGetNavigationState() != 0) {
        work->mode = 9;
        work->step = 0;
        if (gameGetFlagByte12e8() == 1) {
            ((DevilListInputView *)work)->targetId = 1;
        } else {
            ((DevilListInputView *)work)->targetId = 5;
        }
        FUN_00233240((u8 *)work + 0xDC, ((DevilListInputView *)work)->targetId);
        if (block->previewEnabled == 0) {
            messageDismissNumericBanner(1);
        }
        ifTouchRegionClearAll(work->touchRegions);
        releaseEntriesA(work->touchPanel);
        return;
    }
    DevilListInput::DevilListRow *rows = work->rows;
    if (select != 0) {
        u32 id = devilListRowGetId(&rows[flaggedValueHolderGetTotal(work->cursor)]);
        u8 record[0x610];

        libc_strcpy(reinterpret_cast<unsigned int *>(record), reinterpret_cast<unsigned int *>((u32)dataTable01FindByIdWithAoc(id)));
        textEncodeFontSlot(8, record);
        libc_strcpy(reinterpret_cast<unsigned int *>(record), reinterpret_cast<unsigned int *>(demonGetRaceLabel(id, 1)));
        textEncodeFontSlot(0x10, record);
        scrScriptProcessStartEntry(work->script, 6);
        gameGlobalsSetSubScreenActive(1);
        work->mode = 7;
        work->step = 0;
        FUN_002328b4();
    } else {
        if (menu != 0) {
            if (block->previewEnabled == 0) {
                messageDismissNumericBanner(1);
            }
            buttonHelpSetText(0, 0x323232FF);
            beginStatusPanelClose();
            FUN_00233240((u8 *)work + 0xDC, 1);
            gameGlobalsSetSubScreenActive(1);
            work->mode = 11;
            work->step = 0;
            FUN_00232848();
            uniteLoadPreviewRoomModel();
            return;
        }
        if (confirm != 0) {
            g_bibleDevilCallbackContext[1] = 0xFFFFFFFF;
            work->previewMode++;
            if (work->previewMode > 1) {
                work->previewMode = 0;
            }
            FUN_002328b4();
            work->previewShown = 1;
            buttonHelpSetPreset(work->previewMode == 1 ? 0x4C : 0x4D);
            s16 id = devilListRowGetId(&rows[flaggedValueHolderGetTotal(work->cursor)]);

            if (work->previewMode == 1) {
                FUN_0029da34(0, 1, id, (const void *)partyMemberFindById(id));
            } else {
                u8 record[0x610];
                unitInitializeFromSavedRecord(id, record);
                FUN_0029da34(0, 1, id, record);
            }
            return;
        }
        if (cancel != 0) {
            g_bibleDevilCallbackContext[1] = 0xFFFFFFFF;
            gameGlobalsSetSubScreenActive(1);
            work->mode = 8;
            work->step = 0;
            scrScriptProcessStartEntry(work->script, 7);
            FUN_002328b4();
        }
    }
}

}
