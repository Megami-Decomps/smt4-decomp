#include "shard/Shard0035.h"

extern "C" {

extern CecProcess *g_cecProcess;
extern u32 cecCardMessageBoxOpenIfAllowed(u32 handle);

void cecProcessCall4(void)
{
    if (g_cecProcess != NULL) {
        cecCardMessageBoxOpenIfAllowed(g_cecProcess->handle);
    }
}

} /* extern "C" */
