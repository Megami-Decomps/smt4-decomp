/* NON_MATCHING: retail recomputes the panel address (add r0,r4,#9216; add r0,r0,#188) for the second call instead of keeping it in a register */
#include "common.h"

extern "C" {

typedef struct BtlUiPanel004ab854 {
    /* 0x00 */ u8 unk00[4];
} BtlUiPanel004ab854;

typedef struct BtlUiMenu004ab854 {
    /* 0x0000 */ u8 unk0000[0x24b4];
    /* 0x24b4 */ BtlUiPanel004ab854 panel;
} BtlUiMenu004ab854;

typedef struct BtlUiWorkspace004ab854 {
    /* 0x0000 */ u8 unk0000[8];
    /* 0x0008 */ BtlUiMenu004ab854 menu;
} BtlUiWorkspace004ab854;

typedef struct BtlUi004ab854 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ BtlUiWorkspace004ab854 *workspace;
} BtlUi004ab854;

s32 menu32ModeIsNot5(BtlUiMenu004ab854 *menu);
s32 FUN_00280030(BtlUiPanel004ab854 *panel);
void uiWorkEndState1(BtlUiMenu004ab854 *menu);
void owner2DCInitSub(BtlUiPanel004ab854 *panel);

extern BtlUi004ab854 g_btlUi; /* 0x57a9b8 */

/* When the menu is not in mode 5 and the panel accepts, runs the menu step and initialises the panel. */
void btlUiPanelStart(void)
{
    BtlUiWorkspace004ab854 *workspace = g_btlUi.workspace;

    if (menu32ModeIsNot5(&workspace->menu) != 0 && FUN_00280030(&workspace->menu.panel) != 0) {
        uiWorkEndState1(&workspace->menu);
        owner2DCInitSub(&workspace->menu.panel);
    }
}

} /* extern "C" */
