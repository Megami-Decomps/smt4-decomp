#include "common.h"

extern "C" {

int bgmStop(u32 a, u32 b, int c);

void soundChannelStopAll(u32 value)
{
    bgmStop(0xffffffff, value, 0);
}

} /* extern "C" */
