#include "common.h"
extern "C" {
s32 buttonHelpHasEnabledEntryForId(u32 button);
s32 padIsButtonRepeat(u32 button);
/* Test both input-repeat sources without short-circuiting either query. */
s32 inputIsQuestRepeatLeft(void) { s32 result=0; if (buttonHelpHasEnabledEntryForId(6)!=0) result=1; if (padIsButtonRepeat(7)!=0) result=1; return result; }
}
