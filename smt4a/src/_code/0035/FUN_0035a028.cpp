#include "shard/Shard0032.h"

extern "C" {

extern StateAtF4 *DAT_0057f118;

s32 FUN_0035a028(void)
{
    if (DAT_0057f118 != NULL) {
        return DAT_0057f118->unk14C;
    }
    return -1;
}

} /* extern "C" */
