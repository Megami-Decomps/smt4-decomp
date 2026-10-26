#include "shard/NaviMain.h"

extern "C" {
extern NaviMainA *g_naviMain;
void FUN_0048b86c(NaviTransitionState *navigation, u32 argument);

// Forward `argument` to the navigation menu's transition state when the menu exists.
void FUN_00379c08(u32 argument)
{
    if (g_naviMain != NULL)
        FUN_0048b86c(&g_naviMain->transition, argument);
}
}
