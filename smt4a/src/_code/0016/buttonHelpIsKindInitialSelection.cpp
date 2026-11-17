#include "ui/ButtonHelpGlobal.h"

extern "C" {


extern s32 ifTouchIsInitialSelection(s32 region);

/* Returns 1 if an active button-help slot of the given kind (or a combined kind containing it) has its touch region at the initial selection. */
u32 buttonHelpIsKindInitialSelection(u32 kind)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    s32 i;

    if (work == NULL) {
        return 0;
    }
    for (i = 0; i < 6; i++) {
        if (work->slots[i].kind == kind && work->touchPressed[i] != 0 && ifTouchIsInitialSelection(work->touchRegions[i]) != 0) {
            return 1;
        }
        if (work->slots[i].kind == 8) {
            if (kind != 4 || work->touchPressed[i] == 0) {
                continue;
            }
            if (ifTouchIsInitialSelection(work->touchRegions[i]) != 0) {
                return 1;
            }
            if (ifTouchIsInitialSelection(work->touchRegions[i + 1]) != 0) {
                return 1;
            }
            if (ifTouchIsInitialSelection(work->touchRegions[i + 2]) != 0) {
                return 1;
            }
        }
        if (work->slots[i].kind == 9) {
            if (kind != 3 || work->touchPressed[i] == 0) {
                continue;
            }
            if (ifTouchIsInitialSelection(work->touchRegions[i]) != 0) {
                return 1;
            }
            if (ifTouchIsInitialSelection(work->touchRegions[i + 1]) != 0) {
                return 1;
            }
            if (ifTouchIsInitialSelection(work->touchRegions[i + 2]) != 0) {
                return 1;
            }
        }
        if (work->slots[i].kind == 0x14) {
            if (kind == 1) {
                if (work->touchPressed[i] != 0 && ifTouchIsInitialSelection(work->touchRegions[i]) != 0) {
                    return 1;
                }
            } else if (kind == 2) {
                if (work->touchPressed[i + 1] != 0 && ifTouchIsInitialSelection(work->touchRegions[i + 1]) != 0) {
                    return 1;
                }
            } else {
                continue;
            }
        }
        if (work->slots[i].kind == 0x15) {
            if (kind == 5) {
                if (work->touchPressed[i] != 0 && ifTouchIsInitialSelection(work->touchRegions[i]) != 0) {
                    return 1;
                }
            } else if (kind == 6) {
                if (work->touchPressed[i + 1] != 0 && ifTouchIsInitialSelection(work->touchRegions[i + 1]) != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

} /* extern "C" */
