#include "shard/Shard004D.h"

extern "C" {

extern u8 *FUN_001ab888(void);

u32 FUN_004d05b4(void)
{
    return *(u32 *)FUN_001ab888();
}

} /* extern "C" */
