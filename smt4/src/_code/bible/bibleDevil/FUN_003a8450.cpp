/* NON_MATCHING: readable rebuild of the devil compendium list's per-frame input handling (draft calls kept as read); retail keeps the selected entry pointer in the 0x84-byte text buffer's first word and shares the result tail by jumps, which armcc here builds from separate returns. */
#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "status/StatusCamera.h"
#include "bible/bibleDevil.h"
#include "addon/LookupRecord.h"

/* One list entry (0x20 bytes at +0x5A8 of the view, indexed by the cursor). */
struct DevilEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 devil;
};

/* The selected row's record (as the view reads it). */
struct SelectedRow {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ s8 confirm;
};

/* The compendium view (only the fields read here). */
struct DevilView {
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ s32 state;
    /* 0x0018 */ s32 subState;
    /* 0x001C */ u8 unk001C[4];
    /* 0x0020 */ u8 cursor[0x5C];
    /* 0x007C */ u8 unk007C[0x60];
    /* 0x00DC */ u8 status[0x480];
    /* 0x055C */ SelectedRow row;
    /* 0x056F */ u8 unk056F[0x21];
    /* 0x0590 */ u32 touchRegion;
    /* 0x0594 */ u8 unk0594[0xC];
    /* 0x05A0 */ u32 script;
    /* 0x05A4 */ u8 hideHelp;
    /* 0x05A5 */ u8 listKind;
    /* 0x05A6 */ u8 unk05A6[2];
    /* 0x05A8 */ DevilEntry entries[1];
};

extern "C" {
extern u8 DAT_0043d9c8[];

s32 flaggedValueHolderGetTotal(void *cursor);
void FUN_0029ce60(u32 devil, s32 kind, s32 flag);
void messageTargetSetValue(u32 value, s32 flag);
s32 inputIsQuestMenuPressed(void);
s32 inputIsQuestCancelPressed(void);
s32 FUN_0027ee9c(void);
s32 gameGetNavigationState(void);
s32 gameGetFlagByte12e8(void);
void FUN_00233240(void *status, s32 mode);
void FUN_0029cc44(s32 flag);
void ifTouchRegionClearAll(u32 region);
void FUN_00233818(SelectedRow *row);
s32 demonPurchaseValidate(DevilView *view, u32 devil);
void textEncodeFontSlot(s32 slot, char *text);
u32 demonGetRaceLabel(u16 devil, u32 flag);
void scrScriptProcessStartEntry(u32 script, s32 entry);
void buttonHelpSetPreset(s32 preset);
void messageMainSetTargetFlags(s32 flags);
void FUN_002328b4(void);
void sortMenuCreate(s32 a, s32 b);
void FUN_0029e328(u8 value);
void useCounterStart(void);
void FUN_0029ee6c(s32 a, u32 color);
void beginStatusPanelClose(void);
void FUN_00232848(void);
void uniteLoadPreviewRoomModel(void);

/* Handles one frame of the compendium list: refreshes the shown devil, then starts the status
 * panel, the entry's script, the sort menu or the close, depending on the input. */
void FUN_003a8450(DevilView *view)
{
    s32 confirm = 0;
    s32 cancel = 0;
    u32 devil = view->entries[flaggedValueHolderGetTotal(view->cursor)].devil;
    FUN_0029ce60(devil, view->listKind, 0);
    messageTargetSetValue(-devil, 0);
    s32 menuPressed = inputIsQuestMenuPressed();
    SelectedRow *row = &view->row;
    if (*(s16 *)((u8 *)view + 0x5A8) > 0) {
        confirm = FUN_0027ee9c();
        cancel = inputIsQuestCancelPressed();
        if (confirm == 0)
            confirm = row->confirm;
    }
    if (gameGetNavigationState() != 0) {
        view->state = 9;
        view->subState = 0;
        *(u16 *)((u8 *)view + 0xA5B4) = gameGetFlagByte12e8() == 1 ? 1 : 5;
        FUN_00233240(view->status, *(s16 *)((u8 *)view + 0xA5B4));
        if (view->hideHelp == 0)
            FUN_0029cc44(1);
        ifTouchRegionClearAll(view->touchRegion);
        FUN_00233818(row);
        return;
    }
    if (confirm != 0) {
        u16 shown = view->entries[flaggedValueHolderGetTotal(view->cursor)].devil;
        FUN_0029ce60(shown, view->listKind, 0);
        FUN_0029ede8(0x18, shown, 0xFFFFFFFF, 0);
        if (demonPurchaseValidate(view, shown) != 0) {
            char text[0x84];
            FUN_002bd06c(shown);
            libc_strcpy(reinterpret_cast<unsigned int *>(text), reinterpret_cast<unsigned int *>(shown));
            textEncodeFontSlot(8, text);
            libc_strcpy(reinterpret_cast<unsigned int *>(text), reinterpret_cast<unsigned int *>(demonGetRaceLabel(shown, 1)));
            textEncodeFontSlot(0x10, text);
            scrScriptProcessStartEntry(view->script, 0);
            view->state = 3;
            view->subState = 0;
        } else {
            s32 entry = 0;
            switch (*((u8 *)view + 0xA5B0)) {
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
            view->state = 5;
            view->subState = 0;
            buttonHelpSetPreset(0x9E);
        }
        messageMainSetTargetFlags(1);
        FUN_002a0cc8(1);
        FUN_002328b4();
        return;
    }
    if (menuPressed == 0) {
        if (cancel == 0)
            return;
        *(s32 *)(DAT_0043d9c8 + 4) = -1;
        sortMenuCreate(0xF, 0);
        FUN_0029e328(1);
        FUN_0029e328(2);
        FUN_0029e328(7);
        FUN_0029e328(3);
        useCounterStart();
        FUN_002a0cc8(1);
        view->state = 6;
        view->subState = 0;
        FUN_0029ee6c(0, 0x323232FF);
        FUN_002328b4();
        return;
    }
    if (view->hideHelp == 0)
        FUN_0029cc44(1);
    FUN_0029ee6c(0, 0x323232FF);
    beginStatusPanelClose();
    FUN_00233240(view->status, 1);
    FUN_002a0cc8(1);
    view->state = 11;
    view->subState = 0;
    FUN_00232848();
    uniteLoadPreviewRoomModel();
}

} /* extern "C" */
