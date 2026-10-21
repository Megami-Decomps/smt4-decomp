/* NON_MATCHING: compiler schedules the navigation field pointer before the value move. */
#include "common.h"
extern "C" {
struct NavigationValue { u8 unk00[0x40]; u32 value; };
extern NavigationValue *g_naviMain;
void categoryListBuildUnique(u32 *field,u32 value);
/* Apply a value through the navigation field controller. */
void navigationSetFieldValue(u32 value) { categoryListBuildUnique(&g_naviMain->value,value); }
}
