#include "shard/Shard0035.h"

extern "C" {

extern StateHolder4 *g_uiQuest;

u8 stateHolder4IsD(void)
{
    return g_uiQuest->state == 0xD;
}

} /* extern "C" */
