#include "common.h"

extern "C" {

typedef struct PanelButton {
    u8 data[0x8C]; /* 0x00 */
} PanelButton;

typedef struct Panel {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ PanelButton buttons[5];
    /* 0x2DC */ u8 unk2DC[0x14];
    /* 0x2F0 */ u32 layout;
    /* 0x2F4 */ u8 unk2F4[4];
    /* 0x2F8 */ s32 count;
} Panel;

extern void pairSetFirstResetSecond(PanelButton *button, s32 value);
extern void FUN_00295eb0(PanelButton *button, s32 a, s32 b);
extern void FUN_002bee58(PanelButton *button, s32 mode);

/* Sets up the panel's buttons for the layout selected in `layout` (1..19). */
void panelSetupButtons(Panel *panel)
{
    s32 i;

    switch (panel->layout) {
    case 1:
    case 8:
        FUN_002bee58(&panel->buttons[0], 2);
        break;
    case 2:
        FUN_002bee58(&panel->buttons[0], 2);
        FUN_002bee58(&panel->buttons[1], 3);
        break;
    case 3:
        FUN_002bee58(&panel->buttons[0], 4);
        FUN_002bee58(&panel->buttons[1], 5);
        break;
    case 4:
        FUN_002bee58(&panel->buttons[0], 2);
        for (i = 0; i < 4; i++) {
            pairSetFirstResetSecond(&panel->buttons[1 + i], 0x4269 + i);
            FUN_002bee58(&panel->buttons[1 + i], 6);
        }
        break;
    case 5:
        pairSetFirstResetSecond(&panel->buttons[1], 0x59D9);
        pairSetFirstResetSecond(&panel->buttons[2], 0x59DA);
        FUN_00295eb0(&panel->buttons[1], 0x18, 0x59DB);
        FUN_00295eb0(&panel->buttons[2], 0x18, 0x59DB);
        FUN_002bee58(&panel->buttons[1], 7);
        FUN_002bee58(&panel->buttons[2], 8);
        break;
    case 6:
        pairSetFirstResetSecond(&panel->buttons[1], 0x7149);
        FUN_002bee58(&panel->buttons[0], 2);
        FUN_002bee58(&panel->buttons[1], 9);
        break;
    case 7:
        pairSetFirstResetSecond(&panel->buttons[1], 0x130B1);
        FUN_002bee58(&panel->buttons[0], 2);
        FUN_002bee58(&panel->buttons[1], 10);
        break;
    case 9:
        pairSetFirstResetSecond(&panel->buttons[1], panel->count * 1000 + 1);
        FUN_002bee58(&panel->buttons[0], 2);
        FUN_002bee58(&panel->buttons[1], 11);
        break;
    case 10:
    case 14:
        pairSetFirstResetSecond(&panel->buttons[1], panel->count * 1000 + 1);
        FUN_002bee58(&panel->buttons[0], 2);
        FUN_002bee58(&panel->buttons[1], 2);
        break;
    case 11:
        pairSetFirstResetSecond(&panel->buttons[1], panel->count * 1000 + 1);
        FUN_002bee58(&panel->buttons[0], 2);
        FUN_002bee58(&panel->buttons[1], 12);
        break;
    case 12:
        FUN_002bee58(&panel->buttons[0], 2);
        FUN_002bee58(&panel->buttons[1], 2);
        FUN_002bee58(&panel->buttons[2], 13);
        break;
    case 13:
        FUN_002bee58(&panel->buttons[0], 2);
        FUN_002bee58(&panel->buttons[1], 15);
        break;
    case 15:
        pairSetFirstResetSecond(&panel->buttons[1], panel->count * 1000);
        FUN_002bee58(&panel->buttons[0], 2);
        FUN_002bee58(&panel->buttons[1], 16);
        break;
    case 16:
        FUN_002bee58(&panel->buttons[0], 2);
        FUN_002bee58(&panel->buttons[1], 2);
        FUN_002bee58(&panel->buttons[2], 14);
        break;
    case 17:
        FUN_002bee58(&panel->buttons[0], 2);
        FUN_002bee58(&panel->buttons[1], 17);
        break;
    case 18:
        pairSetFirstResetSecond(&panel->buttons[1], 0x67071);
        FUN_002bee58(&panel->buttons[0], 2);
        FUN_002bee58(&panel->buttons[1], 18);
        break;
    case 19:
        FUN_002bee58(&panel->buttons[0], 19);
        break;
    }
}

} /* extern "C" */
