#include "status/StatusDownA.h"
#include "shard/Shard003B.h"

extern "C" {

void FUN_003b0744(void)
{
    if (g_statusDown != NULL) {
        g_statusDown->unk24A9 = 1;
    }
}

} /* extern "C" */
