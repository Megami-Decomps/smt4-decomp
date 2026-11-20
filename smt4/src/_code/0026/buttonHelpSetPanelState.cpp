#include "ui/ButtonHelpGlobal.h"

extern "C" {

void buttonHelpSetPanelState(u8 value)
{
    g_buttonHelp.work->panelState = value;
}

} /* extern "C" */
