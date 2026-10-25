#include "shard/W4_W4Match2_UiQuest.h"
#include "shard/FUN_00241990.h"

extern "C" {

u8 FUN_00241990(void)
{
    return g_uiQuest->state == 0;
}

} /* extern "C" */
