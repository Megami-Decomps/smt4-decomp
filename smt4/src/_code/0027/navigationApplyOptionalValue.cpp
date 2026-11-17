#include "mapnavi/NaviMainGlobals.h"
extern "C" {
void naviSetDisplayFlag(void *field,u32 value);
/* Apply a value to the navigation field when navigation work exists. */
void navigationApplyOptionalValue(u32 value) { if (g_naviMain!=NULL) naviSetDisplayFlag(g_naviMain->state,value); }
}
