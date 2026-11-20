#include "shard/Shard0032.h"

extern "C" {

extern StateAtF4 *g_campCecEdit;

void FUN_0038800c(u32 value)
{
    if (g_campCecEdit != NULL) {
        g_campCecEdit->editItem = value;
    }
}

} /* extern "C" */
