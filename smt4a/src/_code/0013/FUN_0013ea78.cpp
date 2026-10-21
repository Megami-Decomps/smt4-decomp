#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern ParameterTriple DAT_00640388;

/* Stores three parameters and resets their pending state. */
void FUN_0013ea78(u32 first, u32 second, u32 third)
{
    DAT_00640388.first = first;
    DAT_00640388.second = second;
    DAT_00640388.third = third;
    DAT_00640388.state = 0;
}

} /* extern "C" */
