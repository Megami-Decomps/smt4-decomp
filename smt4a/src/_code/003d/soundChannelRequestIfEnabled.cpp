#include "shard/Shard003D.h"

extern "C" {

extern s32 jyoucyuGetTableEntry(u32 index);
extern void soundChannelRequest(u32 a, u32 b, u32 c);

void soundChannelRequestIfEnabled(u32 a, u32 b, u32 c)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        soundChannelRequest(a, b, c);
    }
}

} /* extern "C" */
