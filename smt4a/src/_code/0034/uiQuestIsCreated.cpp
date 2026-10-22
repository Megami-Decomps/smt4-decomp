#include "shard/W5_W5Match7_UiQuest.h"

extern "C" {


u8 uiQuestIsCreated(void)
{
    return g_uiQuest != NULL;
}

} /* extern "C" */
