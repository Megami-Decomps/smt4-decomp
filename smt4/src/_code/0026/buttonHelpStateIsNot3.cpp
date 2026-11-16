#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

u8 buttonHelpStateIsNot3(void)
{
    return g_buttonHelp.work->state != 3;
}

} /* extern "C" */
