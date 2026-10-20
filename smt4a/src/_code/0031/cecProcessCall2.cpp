#include "shard/Shard0031.h"

extern "C" {

extern CecProcess *g_cecProcess;
extern void FUN_00358fbc(u32 handle);

void cecProcessCall2(void)
{
    if (g_cecProcess != NULL) {
        FUN_00358fbc(g_cecProcess->handle);
    }
}

} /* extern "C" */
