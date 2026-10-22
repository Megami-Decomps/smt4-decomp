#include "shard/W5_W5Match7_UiQuest.h"

extern "C" {

s32 uiQuestGetMode(void)
{
    return g_uiQuest->mode;
}

} /* extern "C" */
