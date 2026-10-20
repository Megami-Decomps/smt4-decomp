#include "shard/Shard0033.h"

extern "C" {

extern Flags0C0C *FUN_00162e8c(void);

u8 gameFlagsGet(s32 index)
{
    return FUN_00162e8c()->flags[index];
}

} /* extern "C" */
