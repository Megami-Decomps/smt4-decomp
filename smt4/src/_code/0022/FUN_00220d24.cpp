#include "ui/ButtonHelpGlobal.h"
#include "status/StatusCamera.h"

extern "C" {

void FUN_00220d24(u8 value)
{
    g_buttonHelp.work->text.useDirectoryText = value;
}

} /* extern "C" */
