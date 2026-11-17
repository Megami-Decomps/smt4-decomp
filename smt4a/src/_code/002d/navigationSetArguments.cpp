#include "mapnavi/NaviMainGlobals.h"
extern "C" {
/* Store the navigation request arguments and scalar value. */
void navigationSetArguments(u32 first,u32 second,u32 third,f32 value) { g_naviMain->posX=first; g_naviMain->posY=second; g_naviMain->thirdValue=third; g_naviMain->argumentValue=value; }
}
