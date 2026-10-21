#include "shard/W4_W4Match2_UiQuest.h"

extern "C" {
/* Tests whether the quest menu state exists. */
s32 uiQuestIsCreated(void)
{
    return g_uiQuest != NULL;
}
}
