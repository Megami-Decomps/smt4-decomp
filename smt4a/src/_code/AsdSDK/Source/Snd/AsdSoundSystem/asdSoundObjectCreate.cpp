/* NON_MATCHING: retail places both list searches' advance steps and the head-unlink arm after the epilogue and loads the unlinked object's next link inside each arm; the build keeps the searches inline and hoists that load. */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
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
        if (previous != NULL) {
            AsdSndObject *next = sound->next;
            previous->next = next;
            if (sound->next != NULL) {
                next->prev = previous;
            }
        } else if (sound->next == NULL) {
            status->objects = NULL;
        } else {
            sound->next->prev = NULL;
            status->objects = sound->next;
        }
    }
    --status->objectCount;
}

extern "C" AsdSndObject *asdSoundObjectCreate(u32 data, u32 option, u32 kind, f32 gain0, f32 gain1)
{
    AsdSndStatusApoc *status = &g_asdSoundSystem.control.status;
    CriticalSection *section = (CriticalSection *)&status->section;
    ScopedCriticalLock lock(*section);
    asdDebugTrace(DAT_0053d414, 0x1ec0);
    AsdSndObject *sound = (AsdSndObject *)asdMemoryAllocTracked(
        ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdSndObject), 1);
    if (sound != NULL) {
        AsdSndObject *node = status->objects;
        while (node != NULL && node != sound)
            node = node->next;
        if (node != NULL)
            removeSoundObject(status, sound);
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
