/* NON_MATCHING: cached adjacent links become LDRD instead of retail's separate loads; list-search and unlink cold blocks have different placement. -O2 candidate. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match1_CriticalSection.h"
#include "shard/asdMemoryAllocTracked.h"

struct SoundSystemStatusViewA {
    u8 unk0000[0x12fc];
    AsdSndStatusApoc status;
};
extern "C" {
extern SoundSystemStatusViewA g_asdSoundSystem;
extern const char DAT_0053d414[];
void nn_snd_CTR_FreeVoice(u32 voice);
void sysMemClear(void *memory, u32 size);
void FUN_00153cd0(AsdSndObject *sound, u32 data, u32 option, u32 kind, f32 gain0, f32 gain1);
}

static inline void removeSoundObject(AsdSndStatusApoc *status, AsdSndObject *sound)
{
    AsdSndObject *node = status->objects;
    if (node == NULL) {
        return;
    }
    while (node != NULL && node != sound) {
        node = node->next;
    }
    if (node != NULL) {
        AsdSndObject *previous = sound->prev;
        AsdSndObject *next = sound->next;
        if (previous != NULL) {
            previous->next = next;
            if (next != NULL) {
                next->prev = previous;
            }
        } else if (next != NULL) {
            next->prev = NULL;
            status->objects = next;
        } else {
            status->objects = NULL;
        }
    }
    --status->objectCount;
}

extern "C" AsdSndObject *asdSoundObjectCreate(u32 data, u32 option, u32 kind, f32 gain0, f32 gain1)
{
    AsdSndStatusApoc *status = &g_asdSoundSystem.status;
    CriticalSection *section = (CriticalSection *)&status->unk08[4];
    ScopedCriticalLock lock(*section);
    asdDebugTrace(DAT_0053d414, 0x1ec0);
    AsdSndObject *sound = (AsdSndObject *)asdMemoryAllocTracked(
        ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdSndObject), 1);
    if (sound != NULL) {
        for (AsdSndObject *node = status->objects; node != NULL; node = node->next) {
            if (node == sound) {
                removeSoundObject(status, sound);
                break;
            }
        }
        for (s32 i = 0; i < sound->voiceCount; ++i) {
            if (sound->voices[i] != 0) {
                nn_snd_CTR_FreeVoice(sound->voices[i]);
            }
        }
        sysMemClear(sound, sizeof(*sound));
    }
    FUN_00153cd0(sound, data, option, kind, gain0, gain1);
    return sound;
}
