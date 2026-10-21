#include "shard/W5_W5Match7_UiQuest.h"

extern "C" {



s32 uiQuestGetStep(void)
{
    return g_uiQuest->step;
}

} /* extern "C" */
