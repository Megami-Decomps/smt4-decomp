#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"


extern "C" {
/* Reads or updates the requested object state. */
u32 scrGetArg(u32 index);
u32 sequenceRequestScriptArg(void)
{
    u32 argument = scrGetArg(0);
    asdSequenceRequest(13, &argument, 4);
    return 1;
}
}
