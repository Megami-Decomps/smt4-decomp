#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

u8 FUN_0026b564(void)
{
    return g_buttonHelp.work->state != 3;
}

} /* extern "C" */
