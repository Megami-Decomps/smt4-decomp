#include "ui/ButtonHelpGlobal.h"
#include "script/ScriptEntry.h"

extern "C" {


u8 buttonHelpStartScript(u32 value)
{
    return scrScriptProcessStartEntry(g_buttonHelp.work->scriptProcess, value) != 0;
}

} /* extern "C" */
