#include "common.h"

struct HelpButton {
    u8 id;
    u8 unk01[3];
};

struct ButtonHelpWork {
    /* 0x000 */ u8 unk000[0x494];
    /* 0x494 */ HelpButton buttons[6];
    /* 0x4AC */ u8 unk4AC[0x0C];
    /* 0x4B8 */ u8 enabled[6];
};

struct ButtonHelpGlobals {
    /* 0x00 */ u32 users;
    /* 0x04 */ ButtonHelpWork *work;
};

extern "C" {

extern ButtonHelpGlobals g_buttonHelp;

/* Tests the six displayed help buttons, including their alternate aliases. */
bool buttonHelpIsButtonEnabled(u32 button)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    if (work != NULL) {
        for (s32 index = 0; index < 6; ++index) {
            u8 shown = work->buttons[index].id;
            if (shown == button && work->enabled[index] != 0) {
                return true;
            }
            if (shown == 8) {
                if (button == 4 && work->enabled[index] != 0) {
                    return true;
                }
            } else if (shown == 9) {
                if (button == 3 && work->enabled[index] != 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

} /* extern "C" */
