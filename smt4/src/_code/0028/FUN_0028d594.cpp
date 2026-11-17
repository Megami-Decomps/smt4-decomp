#include "ui/ButtonHelpGlobal.h"

extern "C" {

/* Reads the current signed status byte. */
s32 FUN_0028d594(void)
{
    return g_buttonHelp.work->textVisible;
}
}
