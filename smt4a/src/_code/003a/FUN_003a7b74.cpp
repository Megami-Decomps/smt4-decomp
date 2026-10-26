#include "status/StatusDown.h"
#include "shard/Shard003A.h"
#include "code/Code0033.h"
#include "code/Code003a.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

u32 FUN_003a7b74(void)
{
    return g_statusDown->unk654;
}

} /* extern "C" */
