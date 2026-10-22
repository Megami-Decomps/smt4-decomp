#include "common.h"
extern "C" {
s32 buttonHelpHasEnabledEntryForId(u32 button);
s32 padIsButtonPressed(u32 button);
/* Test both input sources without short-circuiting either query. */
s32 inputIsQuestMenuPressed(void) { s32 result=0; if (buttonHelpHasEnabledEntryForId(2)!=0) result=1; if (padIsButtonPressed(1)!=0) result=1; return result; }
}
