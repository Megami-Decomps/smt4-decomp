#include "shard/Shard0033.h"

extern "C" {

extern MessageGlobalsA g_messageMain;

u8 FUN_003311b8(void)
{
    return g_messageMain.panel->unk8F != 0;
}

} /* extern "C" */
