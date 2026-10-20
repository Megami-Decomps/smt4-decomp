#include "shard/Shard0031.h"

extern "C" {

extern ScreenRef g_buttonHelp;

/* Entry `index` of the screen object's entry table. */
ScreenEntry *screenGetEntry(s32 index)
{
    ScreenObj *screen = g_buttonHelp.instance;

    return screen->entries + index;
}

} /* extern "C" */
