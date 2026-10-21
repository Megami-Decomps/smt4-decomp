#include "shard/W4_W4Match2_UiQuest.h"

extern "C" {
/* Reads a signed quest panel flag. */
s32 FUN_002cf738(void)
{
    return (s8)g_uiQuest->panel.unkF2[2];
}
}
