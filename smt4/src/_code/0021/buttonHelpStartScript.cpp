#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

extern int scrScriptProcessStartEntry(u32 a, u32 b);

u8 buttonHelpStartScript(u32 value)
{
    return scrScriptProcessStartEntry(g_buttonHelp.work->unk560, value) != 0;
}

} /* extern "C" */
