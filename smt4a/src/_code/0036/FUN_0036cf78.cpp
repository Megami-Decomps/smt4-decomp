#include "shard/Shard0032.h"

extern "C" {

extern StateAtF4 *g_campCecEdit;
extern u32 FUN_002e2114(u32 value);

void FUN_0036cf78(void)
{
    if (g_campCecEdit != NULL) {
        FUN_002e2114(g_campCecEdit->unk04);
    }
}

} /* extern "C" */
