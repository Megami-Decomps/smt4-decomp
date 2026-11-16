#include "shard/W4_W4Match2_UiQuest.h"

extern "C" {

s32 rosterGetLeaderId();
/* Processes the pending quest UI update. */
s32 uiQuestProcessPendingUpdate()
{
    if (g_uiQuest->panel.detailMode)
        return 0;
    return rosterGetLeaderId();
}
}
