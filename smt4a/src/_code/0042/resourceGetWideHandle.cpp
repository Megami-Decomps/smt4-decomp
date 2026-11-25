#include "sound/AudioStreamWorker.h"

extern "C" AudioStreamWorker g_soundVoicePool;

/* Returns the consumed-sample count for this stream, or zero for an invalid index. */
extern "C" u64 resourceGetWideHandle(s32 index)
{
    if (index < 0) {
        return 0;
    }
    u32 count = g_soundVoicePool.streamCount;
    if ((u32)index >= count) {
        return 0;
    }
    const AudioStreamSlot &stream = g_soundVoicePool.streams[index];
    return stream.consumedSamples;
}
