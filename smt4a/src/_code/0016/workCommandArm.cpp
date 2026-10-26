#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Arms a work command and clears its completion flag. */
void workCommandArm(u32 command, WorkCommandState *work, u32 argument)
{
    work->flags |= 1;
    work->command = command;
    work->state = 2;
    work->complete = 0;
    work->argument = argument;
}

} /* extern "C" */
