#include "shard/Shard0042.h"

extern "C" {

u8 state2CIsNot1(State2C *obj)
{
    if (obj->state == 1) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
