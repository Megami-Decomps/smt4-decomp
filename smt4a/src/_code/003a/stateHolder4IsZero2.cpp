#include "shard/Shard003A.h"

extern "C" {

extern StateHolder4 *g_uiQuest;

u8 stateHolder4IsZero2(void)
{
    return g_uiQuest->state == 0;
}

} /* extern "C" */
