#include "shard/Shard0035.h"

extern "C" {

extern CecProcess *g_cecProcess;
extern u32 FUN_004bb31c(u32 handle);

void cecProcessCall4(void)
{
    if (g_cecProcess != NULL) {
        FUN_004bb31c(g_cecProcess->handle);
    }
}

} /* extern "C" */
