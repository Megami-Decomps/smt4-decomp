#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {


/* Requests sequence state twenty-three with a clear one-byte argument. */
void FUN_0019213c(void)
{
    u8 argument = 0;
    asdSequenceRequest(23, &argument, sizeof(argument));
}

} /* extern "C" */
