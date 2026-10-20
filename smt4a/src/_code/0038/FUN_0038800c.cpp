#include "shard/Shard0038.h"

extern "C" {

extern StateAtF4 *g_campCecEdit;

void FUN_0038800c(u32 value)
{
    if (g_campCecEdit != NULL) {
        g_campCecEdit->unk14C = value;
    }
}

} /* extern "C" */
