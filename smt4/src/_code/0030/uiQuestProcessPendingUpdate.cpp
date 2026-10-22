#include "shard/W4_W4Match2_UiQuest.h"

extern "C" {

s32 FUN_002903f0();
/* Processes the pending quest UI update. */
s32 uiQuestProcessPendingUpdate()
{
    if (g_uiQuest->panel.detailMode)
        return 0;
    return FUN_002903f0();
}
}
