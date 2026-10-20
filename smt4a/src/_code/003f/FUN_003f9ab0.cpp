#include "shard/Shard003F.h"

extern "C" {

extern void FUN_003f95e0(u32 value);

u32 FUN_003f9ab0(u32 value)
{
    FUN_003f95e0(value);
    return value;
}

} /* extern "C" */
