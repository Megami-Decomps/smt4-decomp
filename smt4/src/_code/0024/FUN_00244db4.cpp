#include "shard/Sys464af0.h"

extern "C" {

/* Sets the bits of `mask` in the system flags word. */
void FUN_00244db4(u32 mask)
{
    DAT_00464af0.unk08 = mask | DAT_00464af0.unk08;
}

} /* extern "C" */
