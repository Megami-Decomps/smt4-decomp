#include "shard/Shard0046.h"

extern "C" {

extern void FUN_001d2384(VoiceB *voice);

/* Calls FUN_001d2384 on every voice and empties the list. */
void voiceOwnerClear(VoiceOwner *owner)
{
    VoiceB *voice;

    for (voice = owner->voices; voice != NULL; voice = voice->next) {
        FUN_001d2384(voice);
    }
    owner->voices = NULL;
}

} /* extern "C" */
