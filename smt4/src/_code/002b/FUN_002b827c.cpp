/* NON_MATCHING: clear-mode stores/calls are predicated, while global-work loading, mode-loop NOP placement and the common exit differ. */
#include "ui/ButtonHelp.h"

struct ButtonHelpContextRecord {
    u8 unk00[0xC];
    u8 panelMode;
    u8 unk0D[3];
};

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;
ButtonHelpContextRecord *dataTableGetEntry0e(u32 context);
void FUN_002bee58(ButtonHelpDisplayUnit *unit, s32 selected);
void ifTouchDecrementTimer(void);
void FUN_002a9fdc(ButtonHelpDisplayUnit *unit, s32 state, s32 mode);
void timerStart(ButtonHelpDisplayUnit *unit, s32 state, s32 mode);
}

static __inline void buttonHelpReleaseSelections(ButtonHelpSelectionViewIV *work)
{
    for (s32 index = 0; index < 6; ++index) {
        FUN_002bee58(&work->units[index], 1);
        if (work->kinds[index].kind != 0) {
            if (work->kinds[index].kind == 7 || work->kinds[index].kind == 9)
                ifTouchDecrementTimer();
            if (work->kinds[index].kind == 8) {
                ifTouchDecrementTimer();
                ifTouchDecrementTimer();
            }
            ifTouchDecrementTimer();
        }
    }
}

extern "C" void FUN_002b827c(u32 context)
{
    const ButtonHelpContextRecord *current = dataTableGetEntry0e(g_buttonHelp.work->unk4C9);
    const ButtonHelpContextRecord *next = dataTableGetEntry0e(context);
    if (current != NULL && next != NULL) {
        ButtonHelpWork *work = g_buttonHelp.work;
        ButtonHelpSelectionViewIV *selection = (ButtonHelpSelectionViewIV *)work;
        if (current->panelMode) {
            buttonHelpReleaseSelections(selection);
        } else if (next->panelMode) {
            for (s32 index = 0; index < 6; ++index) {
                FUN_002bee58(&selection->units[index], 1);
                if (selection->kinds[index].kind != 0) {
                    selection->kinds[index].kind = 0;
                    ifTouchDecrementTimer();
                }
            }
            for (s32 index = 0; index < 2; ++index) {
                if (work->mode != 1)
                    FUN_002a9fdc(&work->units[index], 0, 1);
                else
                    timerStart(&work->units[index], 3, 0);
            }
        } else {
            buttonHelpReleaseSelections(selection);
        }
        g_buttonHelp.work->transition.phase = 0;
        g_buttonHelp.work->state = 3;
    }
}
