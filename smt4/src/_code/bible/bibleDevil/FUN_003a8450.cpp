/* NON_MATCHING: calls, arguments and control flow now follow retail (the price lookup's five arguments, the shown
 * devil's s16 id, the timer stores); retail reaches the row count (0x5A8) and hideHelp (0x5A4) through one view+0x500
 * base where armcc loads the count's offset from the pool, so it has one register fewer and spills the selected-row
 * pointer to [sp]. */
#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "status/StatusCamera.h"
#include "bible/bibleDevil.h"
#include "addon/LookupRecord.h"

/* One list row (0x20 bytes at +0x5A8 of the view, indexed by the cursor). */
struct DevilEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 devil;
    /* 0x06 */ u8 unk06[0x1A];
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
    /* 0x0020 */ u8 cursor[0x74];
    /* 0x0094 */ s8 sortMode;          /* 100 and up: the special price mode */
    /* 0x0095 */ u8 unk0095[0x47];
    /* 0x00DC */ u8 status[0x480];
    /* 0x055C */ SelectedRow row;
    /* 0x056F */ u8 unk056F[0x21];
    /* 0x0590 */ u32 touchRegion;
    /* 0x0594 */ u8 unk0594[0xC];
    /* 0x05A0 */ u32 script;
    /* 0x05A4 */ u8 hideHelp;
    /* 0x05A5 */ u8 listKind;
    /* 0x05A6 */ u8 unk05A6[2];
    union {
        /* 0x05A8 */ s16 count;        /* rows listed */
        /* 0x05A8 */ DevilEntry entries[0x500];
    };
    /* 0xA5A8 */ u8 unkA5A8[8];
    /* 0xA5B0 */ u8 purchaseState;     /* why the selected devil cannot be bought */
    /* 0xA5B1 */ u8 unkA5B1[3];
    /* 0xA5B4 */ s16 timer;
};
typedef char DevilViewLayoutCheck[__INTADDR__(&((DevilView *)0)->entries) == 0x5A8 &&
    __INTADDR__(&((DevilView *)0)->purchaseState) == 0xA5B0 && __INTADDR__(&((DevilView *)0)->timer) == 0xA5B4 ? 1 : -1];

/* The row's devil id (a getter armlink inlined and removed; FUN_003a72a4 reads rows the same way). */
static __inline u16 shopListItemGetId(const DevilEntry *row)
{
    return row->devil;
}

extern "C" {
extern u8 g_bibleDevilCallbackContext[];

s32 flaggedValueHolderGetTotal(void *cursor);
s32 compendiumComputeSummonCost(u16 devil, s32 source, s32 a, s32 specialMode, s32 b);
void messageTargetSetValue(u32 value, s32 flag);
s32 inputIsQuestMenuPressed(void);
s32 inputIsQuestCancelPressed(void);
s32 inputConfirmPressed(void);
s32 gameGetNavigationState(void);
s32 gameGetFlagByte12e8(void);
void FUN_00233240(void *status, s32 mode);
void messageDismissNumericBanner(s32 flag);
void ifTouchRegionClearAll(u32 region);
void releaseEntriesA(SelectedRow *row); // declcheck: local (the shared declaration in code/Code0023_Smt4.h does not compile here: argument of type "SelectedRow *" is incompatible with parameter of type "Obj *")
s32 demonPurchaseValidate(DevilView *view, u32 devil);
void textEncodeFontSlot(s32 slot, char *text);
u32 demonGetRaceLabel(u16 devil, u32 flag);
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

/* Handles one frame of the compendium list: refreshes the shown devil, then starts the status
 * panel, the entry's script, the sort menu or the close, depending on the input. */
void FUN_003a8450(DevilView *view)
{
    s32 confirm = 0;
    s32 cancel = 0;
    DevilEntry *entries = view->entries;
    s16 devil = shopListItemGetId(&entries[flaggedValueHolderGetTotal(view->cursor)]);
    s32 price = compendiumComputeSummonCost(devil, view->listKind, 0, view->sortMode >= 100, 0);
    messageTargetSetValue(-price, 0);
    s32 menuPressed = inputIsQuestMenuPressed();
    SelectedRow *row = &view->row;
    if (view->count > 0) {
        confirm = inputConfirmPressed();
        cancel = inputIsQuestCancelPressed();
        if (confirm == 0)
            confirm = row->confirm;
    }
    if (gameGetNavigationState() != 0) {
        view->state = 9;
        view->subState = 0;
        if (gameGetFlagByte12e8() == 1) {
            view->timer = 1;
        } else {
            view->timer = 5;
        }
        FUN_00233240(view->status, view->timer);
        if (view->hideHelp == 0)
            messageDismissNumericBanner(1);
        ifTouchRegionClearAll(view->touchRegion);
        releaseEntriesA(row);
        return;
    }
    if (confirm != 0) {
        s16 shown = shopListItemGetId(&entries[flaggedValueHolderGetTotal(view->cursor)]);
        FUN_0029ede8(0x18, compendiumComputeSummonCost(shown, view->listKind, 0, view->sortMode >= 100, 0), 0xFFFFFFFF, 0);
        if (demonPurchaseValidate(view, (u16)shown) != 0) {
            char text[0x84];
            libc_strcpy((unsigned int *)text, (unsigned int *)dataTable01FindByIdWithAoc((u16)shown));
            textEncodeFontSlot(8, text);
            libc_strcpy((unsigned int *)text, (unsigned int *)demonGetRaceLabel((u16)shown, 1));
            textEncodeFontSlot(0x10, text);
            scrScriptProcessStartEntry(view->script, 0);
            view->state = 3;
            view->subState = 0;
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
            view->state = 5;
            view->subState = 0;
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
        *(s32 *)(g_bibleDevilCallbackContext + 4) = -1;
        sortMenuCreate(0xF, 0);
        useCounterAppendValue(1);
        useCounterAppendValue(2);
        useCounterAppendValue(7);
        useCounterAppendValue(3);
        useCounterStart();
        gameGlobalsSetSubScreenActive(1);
        view->state = 6;
        view->subState = 0;
        buttonHelpSetText(0, 0x323232FF);
        FUN_002328b4();
        return;
    }
    if (view->hideHelp == 0)
        messageDismissNumericBanner(1);
    buttonHelpSetText(0, 0x323232FF);
    beginStatusPanelClose();
    FUN_00233240(view->status, 1);
    gameGlobalsSetSubScreenActive(1);
    view->state = 11;
    view->subState = 0;
    FUN_00232848();
    uniteLoadPreviewRoomModel();
}

} /* extern "C" */
