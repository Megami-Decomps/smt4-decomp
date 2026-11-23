#include "mapnavi/NaviMainGlobals.h"
#include "code/Code0023_Smt4.h"
extern "C" {
/* Return the navigation screen's scalar state. */
f32 NaviMain_GetState(const void *unused) { return g_naviMain->argumentValue; }
}
