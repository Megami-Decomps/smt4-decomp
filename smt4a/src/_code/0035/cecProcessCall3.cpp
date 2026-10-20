#include "shard/Shard0035.h"

extern "C" {

extern CecProcess *g_cecProcess;
extern void FUN_0035af44(CecProcess *process);

void cecProcessCall3(void)
{
    if (g_cecProcess != NULL) {
        FUN_0035af44(g_cecProcess);
    }
}

} /* extern "C" */
