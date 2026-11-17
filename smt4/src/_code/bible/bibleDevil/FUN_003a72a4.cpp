/* NON_MATCHING: after FUN_002328b4 the pageChanged/selected stores use swapped scratch registers (retail r1 for the constant and the pointer, this build r0). The row-id getter is an inline definition: armlink inlined and removed shopListItemGetId, and retail's `mov r2, #0` before its ldrh shows the caller saw its body. */
#include "common.h"
#include "bible/bibleDevil.h"
#include "code/Code0029.h"
#include "ui/UiSpriteApi.h"

/* One animated cursor channel of the screen's widget. */
struct BibleDevilWidget {
    u8 unk00[0x20];
    UiSpriteState channels[7];  /* 0x20 */
    u8 unk3f4[0x480 - 0x3f4];
};

struct BibleDevilRow { u32 unk00; u16 id; u8 unk06[0x1a]; };

/* The devil bible screen's object (the view this function needs). */
struct BibleDevilScreen {
    u8 unk00[0x14];
    s32 state;                      /* 0x14 */
    s32 stateArg;                   /* 0x18 */
    u8 unk1c[4];
    u8 cursor[0x28];                /* 0x20 */
    u8 unk48[0x94 - 0x48];
    s8 level;                       /* 0x94 */
    u8 unk95[0xc8 - 0x95];
    u8 rectangle[0x14];             /* 0xc8 */
    BibleDevilWidget widget;        /* 0xdc */
    u8 unk55c[0x5a4 - 0x55c];
    s8 mode;                        /* 0x5a4 */
    s8 page;                        /* 0x5a5 */
    u8 unk5a6;
    u8 pageChanged;                 /* 0x5a7 */
    BibleDevilRow rows[1280];  /* 0x5a8 */
    u8 unka5a8[0xa5b4 - 0xa5a8];
    s16 selected;                   /* 0xa5b4 */
};
struct BibleDevilTasks { void *work; s32 selected; };

/* The row's id (a getter armlink inlined and removed). */
static __inline u16 shopListItemGetId(const BibleDevilRow *row)
{
    return row->id;
}

extern "C" {

extern BibleDevilTasks DAT_0043d9c8;

s32 useCounterIsFinished(void);
void uiAnimationAdvanceChannel(BibleDevilWidget *, s32);
void pointConvertToFloat(void *, u32, u32);
s32 gameGetNavigationState(void);
s32 gameGetFlagByte12e8(void);
void FUN_00233240(BibleDevilWidget *, s32);
s32 flaggedValueHolderGetTotal(void *);
s32 FUN_0029ce60(u16, s32, s32, s32, s32);
void messageBannerInitSelection(s32, s32);
void messageTargetSetValue(s32, s32);
u32 flaggedEntryGetValueByState(void *);
s32 FUN_00293b8c(void);
s32 inputIsQuestConfirmPressed(void);
void FUN_002328b4(void);
void FUN_0022de74(BibleDevilScreen *);
void buttonHelpGetStatus(void);
void buttonHelpSetPreset(void);
void listCursorStepForward(void *);
void listCursorStepBack(void *);
void FUN_002b8454(s32, s32, s32, s32);
void FUN_00233404(void);

/* Per-frame update of the devil bible: moves the cursor between pages/entries and starts the buy flow when the navigation state allows it. */
void FUN_003a72a4(BibleDevilScreen *screen)
{
    if (!useCounterIsFinished()) {
        return;
    }
    uiAnimationAdvanceChannel(&screen->widget, screen->selected);
    UiSpriteState *channel = &screen->widget.channels[screen->selected];
    pointConvertToFloat(screen->rectangle, vec2GetXInt(channel), vec2GetYInt(channel));

    if (gameGetNavigationState() != 0 && FUN_00293aac() == 0) {
        screen->state = 10;
        screen->stateArg = 0;
        if (gameGetFlagByte12e8() == 1) {
            screen->selected = 0;
        } else {
            screen->selected = 4;
        }
        FUN_00233240(&screen->widget, screen->selected);
        if (screen->mode == 0) {
            BibleDevilRow *rows = screen->rows;
            s16 id = shopListItemGetId(&rows[flaggedValueHolderGetTotal(screen->cursor)]);
            s32 delta = FUN_0029ce60(id, static_cast<u8>(screen->page), 0, screen->level >= 100, 0);
            messageBannerInitSelection(1, 0);
            messageTargetSetValue(-delta, 0);
        }
        return;
    }

    if (gameGetNavigationState() != 0) {
        return;
    }
    if (*(s32 *)&screen->cursor[8] <= 0) {
        return;
    }

    s32 selection = FUN_0029e924(screen->cursor);
    s32 scroll = flaggedEntryGetValueByState(screen->cursor);
    if (FUN_00293b8c() == 1) {
        listCursorStepForward(screen->cursor);
    } else if (FUN_00293b8c() == -1) {
        listCursorStepBack(screen->cursor);
    } else if (screen->mode == 1 && inputIsQuestConfirmPressed()) {
        s8 next = screen->page + 1;
        screen->page = next;
        if (next > 1) {
            screen->page = 0;
        }
        FUN_002328b4();
        screen->pageChanged = 1;
        DAT_0043d9c8.selected = -1;
        FUN_0022de74(screen);
        buttonHelpGetStatus();
        buttonHelpSetPreset();
    }
    if (screen->mode == 1) {
        if (screen->page == 1) {
            FUN_002b8454(2, 4, 0x40, 1);
        } else {
            FUN_002b8454(2, 4, 0x41, 1);
        }
    }
    if (FUN_0029e924(screen->cursor) == selection && flaggedEntryGetValueByState(screen->cursor) == scroll) {
        return;
    }
    FUN_00233404();
}

} /* extern "C" */
