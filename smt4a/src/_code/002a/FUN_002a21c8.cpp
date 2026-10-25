#include "ui/ButtonHelp.h"
#include "AsdSDK/Source/Util/AsdListBox.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

/* Returns whether the state word at 0x10 of the record at 0x57F0C4 is 2. */
u8 FUN_002a21c8(void)
{
    return g_buttonHelp.work->state == 2;
}

} /* extern "C" */
