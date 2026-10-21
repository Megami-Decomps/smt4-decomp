/* NON_MATCHING: armcc schedules the flags load after the field stores and does not use retail's r4 save/writeback sequence. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Arms a work command and clears its completion flag. */
void FUN_00167f44(u32 command, WorkCommandState *work, u32 argument)
{
    u32 flags = work->flags;
    work->command = command;
    work->state = 2;
    work->complete = 0;
    work->argument = argument;
    work->flags = flags | 1;
}

} /* extern "C" */
