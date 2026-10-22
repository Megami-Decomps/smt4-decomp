#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

u8 buttonHelpIsNotActive(void)
{
    return g_buttonHelp.work->state != 1;
}

} /* extern "C" */
