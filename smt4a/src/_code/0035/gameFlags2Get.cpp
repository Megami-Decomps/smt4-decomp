#include "shard/Shard0035.h"

extern "C" {

extern Flags0C0C *FUN_00162e8c(void);

u8 gameFlags2Get(s32 index)
{
    return FUN_00162e8c()->flags2[index];
}

} /* extern "C" */
