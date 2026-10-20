#include "shard/Shard0033.h"

extern "C" {

extern Flags0C0C *FUN_00162e8c(void);

void gameFlagsSet(s32 index, u8 value)
{
    Flags0C0C *obj = FUN_00162e8c();

    if (index < 0x40) {
        obj->flags[index] = value;
    }
}

} /* extern "C" */
