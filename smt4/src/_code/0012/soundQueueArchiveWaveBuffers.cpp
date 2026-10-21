/* NON_MATCHING: wave-data addition emits one ADD instead of retail's MOV/MOV/ADD and persistent-register allocation differs. */
#include "shard/W6_W6Match7_WaveBuffer.h"

extern "C" {
WaveArchiveEntry *FUN_00129010(u32 archive);
s32 FUN_00129020(u32 archive);
u8 *FUN_00129034(u32 archive, s32 index);
u8 *FUN_0013ac6c(u32 archive, s32 index);
void nn_snd_CTR_InitializeWaveBuffer(WaveBuffer *);
u32 nw_snd_Sound3DManager_Initialize_128F9C(u8 format, u32 samples);
void FUN_001565ec(void *voice, WaveBuffer *);
void FUN_001294e0(void *voice, u32 archive, WaveBuffer *, WaveBuffer *, s32 index);

// Queue the initial wave and, when present, its looping continuation.
u32 soundQueueArchiveWaveBuffers(WavePlayer *player, u32 archive, WaveBuffer *initial, WaveBuffer *loop, s32 index)
{
    WaveArchiveEntry *entry = FUN_00129010(archive);
    u8 *context = NULL;
    s32 count = FUN_00129020(archive);
    if (index > count - 1 || initial == NULL || (entry->looping && loop == NULL))
        return 0;
    u8 *data = FUN_00129034(archive, index);
    if (entry->format == 2)
        context = FUN_0013ac6c(archive, index);
    nn_snd_CTR_InitializeWaveBuffer(initial);
    initial->data = data;
    initial->sampleCount = entry->sampleCount;
    initial->looping = 0;
    if (context != NULL)
        initial->adpcmContext = context + 0x20;
    FUN_001565ec(player->voice, initial);
    if (loop != NULL)
        nn_snd_CTR_InitializeWaveBuffer(loop);
    if (entry->looping) {
        u32 offset = nw_snd_Sound3DManager_Initialize_128F9C(entry->format, entry->loopStart);
        loop->data = data + offset;
        loop->sampleCount = entry->sampleCount - entry->loopStart;
        loop->looping = 1;
        if (context != NULL)
            loop->adpcmContext = context + 0x26;
        FUN_001565ec(player->voice, loop);
    }
    FUN_001294e0(player->voice, archive, initial, loop, index);
    return 1;
}
}
