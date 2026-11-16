#include "common.h"
extern "C" {
s32 buttonHelpIsActionActive(u32 button);
s32 padButtonRepeat(u32 button);
/* Test both input-repeat sources without short-circuiting either query. */
s32 inputIsQuestRepeatRight(void) { s32 result=0; if (buttonHelpIsActionActive(5)!=0) result=1; if (padButtonRepeat(8)!=0) result=1; return result; }
}
