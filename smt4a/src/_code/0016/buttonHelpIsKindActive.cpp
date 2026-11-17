#include "ui/ButtonHelpGlobal.h"

/* Check active button-help entries, including the components of combined kinds. */
extern "C" s32 buttonHelpIsKindActive(u32 kind)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    if (work == NULL) {
        return 0;
    }
    for (s32 index = 0; index < 6; ++index) {
        u32 entryKind = work->slots[index].kind;
        if (entryKind == kind && work->touchPressed[index] != 0) {
            return 1;
        }
        if (entryKind == 8) {
            if (kind == 4 && work->touchPressed[index] != 0) {
                return 1;
            }
        } else if (entryKind == 9) {
            if (kind == 3 && work->touchPressed[index] != 0) {
                return 1;
            }
        } else if (entryKind == 20) {
            if (kind == 1 && work->touchPressed[index] != 0) {
                return 1;
            }
            if (kind == 2 && work->touchPressed[index + 1] != 0) {
                return 1;
            }
        } else if (entryKind == 21) {
            if (kind == 5 && work->touchPressed[index] != 0) {
                return 1;
            }
            if (kind == 6 && work->touchPressed[index + 1] != 0) {
                return 1;
            }
        }
    }
    return 0;
}
