#include "ui/ButtonHelpGlobal.h"

extern "C" {

/* Tests the six displayed help buttons, including their alternate aliases. */
bool buttonHelpIsButtonEnabled(u32 button)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    if (work != NULL) {
        for (s32 index = 0; index < 6; ++index) {
            u8 shown = work->slots[index].kind;
            if (shown == button && work->touchPressed[index] != 0) {
                return true;
            }
            if (shown == 8) {
                if (button == 4 && work->touchPressed[index] != 0) {
                    return true;
                }
            } else if (shown == 9) {
                if (button == 3 && work->touchPressed[index] != 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

} /* extern "C" */
