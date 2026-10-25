#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"


extern "C" {
/* Reads or updates the requested state. */
u32 FUN_002cd90c(void)
{
    u32 argument = 0;
    asdSequenceRequest(19, &argument, 4);
    return 1;
}
}
