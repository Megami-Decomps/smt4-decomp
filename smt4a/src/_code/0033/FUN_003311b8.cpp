#include "ui/MessageMainA.h"
#include "shard/Shard0033.h"

extern "C" {

u8 FUN_003311b8(void)
{
    return g_messageMain.banner->smallValue != 0;
}

} /* extern "C" */
