#include "shard/DriverVoice.h"

extern "C" {

void nw_snd_internal_driver_VoiceManager_FreeVoice(u32 manager, DriverVoice *voice);
u32 nw_snd_internal_driver_VoiceManager_GetInstance(void);

/* Called when the SDK drops the voice: clears its channels and flags, returns it to the voice manager and notifies the voice's callback (reason 3). */
void nw_snd_internal_driver_Voice_SdkVoiceDropCallbackFunc(u32 unused, DriverVoice *voice)
{
    u32 manager;

    voice->channels[0] = 0;
    voice->paused = 0;
    voice->started = 0;
    voice->channelCount = 0;
    manager = nw_snd_internal_driver_VoiceManager_GetInstance();
    nw_snd_internal_driver_VoiceManager_FreeVoice(manager, voice);
    voice->allocated = 0;
    if (voice->callback != NULL) {
        voice->callback(voice, 3, voice->userData);
        return;
    }
}

} /* extern "C" */
