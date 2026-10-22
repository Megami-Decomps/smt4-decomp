#include "common.h"
extern "C" {
s32 buttonHelpHasEnabledEntryForId(u32 button);
s32 padIsButtonPressed(u32 button);
/* Test both input sources without short-circuiting either query. */
s32 inputIsQuestConfirmPressed(void) { s32 result=0; if (buttonHelpHasEnabledEntryForId(4)!=0) result=1; if (padIsButtonPressed(10)!=0) result=1; return result; }
}
