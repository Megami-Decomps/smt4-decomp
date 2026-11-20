#include "shard/Shard0032.h"

extern "C" {

extern StateAtF4 *g_campCecEdit;
extern u32 linkedTargetRunHolderLinks(u32 value);

void FUN_0036cf78(void)
{
    if (g_campCecEdit != NULL) {
        linkedTargetRunHolderLinks(g_campCecEdit->unk04);
    }
}

} /* extern "C" */
