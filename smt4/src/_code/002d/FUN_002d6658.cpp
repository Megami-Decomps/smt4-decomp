#include "ui/ButtonHelpGlobal.h"

extern "C" {

void FUN_002d6658(u8 value)
{
    g_buttonHelp.work->drawEnabled = value;
}

} /* extern "C" */
