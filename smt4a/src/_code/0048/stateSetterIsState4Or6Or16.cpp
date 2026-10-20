#include "shard/Shard0048.h"

extern "C" {

u32 stateSetterIsState4Or6Or16(StateSetter *obj)
{
    s32 state = obj->state;

    if (state == 4 || state == 6 || state == 0x10) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
