#include "shard/Shard003D.h"

extern "C" {

extern void bgmStop(s32 a, u32 b, s32 c);

void soundChannelStopAll(u32 value)
{
    bgmStop(-1, value, 0);
}

} /* extern "C" */
