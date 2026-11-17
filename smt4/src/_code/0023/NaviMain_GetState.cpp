#include "mapnavi/NaviMainGlobals.h"
extern "C" {
/* Return the navigation screen's scalar state. */
f32 NaviMain_GetState(void) { return g_naviMain->argumentValue; }
}
