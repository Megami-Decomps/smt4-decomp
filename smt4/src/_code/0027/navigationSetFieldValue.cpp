#include "common.h"
extern "C" {
struct NavigationValue { u8 unk00[0x40]; u32 value; };
extern NavigationValue *g_naviMain;
void categoryListBuildUnique(u32 *field,u32 value);
static __inline void navigationApplyValue(NavigationValue *navigation, u32 value) { categoryListBuildUnique(&navigation->value, value); }
/* Apply a value through the navigation field controller. */
void navigationSetFieldValue(u32 value) { navigationApplyValue(g_naviMain, value); }
}
