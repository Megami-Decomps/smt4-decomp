#include "common.h"
extern "C" {
s32 buttonHelpIsActionActive(u32 button);
s32 padButtonIsPressed(u32 button);
/* Test both input sources without short-circuiting either query. */
s32 inputIsQuestMenuPressed(void) { s32 result=0; if (buttonHelpIsActionActive(2)!=0) result=1; if (padButtonIsPressed(1)!=0) result=1; return result; }
}
