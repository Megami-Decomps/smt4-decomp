#include "ui/ButtonHelpGlobal.h"
#include "ui/UiControl.h"

extern "C" {
// Tests six enabled entries, treating IDs 8 and 9 as aliases for 4 and 3.
u32 buttonHelpHasEnabledEntryForId(u32 requestedId)
{
    ButtonHelpWork *state = g_buttonHelp.work;
    if (state != NULL) {
        for (s32 entryIndex = 0; entryIndex < 6; ++entryIndex) {
            u32 entryId = state->slots[entryIndex].kind;
            if (entryId == requestedId && state->touchSelected[entryIndex] != 0) {
                return 1;
            }

            if (entryId == 8) {
                if (requestedId == 4 && state->touchSelected[entryIndex] != 0) {
                    return 1;
                }
            } else if (entryId == 9) {
                if (requestedId == 3 && state->touchSelected[entryIndex] != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
}
