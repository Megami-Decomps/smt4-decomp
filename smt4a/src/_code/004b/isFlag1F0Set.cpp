#include "shard/Shard004B.h"

extern "C" {

extern u8 FUN_0018206c(u32 group, u32 index);

u8 isFlag1F0Set(void)
{
    return FUN_0018206c(0x1F, 0) != 0;
}

} /* extern "C" */
