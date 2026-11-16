#include "common.h"
#include "nn/fnd/TimeSpan.h"

extern "C" {
/* The movie audio device's run flag (its first byte): the mixer clears it from another thread. */
extern volatile u8 DAT_005880d0;
void FUN_00422c48(u32 context);
void FUN_001c76b8();
/* Sleeps the calling thread for the span. */
void svcSleepThread(nn::fnd::TimeSpan span);

// Pump the worker and sleep for half a millisecond until another thread clears the run flag.
void movieAudioDeviceRunLoop(u32 context)
{
    DAT_005880d0 = 1;
    while (DAT_005880d0 != 0) {
        FUN_00422c48(context);
        FUN_001c76b8();
        svcSleepThread(nn::fnd::TimeSpan(500000));
    }
}
}
