#include "shard/W4_W4Match2_UiQuest.h"

extern "C" {
/* Reads a signed quest panel flag. */
s32 uiQuestGetPendingChangeFlag(void)
{
    return (s8)g_uiQuest->panelView.panel.unkF4;
}
}
