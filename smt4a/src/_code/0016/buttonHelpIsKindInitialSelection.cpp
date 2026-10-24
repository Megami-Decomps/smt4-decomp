#include "ui/ButtonHelp.h"

extern "C" {

/* The button-help work's per-slot kinds, touch region ids and active flags. */
typedef struct ButtonHelpTouchSlots {
    /* 0x000 */ u8 unk000[0x5AC];
    /* 0x5AC */ ButtonHelpCompatibilityKind kinds[6];
    /* 0x5C4 */ s16 regions[8];
    /* 0x5D4 */ u8 active[7];
} ButtonHelpTouchSlots;

extern ButtonHelpGlobalsA g_buttonHelp;

extern s32 ifTouchIsInitialSelection(s32 region);

/* Returns 1 if an active button-help slot of the given kind (or a combined kind containing it) has its touch region at the initial selection. */
u32 buttonHelpIsKindInitialSelection(u32 kind)
{
    ButtonHelpTouchSlots *work = (ButtonHelpTouchSlots *)g_buttonHelp.work;
    s32 i;

    if (work == NULL) {
        return 0;
    }
    for (i = 0; i < 6; i++) {
        if (work->kinds[i].kind == kind && work->active[i] != 0 && ifTouchIsInitialSelection(work->regions[i]) != 0) {
            return 1;
        }
        if (work->kinds[i].kind == 8) {
            if (kind != 4 || work->active[i] == 0) {
                continue;
            }
            if (ifTouchIsInitialSelection(work->regions[i]) != 0) {
                return 1;
            }
            if (ifTouchIsInitialSelection(work->regions[i + 1]) != 0) {
                return 1;
            }
            if (ifTouchIsInitialSelection(work->regions[i + 2]) != 0) {
                return 1;
            }
        }
        if (work->kinds[i].kind == 9) {
            if (kind != 3 || work->active[i] == 0) {
                continue;
            }
            if (ifTouchIsInitialSelection(work->regions[i]) != 0) {
                return 1;
            }
            if (ifTouchIsInitialSelection(work->regions[i + 1]) != 0) {
                return 1;
            }
            if (ifTouchIsInitialSelection(work->regions[i + 2]) != 0) {
                return 1;
            }
        }
        if (work->kinds[i].kind == 0x14) {
            if (kind == 1) {
                if (work->active[i] != 0 && ifTouchIsInitialSelection(work->regions[i]) != 0) {
                    return 1;
                }
            } else if (kind == 2) {
                if (work->active[i + 1] != 0 && ifTouchIsInitialSelection(work->regions[i + 1]) != 0) {
                    return 1;
                }
            } else {
                continue;
            }
        }
        if (work->kinds[i].kind == 0x15) {
            if (kind == 5) {
                if (work->active[i] != 0 && ifTouchIsInitialSelection(work->regions[i]) != 0) {
                    return 1;
                }
            } else if (kind == 6) {
                if (work->active[i + 1] != 0 && ifTouchIsInitialSelection(work->regions[i + 1]) != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

} /* extern "C" */
