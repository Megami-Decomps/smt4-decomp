#include "shard/Shard0038.h"

extern "C" {

extern StateAtF4 *DAT_0057f118;

void FUN_0038800c(u32 value)
{
    if (DAT_0057f118 != NULL) {
        DAT_0057f118->unk14C = value;
    }
}

} /* extern "C" */
