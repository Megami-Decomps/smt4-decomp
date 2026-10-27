/* NON_MATCHING: four branch pairs have reversed condition polarity and target order; the remaining compatibility-query instructions agree. */
#include "ui/ButtonHelp.h"
extern "C" ButtonHelpGlobalsA g_buttonHelp;

/* Check active button-help entries, including the components of combined kinds. */
extern "C" s32 FUN_00164cf4(u32 kind)
{
    ButtonHelpCompatibility *work = (ButtonHelpCompatibility *)g_buttonHelp.work;
    if (work == NULL) {
        return 0;
    }
    for (s32 index = 0; index < 6; ++index) {
        u32 entryKind = work->entries[index].kind;
        if (entryKind == kind && work->active[index] != 0) {
            return 1;
        }
        switch (entryKind) {
        case 8:
            if (kind == 4 && work->active[index] != 0) {
                return 1;
            }
            break;
        case 9:
            if (kind == 3 && work->active[index] != 0) {
                return 1;
            }
            break;
        case 20:
            if (kind == 1) {
                if (work->active[index] != 0) {
                    return 1;
                }
            } else if (kind == 2) {
                if (work->active[index + 1] != 0) {
                    return 1;
                }
            }
            break;
        case 21:
            if (kind == 5) {
                if (work->active[index] != 0) {
                    return 1;
                }
            } else if (kind == 6) {
                if (work->active[index + 1] != 0) {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}
