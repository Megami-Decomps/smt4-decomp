#include "shard/Shard0036.h"

extern "C" {

extern StateAtF4 *DAT_0057f118;
extern u32 FUN_002e2114(u32 value);

void FUN_0036cf78(void)
{
    if (DAT_0057f118 != NULL) {
        FUN_002e2114(DAT_0057f118->unk04);
    }
}

} /* extern "C" */
