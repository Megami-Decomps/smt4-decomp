#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

void FUN_00295214(u8 value)
{
    g_buttonHelp.work->unk4CB = value;
}

} /* extern "C" */
