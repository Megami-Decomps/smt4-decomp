#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Updates the byte state in the caller's work area. */
void workSetStateByte(ByteStateWork *work, u8 state)
{
    work->state = state;
}

} /* extern "C" */
