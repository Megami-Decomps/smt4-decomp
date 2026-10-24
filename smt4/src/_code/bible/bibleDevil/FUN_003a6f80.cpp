/* NON_MATCHING: the boolean input flags and the shared tail stores are scheduled differently, and the 0x610-byte unit buffer sits at another frame offset; the screen state transitions are the same. */
#include "common.h"

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
    /* 0x5A5 */ u8 previewMode;
    /* 0x5A6 */ u8 unk5a6;
    /* 0x5A7 */ u8 previewShown;
    /* 0x5A8 */ struct {
        u8 unk00[4];
        u16 id;
        u8 unk06[0x1A];
    } rows[1];
} DevilListInput;

typedef struct DevilListInputView {
    u8 unk0000[0xA5B4];
    u16 targetId;
} DevilListInputView;

extern u32 DAT_0043d9c8[];

s32 inputIsQuestMenuPressed(void);
s32 FUN_0027ee9c(void);
s32 inputIsQuestConfirmPressed(void);
s32 inputIsQuestCancelPressed(void);
s32 gameGetNavigationState(void);
s32 gameGetFlagByte12e8(void);
void FUN_00233240(void *panel, s32 value);
void FUN_0029cc44(s32 arg);
void ifTouchRegionClearAll(u32 regions);
void FUN_00233818(void *panel);
s32 flaggedValueHolderGetTotal(void *cursor);
u32 FUN_002bd06c(u32 id);
char *libc_strcpy(void *destination, u32 source);
void textEncodeFontSlot(s32 slot, void *buffer);
u32 demonGetRaceLabel(u32 id, u32 arg);
void scrScriptProcessStartEntry(u32 script, s32 entry);
void FUN_002a0cc8(s32 arg);
void FUN_002328b4(void);
void FUN_0029ee6c(s32 a, u32 color);
void beginStatusPanelClose(void);
void FUN_00232848(void);
void uniteLoadPreviewRoomModel(void);
void buttonHelpSetPreset(u32 preset);
u32 partyMemberFindById(u16 id);
void FUN_0029da34(s32 a, s32 b, u16 id, const void *record);
void unitInitializeFromSavedRecord(u16 id, void *record);

/* Handles the input of the devil list's preview screen: leaving to the map, opening the entry
 * (name and race to the text slots, then its script), the menu button (to the room), the confirm
 * button (toggles the preview kind) and the cancel button. */
void FUN_003a6f80(DevilListInput *work)
{
    s32 select = 0;
    s32 confirm = 0;
    s32 cancel = 0;
    s32 menu = inputIsQuestMenuPressed();
    u8 record[0x610];

    if (*(s16 *)&work->rows[0] > 0) {
        select = FUN_0027ee9c();
        confirm = inputIsQuestConfirmPressed();
        cancel = inputIsQuestCancelPressed();
        if (select == 0) {
            select = (s8)work->touchPanel[0x12];
        }
    }
    if (gameGetNavigationState() != 0) {
        work->mode = 9;
        work->step = 0;
        ((DevilListInputView *)work)->targetId = gameGetFlagByte12e8() == 1 ? 1 : 5;
        FUN_00233240((u8 *)work + 0xDC, ((DevilListInputView *)work)->targetId);
        if (work->previewEnabled == 0) {
            FUN_0029cc44(1);
        }
        ifTouchRegionClearAll(work->touchRegions);
        FUN_00233818(work->touchPanel);
        return;
    }
    if (select != 0) {
        u32 id = work->rows[flaggedValueHolderGetTotal(work->cursor)].id;

        libc_strcpy(record, FUN_002bd06c(id));
        textEncodeFontSlot(8, record);
        libc_strcpy(record, demonGetRaceLabel(id, 1));
        textEncodeFontSlot(0x10, record);
        scrScriptProcessStartEntry(work->script, 6);
        FUN_002a0cc8(1);
        work->mode = 7;
        work->step = 0;
        FUN_002328b4();
    } else {
        if (menu != 0) {
            if (work->previewEnabled == 0) {
                FUN_0029cc44(1);
            }
            FUN_0029ee6c(0, 0x323232FF);
            beginStatusPanelClose();
            FUN_00233240((u8 *)work + 0xDC, 1);
            FUN_002a0cc8(1);
            work->mode = 11;
            work->step = 0;
            FUN_00232848();
            uniteLoadPreviewRoomModel();
            return;
        }
        if (confirm != 0) {
            DAT_0043d9c8[1] = 0xFFFFFFFF;
            work->previewMode++;
            if (work->previewMode > 1) {
                work->previewMode = 0;
            }
            FUN_002328b4();
            work->previewShown = 1;
            buttonHelpSetPreset(work->previewMode == 1 ? 0x4C : 0x4D);
            u16 id = work->rows[flaggedValueHolderGetTotal(work->cursor)].id;

            if (work->previewMode == 1) {
                FUN_0029da34(0, 1, id, (const void *)partyMemberFindById(id));
                return;
            }
            unitInitializeFromSavedRecord(id, record);
            FUN_0029da34(0, 1, id, record);
            return;
        }
        if (cancel != 0) {
            DAT_0043d9c8[1] = 0xFFFFFFFF;
            FUN_002a0cc8(1);
            work->mode = 8;
            work->step = 0;
            scrScriptProcessStartEntry(work->script, 7);
            FUN_002328b4();
        }
    }
}

}
