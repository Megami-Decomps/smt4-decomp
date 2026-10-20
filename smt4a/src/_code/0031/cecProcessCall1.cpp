#include "shard/Shard0031.h"

extern "C" {

extern CecProcess *g_cecProcess;
extern void FUN_00358f70(u32 handle);

void cecProcessCall1(void)
{
    if (g_cecProcess != NULL) {
        FUN_00358f70(g_cecProcess->handle);
    }
}

} /* extern "C" */
