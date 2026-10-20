#include "shard/Sys464af0.h"

extern "C" {

/* Clears the bits of `mask` in the system flags word. */
void FUN_00153050(u32 mask)
{
    DAT_00464af0.unk08 = DAT_00464af0.unk08 & ~mask;
}

} /* extern "C" */
