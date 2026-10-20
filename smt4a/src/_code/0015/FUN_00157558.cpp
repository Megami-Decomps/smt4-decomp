#include "common.h"

extern "C" {

typedef struct Panel {
    /* 0x0000 */ u8 unk0000[0x52C];
    /* 0x052C */ u32 mode;
    /* 0x0530 */ u32 handle;
    /* 0x0534 */ u8 state[0xC4];
    /* 0x05F8 */ u8 shownMode;
    /* 0x05F9 */ u8 unk05F9[3];
    /* 0x05FC */ u8 areaA[0x40];
    /* 0x063C */ u8 areaB[0x40];
    /* 0x067C */ u8 unk067C[0xB1C];
    /* 0x1198 */ u8 target[1];
} Panel;

int FUN_00187a84(Panel *panel, void *area, s32 arg, void *state);
int FUN_00187d90(u32 handle, void *target);

/* Switches the panel to the display area for its mode (modes 0 and 1 use area A, mode 2 uses area B)
 * and records the mode shown. */
void FUN_00157558(Panel *panel)
{
    void *area = NULL;
    u8 shown;

    switch (panel->mode) {
    case 0:
    case 1:
        shown = 1;
        area = panel->areaA;
        break;
    case 2:
        shown = 2;
        area = panel->areaB;
        break;
    default:
        shown = 0;
        break;
    }
    if (panel->shownMode != shown) {
        FUN_00187a84(panel, area, 0, panel->state);
        FUN_00187d90(panel->handle, panel->target);
        panel->shownMode = shown;
    }
}

} /* extern "C" */
