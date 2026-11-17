#include "mapnavi/NaviMainGlobals.h"
extern "C" {
void FUN_0039c57c(void *field,u32 value);
/* Store navigation arguments and notify the field controller. */
void navigationApplyArguments(u32 first,u32 second,u32 third) { g_naviMain->third=third; g_naviMain->posX=first; g_naviMain->posY=second; FUN_0039c57c(g_naviMain->state,third); }
}
