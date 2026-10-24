/* NON_MATCHING: the clearing loop copies the two empty handlers with vldm/vstr (retail) instead of ldrd/strd, and keeps its pool base differently */
#include "common.h"

/* A state callback and its argument; the menu keeps two banks of 22 of them. */
struct MenuStateHandler {
    void (*func)(...);
    u32 arg;
};

struct MenuStateTable {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ MenuStateHandler states[22];
    /* 0xD4 */ MenuStateHandler exitStates[22];
};

extern "C" {
/* Initial handler images: [0] and [1] are the empty entries, the rest are the state handlers. */
extern const MenuStateHandler g_equipMenuStateHandlerInit[];

/* Resets both handler banks, then installs the state handlers. */
void FUN_0049a8b8(MenuStateTable *menu)
{
    for (s32 i = 0; i < 22; ++i) {
        menu->states[i] = g_equipMenuStateHandlerInit[0];
        menu->exitStates[i] = g_equipMenuStateHandlerInit[1];
    }
    menu->states[0] = g_equipMenuStateHandlerInit[2];
    menu->states[1] = g_equipMenuStateHandlerInit[3];
    menu->states[2] = g_equipMenuStateHandlerInit[4];
    menu->states[3] = g_equipMenuStateHandlerInit[5];
    menu->states[4] = g_equipMenuStateHandlerInit[6];
    menu->states[5] = g_equipMenuStateHandlerInit[7];
    menu->states[6] = g_equipMenuStateHandlerInit[8];
    menu->states[7] = g_equipMenuStateHandlerInit[9];
    menu->states[8] = g_equipMenuStateHandlerInit[10];
    menu->states[9] = g_equipMenuStateHandlerInit[11];
    menu->states[10] = g_equipMenuStateHandlerInit[12];
    menu->states[11] = g_equipMenuStateHandlerInit[13];
    menu->states[12] = g_equipMenuStateHandlerInit[13];
    menu->states[13] = g_equipMenuStateHandlerInit[13];
    menu->states[14] = g_equipMenuStateHandlerInit[14];
    menu->states[20] = g_equipMenuStateHandlerInit[15];
    menu->states[15] = g_equipMenuStateHandlerInit[16];
    menu->states[16] = g_equipMenuStateHandlerInit[17];
    menu->states[17] = g_equipMenuStateHandlerInit[18];
    menu->states[18] = g_equipMenuStateHandlerInit[19];
    menu->states[19] = g_equipMenuStateHandlerInit[20];
}
}
