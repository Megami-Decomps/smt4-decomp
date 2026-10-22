#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

/* Returns whether the state word at 0x10 of the record at 0x57F0C4 is not 3. */
u8 FUN_002e19f8(void)
{
    return g_buttonHelp.work->state != 3;
}

} /* extern "C" */
