#include "ui/ButtonHelp.h"
#include "status/StatusCamera.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

void FUN_00220d24(u8 value)
{
    g_buttonHelp.work->unk55C = value;
}

} /* extern "C" */
