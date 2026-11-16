#include "common.h"
extern "C" {
s32 buttonHelpIsActionActive(u32 button);
s32 padButtonIsPressed(u32 button);
/* Test both input sources without short-circuiting either query. */
s32 inputIsQuestCancelPressed(void) { s32 result=0; if (buttonHelpIsActionActive(3)!=0) result=1; if (padButtonIsPressed(9)!=0) result=1; return result; }
}
