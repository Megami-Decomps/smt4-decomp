#include "common.h"
extern "C" {
s32 FUN_0026ee68(u32 button);
s32 padIsButtonPressed(u32 button);
/* Test both input sources without short-circuiting either query. */
s32 inputIsQuestCancelPressed(void) { s32 result=0; if (FUN_0026ee68(3)!=0) result=1; if (padIsButtonPressed(9)!=0) result=1; return result; }
}
