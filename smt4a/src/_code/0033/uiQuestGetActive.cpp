#include "shard/W5_W5Match7_UiQuest.h"

extern "C" {

s32 uiQuestGetActive(void)
{
    return g_uiQuest->active;
}

} /* extern "C" */
