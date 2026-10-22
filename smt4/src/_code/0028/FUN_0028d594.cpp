#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

/* Reads the current signed status byte. */
s32 FUN_0028d594(void)
{
    return g_buttonHelp.work->unk4CB;
}
}
