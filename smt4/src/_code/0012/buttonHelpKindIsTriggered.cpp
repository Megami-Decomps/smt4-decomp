#include "ui/ButtonHelpGlobal.h"

extern "C" {

s32 ifTouchIsInitialSelection(s32 button);

/* Returns 1 if a slot of the given kind (or a combo slot, kinds 8 and 9, that covers it) has a button for which ifTouchIsInitialSelection holds. */
u32 buttonHelpKindIsTriggered(u32 kind)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    s32 i;

    if (work != NULL) {
        for (i = 0; i < 6; i++) {
            if (work->slots[i].kind == kind && work->touchPressed[i] != 0 && ifTouchIsInitialSelection(work->touchRegions[i]) != 0) {
                return 1;
            }
            if (work->slots[i].kind == 8 && kind == 4 && work->touchPressed[i] != 0) {
                if (ifTouchIsInitialSelection(work->touchRegions[i]) != 0 || ifTouchIsInitialSelection(work->touchRegions[i + 1]) != 0 ||
                    ifTouchIsInitialSelection(work->touchRegions[i + 2]) != 0) {
                    return 1;
                }
            }
            if (work->slots[i].kind == 9 && kind == 3 && work->touchPressed[i] != 0) {
                if (ifTouchIsInitialSelection(work->touchRegions[i]) != 0 || ifTouchIsInitialSelection(work->touchRegions[i + 1]) != 0 ||
                    ifTouchIsInitialSelection(work->touchRegions[i + 2]) != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

} /* extern "C" */
