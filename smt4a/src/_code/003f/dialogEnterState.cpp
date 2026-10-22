#include "common.h"

extern "C" {

typedef struct Dialog {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ u32 state;
    /* 0x018 */ u32 arg;
    /* 0x01C */ u32 unk1c;
    /* 0x020 */ u8 unk020[0xC];
    /* 0x02C */ u32 screen;
    /* 0x030 */ u8 unk030[0xF0];
    /* 0x120 */ u8 confirmed;
    /* 0x121 */ u8 unk121[3];
    /* 0x124 */ u32 cancelled;
} Dialog;

extern int sysPlaySe(u32 se);
extern int FUN_0019de98(int a, u32 color);
extern int FUN_002ebce4(void);
extern int screenStartOrClear(u32 screen, u32 start);

/* Enters `state` with `arg`: plays the sound it calls for and, for the choice states, starts the screen. */
void dialogEnterState(Dialog *dialog, u32 state, u32 arg)
{
    u32 se = 0xFC;
    u32 start = 0;

    dialog->unk1c = 0;
    dialog->state = state;
    dialog->arg = arg;
    switch (state) {
    case 0:
    case 1:
        sysPlaySe(0xFC);
        FUN_0019de98(0, 0xF4F4F4FF);
        return;
    case 4:
    case 5:
    case 6:
    case 7:
        if (dialog->cancelled != 0) {
            se = 0xFF;
        } else if (dialog->confirmed != 0) {
            se = 0xFE;
        } else {
            se = 0xFD;
        }
        start = 1;
        break;
    case 9:
    case 10:
    case 11:
        return;
    case 2:
    case 3:
    case 8:
        break;
    }
    sysPlaySe(se);
    if (FUN_002ebce4() != 0) {
        screenStartOrClear(dialog->screen, start);
    }
}

}
