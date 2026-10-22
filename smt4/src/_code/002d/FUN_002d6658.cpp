#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

void FUN_002d6658(u8 value)
{
    g_buttonHelp.work->unk4C4 = value;
}

} /* extern "C" */
