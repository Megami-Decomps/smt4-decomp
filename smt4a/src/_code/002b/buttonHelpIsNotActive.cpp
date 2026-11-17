#include "ui/ButtonHelpGlobal.h"

extern "C" {

/* Returns whether the state word at 0x10 of the record at 0x57F0C4 is not 1. */
u8 buttonHelpIsNotActive(void)
{
    return g_buttonHelp.work->state != 1;
}

} /* extern "C" */
