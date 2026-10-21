#include "common.h"
extern "C" {
s32 FUN_002e1a18(u32 button);
s32 padButtonIsPressed(u32 button);
/* Test both input sources without short-circuiting either query. */
s32 inputIsQuestConfirmPressed(void) { s32 result=0; if (FUN_002e1a18(4)!=0) result=1; if (padButtonIsPressed(10)!=0) result=1; return result; }
}
