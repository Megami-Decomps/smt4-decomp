#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"
extern "C" {
/* Request sequence twenty-one with its zero-valued argument. */
void sequenceRequestZeroArgument(void) { u32 argument=0; asdSequenceRequest(21, &argument, 4); }
}
