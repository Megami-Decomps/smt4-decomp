/* NON_MATCHING: list traversal is outlined differently and neighbor pointers are reloaded during unlinking. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndStatus g_asdSoundStatus;
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void sndVoiceFree(u32 voice);
void asdMemFree(void *memory);
}

static inline bool asdContainsWaveVoice(AsdSndWaveVoice *voice)
{
    for (AsdSndWaveVoice *item = static_cast<AsdSndWaveVoice *>(g_asdSoundStatus.objects);
         item; item = item->link.next) {
        if (item == voice) {
            return true;
        }
    }
    return false;
}

static inline void asdUnlinkWaveVoice(AsdSndWaveVoice *voice)
{
    for (AsdSndWaveVoice *item = static_cast<AsdSndWaveVoice *>(g_asdSoundStatus.objects);
         item; item = item->link.next) {
        if (item == voice) {
            if (voice->link.prev) {
                voice->link.prev->link.next = voice->link.next;
                if (voice->link.next) {
                    voice->link.next->link.prev = voice->link.prev;
                }
            } else {
                g_asdSoundStatus.objects = voice->link.next;
                if (g_asdSoundStatus.objects) {
                    static_cast<AsdSndWaveVoice *>(g_asdSoundStatus.objects)->link.prev = NULL;
                }
            }
            break;
        }
    }
    --g_asdSoundStatus.objectCount;
}

extern "C" void FUN_0010c270(AsdSndWaveVoice *voice)
{
    if (!voice) {
        return;
    }
    nn_os_CriticalSection_Enter(g_asdSoundStatus.unk08);
    if (asdContainsWaveVoice(voice)) {
        asdUnlinkWaveVoice(voice);
    }
    if (voice->data) {
        asdMemFree(voice->data);
    }
    if (voice->voice) {
        sndVoiceFree(voice->voice);
    }
    asdMemFree(voice);
    nn_os_CriticalSection_Leave(g_asdSoundStatus.unk08);
}
