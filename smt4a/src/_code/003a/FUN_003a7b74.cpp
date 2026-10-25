#include "status/StatusDown.h"
#include "shard/Shard003A.h"
#include "util/FUN_00333dc8.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

u32 FUN_003a7b74(void)
{
    return g_statusDown->unk654;
}

} /* extern "C" */
