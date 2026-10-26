#include "common.h"

extern "C" {

void sysPlaySe(u32 seId);
void buttonHelpSetText(s32 screen, u32 color);
s32 FUN_002ebce4(void);
void screenStartOrClear(u32 screen, s32 clear);

typedef struct {
    u8 unk0[4];
    u8 mode;        /* 0x004 */
    u8 subMode;     /* 0x005 */
    u8 unk6[0xc - 0x6];
    u32 screen;     /* 0x00c */
    u8 unk10[0x104 - 0x10];
    u8 altSe;       /* 0x104 */
    u8 unk105[0x108 - 0x105];
    s32 muted;      /* 0x108 */
} ModeSwitcher;

/* Enters `mode`: plays the matching sound effect and restarts the screen, or fades it for modes 0, 1 and 8. */
void FUN_004029f4(ModeSwitcher *self, u32 mode, u8 subMode)
{
    u32 fadeColor = 0xf4f4f4ff;
    u32 se;
    s32 clear;

    self->mode = mode;
    self->subMode = subMode;
    se = 0x100;
    clear = 0;
    switch (mode) {
    case 4:
    case 5:
    case 6:
    case 7:
        if (self->muted != 0) {
            se = 0xff;
        } else {
            se = self->altSe != 0 ? 0x102 : 0x101;
        }
        clear = 1;
        break;
    case 0:
    case 1:
    case 8:
        buttonHelpSetText(0, fadeColor);
        return;
    }
    sysPlaySe(se);
    if (FUN_002ebce4() != 0) {
        screenStartOrClear(self->screen, clear);
    }
}

} /* extern "C" */
