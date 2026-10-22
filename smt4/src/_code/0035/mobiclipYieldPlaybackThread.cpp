#include "common.h"

extern "C" {

int threadSleepDuration(int a, int b);

void mobiclipYieldPlaybackThread(void)
{
    threadSleepDuration(500000, 0);
}

} /* extern "C" */
