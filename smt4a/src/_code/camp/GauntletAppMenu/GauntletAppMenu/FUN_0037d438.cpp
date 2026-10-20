#include "common.h"

extern "C" {

typedef struct MenuPart0037d438 {
    /* 0x00 */ u8 unk00[0xb4];
    /* 0xb4 */ u8 flags[4];
} MenuPart0037d438;

typedef struct GauntletMenu0037d438 {
    /* 0x000 */ u8 unk000[0x200];
    /* 0x200 */ MenuPart0037d438 part;
} GauntletMenu0037d438;

extern GauntletMenu0037d438 *g_gauntletAppMenu;

/* Returns 0 when none of the four flag bytes is set, 1 otherwise. */
u32 FUN_0037d438(void)
{
    MenuPart0037d438 *part = &g_gauntletAppMenu->part;

    if (part->flags[0] == 0 && part->flags[1] == 0 && part->flags[2] == 0 && part->flags[3] == 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
