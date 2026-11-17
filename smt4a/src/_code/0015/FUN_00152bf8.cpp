/* NON_MATCHING: list-walk outlining (retail puts the advance steps and the head-removal arm out of line) and neighbor-pointer reloads differ; base addressing and the scoped lock now match. */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
void nn_snd_CTR_FreeVoice(u32 voice);
void asdMemFree(void *memory);
}

static inline bool asdContainsSoundObject(AsdSndStatusApoc *status, AsdSndObject *object)
{
    for (AsdSndObject *item = status->objects; item; item = item->next) {
        if (item == object) {
            return true;
        }
    }
    return false;
}

static inline void asdUnlinkSoundObject(AsdSndStatusApoc *status, AsdSndObject *object)
{
    for (AsdSndObject *item = status->objects; item; item = item->next) {
        if (item == object) {
            if (object->prev) {
                object->prev->next = object->next;
                if (object->next) {
                    object->next->prev = object->prev;
                }
            } else {
                status->objects = object->next;
                if (status->objects) {
                    status->objects->prev = NULL;
                }
            }
            break;
        }
    }
    --status->objectCount;
}

extern "C" void FUN_00152bf8(AsdSndObject *object)
{
    if (!object) {
        return;
    }
    /* Apocalypse's critical section begins at status + 0x0c. */
    AsdSndStatusApoc *status = &g_asdSoundSystem.control.status;
    ScopedCriticalLock lock(static_cast<void *>(&status->section));
    if (asdContainsSoundObject(status, object)) {
        asdUnlinkSoundObject(status, object);
    }
    s32 index = 0;
    while (index < object->voiceCount) {
        if (object->voices[index]) {
            nn_snd_CTR_FreeVoice(object->voices[index]);
        }
        ++index;
    }
    asdMemFree(object);
}
