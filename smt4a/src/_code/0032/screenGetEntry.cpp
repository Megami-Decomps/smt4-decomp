#include "ui/ButtonHelp.h"
#include "shard/Shard0031.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

/* Entry `index` of the screen object's entry table. */
ButtonHelpScreenEntry *screenGetEntry(s32 index)
{
    ButtonHelpWorkA *screen = g_buttonHelp.work;

    return screen->entries + index;
}

} /* extern "C" */
