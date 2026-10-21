#include "common.h"
extern "C" {
struct NavigationField { u8 unk00[12]; u32 first,second,third; u8 unk18[0x28]; u8 field[1]; };
extern NavigationField *g_naviMain;
void FUN_0039c57c(void *field,u32 value);
/* Store navigation arguments and notify the field controller. */
void navigationApplyArguments(u32 first,u32 second,u32 third) { g_naviMain->third=third; g_naviMain->first=first; g_naviMain->second=second; FUN_0039c57c(g_naviMain->field,third); }
}
