#include "ui/ButtonHelpGlobal.h"

extern "C" {

extern int scrScriptProcessStartEntry(ScriptProcess *process, u32 entry);

u8 buttonHelpStartScript(u32 value)
{
    return scrScriptProcessStartEntry(g_buttonHelp.work->scriptProcess, value) != 0;
}

} /* extern "C" */
