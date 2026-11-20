#include "shard/Shard003D.h"

extern "C" {

extern s32 jyoucyuGetTableEntry(u32 index);
extern void spatialSoundActorStop(u32 a, u32 b);

void resourceHandleRelease(u32 value)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        spatialSoundActorStop(value, 0);
    }
}

} /* extern "C" */
