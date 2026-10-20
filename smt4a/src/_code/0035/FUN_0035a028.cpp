#include "shard/Shard0032.h"

extern "C" {

extern StateAtF4 *g_campCecEdit;

s32 FUN_0035a028(void)
{
    if (g_campCecEdit != NULL) {
        return g_campCecEdit->unk14C;
    }
    return -1;
}

} /* extern "C" */
