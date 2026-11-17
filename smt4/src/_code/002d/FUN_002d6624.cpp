#include "ui/ButtonHelpGlobal.h"

extern "C" {

u16 FUN_002d6624(u32 index)
{
    ButtonHelpWork *obj = g_buttonHelp.work;

    if ((obj != NULL) && (index < 6)) {
        return obj->slots[index].value;
    }
    return 0;
}

} /* extern "C" */
