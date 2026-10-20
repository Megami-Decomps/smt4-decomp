#include "shard/Shard0046.h"

extern "C" {

extern void FUN_001d1f5c(VoiceOwner *owner);
extern void FUN_0045f9fc(u8 *block, s32 value);
extern void FUN_001d239c(VoiceB *voice);

void voiceOwnerRefresh(VoiceOwner *owner, s32 value)
{
    VoiceB *voice;

    FUN_001d1f5c(owner);
    for (voice = owner->voices; voice != NULL; voice = voice->next) {
        if (voice->active != 0) {
            if (value >= 0) {
                FUN_0045f9fc(voice->unk098, value & 0xFF);
            }
            FUN_001d239c(voice);
        }
    }
}

} /* extern "C" */
