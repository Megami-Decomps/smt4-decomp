#include "common.h"
struct BattleScreen {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u8 menu;
    /* 0x9 */ u8 unk9[9395];
    /* 0x24BC */ u8 section;
};
struct BattleUi {u8 unk00[16];BattleScreen *screen;};
extern "C" {
extern BattleUi g_btlUi;int menu32ModeIsNot6(void*);int FUN_0039ebcc(void*);
/* Tests the active menu mode and the section's readiness. */
int FUN_004abb54(){BattleScreen *screen=g_btlUi.screen;return menu32ModeIsNot6(&screen->menu)!=0 && FUN_0039ebcc(&screen->section)!=0;}
}
