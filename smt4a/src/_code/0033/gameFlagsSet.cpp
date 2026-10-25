#include "shard/Shard0033.h"

extern "C" {

extern Flags0C0C *gameFlagsGetBlock(void);

void gameFlagsSet(s32 index, s32 value)
{
    Flags0C0C *obj = gameFlagsGetBlock();

    if (index < 0x40) {
        obj->flags[index] = value;
    }
}

} /* extern "C" */
