#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

u16 FUN_002d6624(u32 index)
{
    ButtonHelpWork *obj = g_buttonHelp.work;

    if ((obj != NULL) && (index < 6)) {
        return obj->entries[index].value;
    }
    return 0;
}

} /* extern "C" */
