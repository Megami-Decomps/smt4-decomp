#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

s32 scrScriptProcessStartEntry(u32 handle, u32 request);

/* Returns whether scrScriptProcessStartEntry accepts `request` for the record's handle at 0x680. */
u8 buttonHelpScriptStart(u32 request)
{
    s32 accepted;

    accepted = scrScriptProcessStartEntry(g_buttonHelp.work->process, request);
    return accepted != 0;
}

} /* extern "C" */
