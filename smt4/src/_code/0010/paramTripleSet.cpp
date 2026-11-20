#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern ParameterTriple g_startMenuProcessGroup;

/* Stores three parameters and resets their pending state. */
void paramTripleSet(u32 first, u32 second, u32 third)
{
    g_startMenuProcessGroup.first = first;
    g_startMenuProcessGroup.second = second;
    g_startMenuProcessGroup.third = third;
    g_startMenuProcessGroup.state = 0;
}

} /* extern "C" */
