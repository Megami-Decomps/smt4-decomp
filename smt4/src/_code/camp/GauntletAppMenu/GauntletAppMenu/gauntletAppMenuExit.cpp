/* Gauntlet app menu: the exit step, which ends the menu's worker and returns 0. */
#include "common.h"
#include "camp/GauntletAppMenu/GauntletAppMenu.h"

extern "C" {

int FUN_002c18e4(u32 handle);
int FUN_002c198c(u32 handle);
int FUN_002c1b64(u32 handle, int arg);
int FUN_0033149c(GauntletAppMenuWork *menu);

extern GauntletAppMenuWork *g_gauntletAppMenu;
extern u32 g_titleScene;

u32 gauntletAppMenuExit(void)
{
    GauntletAppMenuWork *menu = g_gauntletAppMenu;

    FUN_002c1b64(g_titleScene, 0);
    FUN_0033149c(menu);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
    return 0;
}

} /* extern "C" */
