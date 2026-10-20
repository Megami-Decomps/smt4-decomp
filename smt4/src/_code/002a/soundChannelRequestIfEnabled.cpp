#include "common.h"

extern "C" {

int soundChannelRequest(u32 a, u32 b, u32 c);
extern int jyoucyuGetTableEntry(u32 index);

void soundChannelRequestIfEnabled(u32 a, u32 b, u32 c)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        soundChannelRequest(a, b, c);
    }
}

} /* extern "C" */
