#include "shard/W5_W5Match2_NavigationArgs.h"
extern "C" {
extern NavigationArguments *g_naviMain;
/* Store the navigation request arguments and scalar value. */
void navigationSetArguments(u32 first,u32 second,u32 third,f32 value) { g_naviMain->first=first; g_naviMain->second=second; g_naviMain->third=third; g_naviMain->value=value; }
}
