#include "shard/Sys43e188.h"

extern "C" {

u32 messageTargetGetValue(void)
{
    return g_messageMain.target->unk18;
}

} /* extern "C" */
