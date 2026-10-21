#include "shard/Shard0035.h"

extern "C" {

extern StateHolder4 *g_uiQuest;

u8 uiQuestIsCreated(void)
{
    return g_uiQuest != NULL;
}

} /* extern "C" */
