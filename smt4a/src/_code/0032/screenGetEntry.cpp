#include "shard/Shard0031.h"

extern "C" {

extern ScreenRef DAT_0057f0c4;

/* Entry `index` of the screen object's entry table. */
ScreenEntry *screenGetEntry(s32 index)
{
    ScreenObj *screen = DAT_0057f0c4.instance;

    return screen->entries + index;
}

} /* extern "C" */
