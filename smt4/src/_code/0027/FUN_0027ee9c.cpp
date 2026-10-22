#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
s32 buttonHelpHasEnabledEntryForId(u32 kind);
s32 padIsButtonPressed(u32 button);
s32 FUN_0027ee9c(void)
{
    s32 result = 0;
    if (buttonHelpHasEnabledEntryForId(1) != 0) { result = 1; }
    if (padIsButtonPressed(0) != 0) { result = 1; }
    return result;
}
}
