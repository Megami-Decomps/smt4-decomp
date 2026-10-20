#include "shard/Shard0032.h"

extern "C" {

extern StateAtF4 *g_campCecEdit;
extern void FUN_003a4980(u32 *a, u16 *b, void *c);

void stateAtF4Apply(void)
{
    if (g_campCecEdit != NULL) {
        FUN_003a4980(g_campCecEdit->unk0C, g_campCecEdit->unk08, g_campCecEdit->unk58);
    }
}

} /* extern "C" */
