#include "shard/Shard003C.h"

extern "C" {

#include "shard/Shard0032.h"
extern StateAtF4 *g_campCecEdit;
extern void FUN_003c8738(void);

void FUN_003c8790(void)
{
    if (g_campCecEdit == NULL || g_campCecEdit->unk0C == NULL) {
        return;
    }
    FUN_003c8738();
}

} /* extern "C" */
