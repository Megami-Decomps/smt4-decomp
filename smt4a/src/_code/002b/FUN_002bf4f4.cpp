#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

/* Stores `value` in the byte at 0x5E1 of the record at 0x57F0C4. */
void FUN_002bf4f4(u8 value)
{
    g_buttonHelp.work->panelState = value;
}

} /* extern "C" */
