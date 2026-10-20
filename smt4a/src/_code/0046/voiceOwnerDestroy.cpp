#include "shard/Shard0046.h"

extern "C" {

typedef struct VoiceOwnerV {
    /* 0x000 */ const void *vtbl;
    /* 0x004 */ u8 unk04;
    /* 0x005 */ u8 unk05;
    /* 0x006 */ u8 unk06[0x12A];
    /* 0x130 */ VoiceB *voices;
} VoiceOwnerV;

extern u8 DAT_0055c1b0;
extern void FUN_001d1f5c(VoiceOwnerV *owner);
extern void FUN_001d239c(VoiceB *voice);
extern void voiceClearCallback(VoiceB *voice);

/* Destroy hook: restores the vtable, stops and releases every voice and resets the owner. */
VoiceOwnerV *voiceOwnerDestroy(VoiceOwnerV *owner)
{
    VoiceB *voice;

    owner->vtbl = &DAT_0055c1b0;
    FUN_001d1f5c(owner);
    for (voice = owner->voices; voice != NULL; voice = voice->next) {
        if (voice->active != 0) {
            FUN_001d239c(voice);
        }
    }
    for (voice = owner->voices; voice != NULL; voice = voice->next) {
        voiceClearCallback(voice);
    }
    owner->voices = NULL;
    owner->unk05 = 0;
    return owner;
}

} /* extern "C" */
