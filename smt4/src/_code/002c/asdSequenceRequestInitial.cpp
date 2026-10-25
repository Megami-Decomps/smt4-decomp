#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {

/* Requests the initial sequence without an argument. */
void asdSequenceRequestInitial(void)
{
    asdSequenceRequest(1, NULL, 0);
}
}
