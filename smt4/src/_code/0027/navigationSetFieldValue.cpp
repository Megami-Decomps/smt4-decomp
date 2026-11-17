#include "mapnavi/NaviMainGlobals.h"
extern "C" {
void categoryListBuildUnique(u32 *field,u32 value);
static __inline void navigationApplyValue(NaviMain *navigation, u32 value) { categoryListBuildUnique(navigation->state, value); }
/* Apply a value through the navigation field controller. */
void navigationSetFieldValue(u32 value) { navigationApplyValue(g_naviMain, value); }
}
