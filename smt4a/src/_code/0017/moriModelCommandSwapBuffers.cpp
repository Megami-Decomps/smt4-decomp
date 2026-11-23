#include "Model/MoriModelCommand.h"

/* Switches command buffers and clears the newly active queue. */
extern "C" void moriModelCommandSwapBuffers(MoriModelCommand *command)
{
    command->unkA0 = 0;
    command->activeBuffer ^= 1;
    command->unkA4 = 0;
    /* Retail falls through to the adjacent queue reset (armlink's branch-to-next NOP). */
    moriCommandQueueClear(&command->buffers[command->activeBuffer].queue);
}
