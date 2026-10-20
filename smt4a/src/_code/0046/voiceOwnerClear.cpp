#include "shard/Shard0046.h"

extern "C" {

extern void voiceClearCallback(VoiceB *voice);

/* Calls voiceClearCallback on every voice and empties the list. */
void voiceOwnerClear(VoiceOwner *owner)
{
    VoiceB *voice;

    for (voice = owner->voices; voice != NULL; voice = voice->next) {
        voiceClearCallback(voice);
    }
    owner->voices = NULL;
}

} /* extern "C" */
