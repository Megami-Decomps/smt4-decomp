/* NON_MATCHING: only r7/r8 swap: retail keeps &g_buttonHelp in r8 and the stored 0 in r7. */
#include "common.h"
#include <stddef.h>

/* One 0x8C-byte animated element of the button help panel. */
struct ButtonHelpPart {
    /* 0x00 */ u8 unk00[0x8c];
};

struct ButtonHelpTouch {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
};

/* The button help panel. */
struct ButtonHelpPanel {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00C */ s32 frame;
    /* 0x010 */ s32 state;
    /* 0x014 */ u8 unk014[0x20];
    /* 0x034 */ ButtonHelpPart buttons[6];
    /* 0x37C */ ButtonHelpPart arrows[2];
    /* 0x494 */ ButtonHelpTouch touches[6];
    /* 0x4AC */ u8 unk4ac[0x1c];
    /* 0x4C8 */ u8 mode;
};

typedef char ButtonHelpPanelLayoutCheck[sizeof(ButtonHelpPart) == 0x8c && offsetof(ButtonHelpPanel, touches) == 0x494 &&
    offsetof(ButtonHelpPanel, mode) == 0x4c8 ? 1 : -1];

struct ButtonHelpRef {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ButtonHelpPanel *panel;
};

extern "C" {

extern ButtonHelpRef g_buttonHelp;

void spriteStartAnimationByIndex(ButtonHelpPart *part, s32 hidden);
void ifTouchDecrementTimer(void);
void timerStart(ButtonHelpPart *part, s32 kind, s32 arg);
void FUN_002a9fdc(ButtonHelpPart *part, s32 arg1, s32 arg2);

/* Hide the button help panel: hide its buttons, drop (or just count down) its touch regions, close its arrows. */
void FUN_00289c98(s32 clearTouches)
{
    ButtonHelpPanel *panel = g_buttonHelp.panel;
    for (s32 i = 0; i < 6; ++i) {
        spriteStartAnimationByIndex(&panel->buttons[i], 1);
        if (panel->touches[i].active) {
            if (clearTouches) {
                panel->touches[i].active = 0;
            }
            ifTouchDecrementTimer();
        }
    }
    for (s32 i = 0; i < 2; ++i) {
        if (panel->mode == 1) {
            timerStart(&panel->arrows[i], 3, 0);
        } else {
            FUN_002a9fdc(&panel->arrows[i], 0, 1);
        }
    }
    g_buttonHelp.panel->frame = 0;
    g_buttonHelp.panel->state = 3;
}

} /* extern "C" */
