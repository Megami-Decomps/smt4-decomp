#include "common.h"
extern "C" {
struct NavigationField { u8 unk00[0x40]; u8 field[1]; };
extern NavigationField *g_naviMain;
void naviSetDisplayFlag(void *field,u32 value);
/* Apply a value to the navigation field when navigation work exists. */
void navigationApplyOptionalValue(u32 value) { if (g_naviMain!=NULL) naviSetDisplayFlag(g_naviMain->field,value); }
}
