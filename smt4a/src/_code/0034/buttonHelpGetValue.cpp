#include "ui/ButtonHelpGlobal.h"

extern "C" {

/* The button help's previous preset, or 0 without a button help. */
u32 buttonHelpGetValue(void)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    return work != NULL ? work->previousPreset : 0;
}

} /* extern "C" */
