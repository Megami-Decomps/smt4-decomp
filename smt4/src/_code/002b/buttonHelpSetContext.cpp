/* NON_MATCHING: the panel-close loop now lays out like buttonHelpClosePanel; remaining: the shared close tail (phase = 0, state = 3) is merged into one stm with 3 hoisted into a saved register (retail: str with writeback, then the 3 in r1), so the global's address and the saved registers shift (r9/r8, two extra pushed). */
#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"

struct ButtonHelpContextRecord {
    u8 unk00[0xC];
    u8 panelMode;
    u8 unk0D[3];
};

extern "C" {
ButtonHelpContextRecord *dataTableGetEntry0e(u32 context);
void ifTouchDecrementTimer(void);
void uiSpriteSetScaleKeyframe(UiSpriteState *unit, s32 state, s32 mode);
}

/* Closes the slots: hides their sprites and drops their touch regions (combined slots hold two or three). */
static __inline void buttonHelpCloseSlots(void)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    for (s32 index = 0; index < 6; ++index) {
        spriteStartAnimationByIndex(&work->slotSprites[index], 1);
        if (work->slots[index].kind != 0) {
            if (work->slots[index].kind == 7 || work->slots[index].kind == 9)
                ifTouchDecrementTimer();
            if (work->slots[index].kind == 8) {
                ifTouchDecrementTimer();
                ifTouchDecrementTimer();
            }
            ifTouchDecrementTimer();
        }
    }
    g_buttonHelp.work->phase = 0;
    g_buttonHelp.work->state = 3;
}

/* Closes the whole panel (buttonHelpClosePanel): the slots, optionally emptying them, and the panel sprites. */
static __inline void buttonHelpClosePanel(s32 clearTouches)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    for (s32 index = 0; index < 6; ++index) {
        spriteStartAnimationByIndex(&work->slotSprites[index], 1);
        if (work->slots[index].kind != 0) {
            if (clearTouches)
                work->slots[index].kind = 0;
            ifTouchDecrementTimer();
        }
    }
    for (s32 index = 0; index < 2; ++index) {
        if (work->mode == 1)
            uiSpriteSetKeyframe(&work->panelSprites[index], 3, 0);
        else
            uiSpriteSetScaleKeyframe(&work->panelSprites[index], 0, 1);
    }
    g_buttonHelp.work->phase = 0;
    g_buttonHelp.work->state = 3;
}

/* Switches the help context: closes the slots, or the whole panel when only the new context shows it. */
extern "C" void buttonHelpSetContext(u32 context)
{
    const ButtonHelpContextRecord *current = dataTableGetEntry0e(g_buttonHelp.work->preset);
    const ButtonHelpContextRecord *next = dataTableGetEntry0e(context);
    if (current != NULL && next != NULL) {
        if (current->panelMode)
            buttonHelpCloseSlots();
        else if (next->panelMode)
            buttonHelpClosePanel(1);
        else
            buttonHelpCloseSlots();
    }
}
