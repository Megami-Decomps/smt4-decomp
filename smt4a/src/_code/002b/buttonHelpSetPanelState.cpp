#include "ui/ButtonHelp.h"
#include "code/Code002b_Smt4a.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

/* Stores `value` in the byte at 0x5E1 of the record at 0x57F0C4. */
void buttonHelpSetPanelState(u8 value)
{
    g_buttonHelp.work->panelState = value;
}

} /* extern "C" */
