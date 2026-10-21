#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern ParameterTriple DAT_004e3f64;

/* Stores three parameters and resets their pending state. */
void FUN_0010a1a4(u32 first, u32 second, u32 third)
{
    DAT_004e3f64.first = first;
    DAT_004e3f64.second = second;
    DAT_004e3f64.third = third;
    DAT_004e3f64.state = 0;
}

} /* extern "C" */
