#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern CommandQueueDefaults g_commandQueueDefaults;

/* Resets the command queue defaults: no entries, room for 100. Built -O2 -Otime like asdProcessPauseAll before it (the
 * asdProcess module; separate stores where -O3 forms an stm), in both games. */
void commandQueueResetDefaults(void)
{
    g_commandQueueDefaults.count = 0;
    g_commandQueueDefaults.capacity = 100;
}

} /* extern "C" */
