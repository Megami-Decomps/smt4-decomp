#include "ui/ButtonHelpGlobal.h"

extern "C" {

/* Value of slot `index` (0-5), or 0 when out of range. */
u16 buttonHelpGetEntryValue(u32 index)
{
    u16 value;

    if (index >= 6) {
        value = 0;
    } else {
        ButtonHelpWork *work = g_buttonHelp.work;

        value = work->slots[index].value;
    }
    return value;
}

} /* extern "C" */
