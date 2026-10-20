#include "shard/Shard0038.h"

extern "C" {

extern StateHolder4 *g_uiQuest;

u8 stateHolder4IsZero(void)
{
    return g_uiQuest->state == 0;
}

} /* extern "C" */
