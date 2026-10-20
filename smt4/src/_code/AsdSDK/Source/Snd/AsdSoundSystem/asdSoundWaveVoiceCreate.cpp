/* NON_MATCHING: register allocation differs (retail keeps the lock in r6, the data pointer in r7 and the unk8c/unk90 pair in r8/r9 for strd). */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00409724[]; /* "c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp": __FILE__ */
extern u8 DAT_004e315c; /* nn::os::CriticalSection guarding the sound layer */

void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);
void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void *asdMemoryAllocAligned(int heap, int alignClass, int unk08, u32 size, u32 align, int fromFront);
u32 FUN_00129010(const void *data);
void FUN_00129020(const void *data);
u8 *FUN_00129034(const void *data, s32 unk);
void memCopy(const void *src, void *dst, u32 size);
u32 FUN_002bd29c(s32 priority, s32 unk);
void nn_snd_CTR_Voice_SetMixParam(u32 voice, const f32 *mix);
void nn_snd_CTR_Voice_SetPitch(u32 voice, f32 pitch);
void FUN_00147370(u32 voice, f32 volume);
void nn_snd_CTR_InitializeWaveBuffer(void *waveBuffer);
void FUN_001290cc(u32 voice, void *data, void *waveBuffer0, void *waveBuffer1, s32 unk);

/* Starts a sound whose samples are `size` bytes at `data`: copies them to the extra heap, takes a
 * voice at full pitch and volume (centered) and queues the first two wave buffers. */
AsdSndWaveVoice *asdSoundWaveVoiceCreate(const u8 *data, u32 size, u32 unk8c)
{
    AsdSndWaveVoice *sound;
    void *lock = &DAT_004e315c;
    s32 i;

    nn_os_CriticalSection_Enter(lock);
    asdDebugTrace(DAT_00409724, 6423);
    sound = (AsdSndWaveVoice *)asdMemAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdSndWaveVoice), 1);
    sound->unk7c = -1;
    sound->unk8c = unk8c;
    sound->unk90 = 1;
    sound->format = FUN_00129010(data);
    FUN_00129020(data);
    sound->headerSize = FUN_00129034(data, 0) - data;
    sound->sampleBytes = size - sound->headerSize;
    asdDebugTrace(DAT_00409724, 6441);
    sound->data = asdMemoryAllocAligned(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, size, 0x20, 1);
    memCopy(data, sound->data, size);
    sound->voice = FUN_002bd29c(0x7fff, 0);
    sound->mix[0] = 0.7071f;
    sound->mix[1] = 0.7071f;
    nn_snd_CTR_Voice_SetMixParam(sound->voice, sound->mix);
    FUN_00147370(sound->voice, 1.0f);
    nn_snd_CTR_Voice_SetPitch(sound->voice, 1.0f);
    for (i = 0; i < 2; i++) {
        nn_snd_CTR_InitializeWaveBuffer(sound->waveBuffers[i]);
    }
    FUN_001290cc(sound->voice, sound->data, sound->waveBuffers[0], sound->waveBuffers[1], 0);
    nn_os_CriticalSection_Leave(lock);
    return sound;
}

} /* extern "C" */
