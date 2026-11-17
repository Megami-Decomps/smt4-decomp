#include "ui/ButtonHelpGlobal.h"

extern "C" {

u8 buttonHelpStateIsNot3(void)
{
    return g_buttonHelp.work->state != 3;
}

} /* extern "C" */
