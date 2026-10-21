#include "shard/W4_W4Match2_UiQuest.h"

extern "C" {
/* Reads the quest panel's signed status byte. */
s32 FUN_002cf768(void)
{
    return (s8)g_uiQuest->panel.unkC5[2];
}
}
