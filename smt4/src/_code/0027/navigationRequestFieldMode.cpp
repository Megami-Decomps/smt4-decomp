#include "mapnavi/NaviMainGlobals.h"
extern "C" {
void requestBeginProcessing(void *field,s8 mode,u32 value);
/* Forward an optional navigation request with a signed-byte mode. */
void navigationRequestFieldMode(s32 mode,u32 value) { if (g_naviMain!=NULL) requestBeginProcessing(g_naviMain->settings,(s8)mode,value); }
}
