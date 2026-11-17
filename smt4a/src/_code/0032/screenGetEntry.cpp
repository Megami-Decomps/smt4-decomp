#include "ui/ButtonHelpGlobal.h"
#include "shard/Shard0031.h"

extern "C" {

/* Help text line `index`. */
ButtonHelpTextLine *screenGetEntry(s32 index)
{
    ButtonHelpWorkA *screen = g_buttonHelp.work;

    return screen->text.lines + index;
}

} /* extern "C" */
