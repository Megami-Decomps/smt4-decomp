#include "ui/ButtonHelpGlobal.h"
#include "test/BustupViewer.h"

extern "C" {

/* Returns whether the state word at 0x10 of the record at 0x57F0C4 is not 3. */
u8 buttonHelpStateIsNot3(void)
{
    return g_buttonHelp.work->state != 3;
}

} /* extern "C" */
