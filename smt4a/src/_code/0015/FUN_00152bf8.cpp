/* NON_MATCHING: sound-status base addressing, list traversal outlining and neighbor-pointer reloads differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

/* Apocalypse's status suffix lies past the shared IV sound-system definition. */
struct ApocalypseSoundStatusView {
    u8 prefix[0x12FC];
    AsdSndStatusApoc status;
};

extern "C" {
extern ApocalypseSoundStatusView g_asdSoundSystem;
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void nn_snd_CTR_FreeVoice(u32 voice);
void asdMemFree(void *memory);
}

static inline bool asdContainsSoundObject(AsdSndObject *object)
{
    for (AsdSndObject *item = g_asdSoundSystem.status.objects; item; item = item->next) {
        if (item == object) {
            return true;
        }
    }
    return false;
}

static inline void asdUnlinkSoundObject(AsdSndObject *object)
{
    for (AsdSndObject *item = g_asdSoundSystem.status.objects; item; item = item->next) {
        if (item == object) {
            if (object->prev) {
                object->prev->next = object->next;
                if (object->next) {
                    object->next->prev = object->prev;
                }
            } else {
                g_asdSoundSystem.status.objects = object->next;
                if (g_asdSoundSystem.status.objects) {
                    g_asdSoundSystem.status.objects->prev = NULL;
                }
            }
            break;
        }
    }
    --g_asdSoundSystem.status.objectCount;
}

extern "C" void FUN_00152bf8(AsdSndObject *object)
{
    if (!object) {
        return;
    }
    /* Apocalypse's critical section begins at status + 0x0c. */
    nn_os_CriticalSection_Enter(&g_asdSoundSystem.status.unk08[4]);
    if (asdContainsSoundObject(object)) {
        asdUnlinkSoundObject(object);
    }
    for (s32 index = 0; index < object->voiceCount; ++index) {
        if (object->voices[index]) {
            nn_snd_CTR_FreeVoice(object->voices[index]);
        }
    }
    asdMemFree(object);
    nn_os_CriticalSection_Leave(&g_asdSoundSystem.status.unk08[4]);
}
