#include "status/StatusDown.h"
#include "shard/Shard003A.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

void FUN_003a7b2c(void)
{
    if (g_statusDown != NULL) {
        g_statusDown->unk2584 = 0;
    }
}

} /* extern "C" */
