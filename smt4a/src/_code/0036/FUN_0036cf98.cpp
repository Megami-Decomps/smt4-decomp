#include "shard/Shard0036.h"

extern "C" {

extern StateAtF4 *g_campCecEdit;

void FUN_0036cf98(u8 value)
{
    if (g_campCecEdit != NULL) {
        g_campCecEdit->unk189 = value;
    }
}

} /* extern "C" */
