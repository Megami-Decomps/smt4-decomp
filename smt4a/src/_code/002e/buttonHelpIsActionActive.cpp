#include "ui/ButtonHelpGlobal.h"

extern "C" {

// Check displayed button kinds, including compound actions, for an active requested action.
u32 buttonHelpIsActionActive(u32 action)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    if (work != NULL) {
        for (s32 index = 0; index < 6; ++index) {
            u32 kind = work->slots[index].kind;
            if (kind == action && work->touchSelected[index] != 0) {
                return 1;
            }
            if (kind == 8) {
                if (action == 4 && work->touchSelected[index] != 0) {
                    return 1;
                }
            } else if (kind == 9) {
                if (action == 3 && work->touchSelected[index] != 0) {
                    return 1;
                }
            } else if (kind == 20) {
                if (action == 5 && work->touchSelected[index] != 0) {
                    return 1;
                }
                if (action == 6 && work->touchSelected[index + 1] != 0) {
                    return 1;
                }
            } else if (kind == 21) {
                if (action == 5 && work->touchSelected[index] != 0) {
                    return 1;
                }
                if (action == 6 && work->touchSelected[index + 1] != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
}
