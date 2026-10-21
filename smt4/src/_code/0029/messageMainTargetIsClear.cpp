#include "shard/Sys43e188.h"

extern "C" {

u8 messageMainTargetIsClear(void)
{
    return g_messageMain.target->unk7C == 0;
}

} /* extern "C" */
