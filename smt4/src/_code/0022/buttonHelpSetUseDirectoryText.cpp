#include "ui/ButtonHelpGlobal.h"
#include "status/StatusCamera.h"

extern "C" {

void buttonHelpSetUseDirectoryText(u8 value)
{
    g_buttonHelp.work->text.useDirectoryText = value;
}

} /* extern "C" */
