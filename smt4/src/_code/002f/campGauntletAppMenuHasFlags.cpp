#include "common.h"

struct MenuPart {
    /* 0x00 */ u8 unk00[0xb4];
    /* 0xb4 */ u8 flags[4];
};

struct GauntletMenu {
    /* 0x000 */ u8 unk000[0x200];
    /* 0x200 */ MenuPart part;
};

extern "C" {
extern GauntletMenu *g_gauntletAppMenu;

/* Tests whether any of the four menu flags is set. */
u32 campGauntletAppMenuHasFlags(void)
{
    MenuPart *part = &g_gauntletAppMenu->part;
    if (part->flags[0] == 0 && part->flags[1] == 0 &&
        part->flags[2] == 0 && part->flags[3] == 0) {
        return 0;
    }
    return 1;
}
}
