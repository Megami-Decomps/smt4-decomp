#include "ui/ButtonHelpGlobal.h"

extern "C" {

/* Kind of slot `index` (0-5), or 0. */
u8 buttonHelpGetSlotByte(u32 index)
{
    ButtonHelpWork *work = g_buttonHelp.work;

    if (work != NULL && index < 6) {
        return work->slots[index].kind;
    }
    return 0;
}

} /* extern "C" */
