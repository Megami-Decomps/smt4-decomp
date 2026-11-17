#include "ui/ButtonHelpGlobal.h"

extern "C" {

s32 scrScriptProcessStartEntry(ScriptProcess *process, u32 request);

/* Returns whether scrScriptProcessStartEntry accepts `request` for the record's handle at 0x680. */
u8 buttonHelpScriptStart(u32 request)
{
    s32 accepted;

    accepted = scrScriptProcessStartEntry(g_buttonHelp.work->scriptProcess, request);
    return accepted != 0;
}

} /* extern "C" */
