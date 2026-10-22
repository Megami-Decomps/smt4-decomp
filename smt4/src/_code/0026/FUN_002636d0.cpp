#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

void FUN_002636d0(u8 value)
{
    g_buttonHelp.work->unk4C5 = value;
}

} /* extern "C" */
