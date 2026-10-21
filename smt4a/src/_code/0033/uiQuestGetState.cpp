#include "shard/W5_W5Match7_UiQuest.h"

extern "C" {



s32 uiQuestGetState(void)
{
    return g_uiQuest->state;
}

} /* extern "C" */
