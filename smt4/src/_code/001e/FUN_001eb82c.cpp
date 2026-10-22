#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

u8 FUN_001eb82c(void)
{
    return g_buttonHelp.work->state == 2;
}

} /* extern "C" */
