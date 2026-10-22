#include "shard/Shard003C.h"

extern "C" {

#include "shard/Shard0032.h"
extern StateAtF4 *g_campCecEdit;
extern void resSetAllReady(void);

void campCecEditRun(void)
{
    if (g_campCecEdit == NULL || g_campCecEdit->unk0C == NULL) {
        return;
    }
    resSetAllReady();
}

} /* extern "C" */
