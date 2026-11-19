#include "shard/W4_W4Match2_UiQuest.h"

extern "C" {

u8 stateHolder4IsD(void)
{
    return g_uiQuest->state == 0xd;
}

} /* extern "C" */
