#include "shard/Shard004F.h"

extern "C" {

extern u32 FUN_003c5d8c(void);

u8 FUN_004fa0d8(void)
{
    return FUN_003c5d8c() != 0;
}

} /* extern "C" */
