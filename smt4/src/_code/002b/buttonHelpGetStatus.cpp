#include "ui/ButtonHelpGlobal.h"

extern "C" {

/* Reads the current preset, or 0 when there is no button help. */
s32 buttonHelpGetStatus(void)
{
    return g_buttonHelp.work != NULL ? g_buttonHelp.work->preset : 0;
}
}
