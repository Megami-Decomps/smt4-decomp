/* Frees the Gauntlet app menu's resources and work area. */
#include "common.h"
#include "camp/GauntletAppMenu/GauntletAppMenu.h"

extern "C" {

int FUN_001add24(int id);
int scrScriptProcessDestroy(u32 handle);
int asdMemFree(void *ptr);               /* heap free */

extern GauntletAppMenuWork *g_gauntletAppMenu;

void gauntletAppMenuDestroy(void)
{
    GauntletAppMenuWork *menu = g_gauntletAppMenu;

    scrScriptProcessDestroy(menu->handle);
    asdMemFree(menu->heapB);
    asdMemFree(menu->heapA);
    FUN_001add24(0xd);
    asdMemFree(g_gauntletAppMenu);
    g_gauntletAppMenu = NULL;
}

} /* extern "C" */
