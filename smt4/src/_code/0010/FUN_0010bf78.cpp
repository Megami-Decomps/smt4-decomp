/* NON_MATCHING: the data-memory barrier (mcr c7, c10, 5) now matches through nn/svc.h and the list walk and release are recovered; armcc lays out the nested list searches and the unlink differently (retail merges the two searches' branches, keeps the status address in r5 and r7 both). */
#include "common.h"
#include "nn/svc.h"
#include <stddef.h>

/* A playing sound: its voice and sample memory, linked into the status block's list. */
struct SoundObject {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 voice;
    /* 0x3c */ u8 unk3c[0x30];
    /* 0x6c */ void *memory;
    /* 0x70 */ SoundObject *next;
    /* 0x74 */ SoundObject *prev;
};
typedef char SoundObjectOffsets[offsetof(SoundObject, next) == 0x70 &&
    offsetof(SoundObject, prev) == 0x74 ? 1 : -1];

/* The sound layer's status block (SMT IV): the list of live sounds and the lock around it. */
struct SoundStatus {
    /* 0x00 */ SoundObject *objects;
    /* 0x04 */ s32 objectCount;
    /* 0x08 */ u8 lock[8];
    /* 0x10 */ s32 unk10;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 ready;
};

/* The sound thread object: its two request words. */
struct SoundThreadView {
    u8 unk000[0x1e8];
    u32 requestLow;
    u32 requestHigh;
};

extern "C" {
extern SoundStatus g_asdSoundStatus;

SoundThreadView *_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void sndVoiceFree(u32 voice);
void asdMemFree(void *memory);
}

/* The index-th live sound, or NULL when the index is outside the list. */
static SoundObject *soundObjectAt(s32 index)
{
    SoundObject *object = NULL;

    if (index >= 0 && g_asdSoundStatus.objectCount > index) {
        object = g_asdSoundStatus.objects;
        for (s32 i = 0; i < index; ++i) {
            object = object->next;
        }
    }
    return object;
}

static bool soundObjectIsLive(SoundObject *object)
{
    for (SoundObject *item = g_asdSoundStatus.objects; item != NULL; item = item->next) {
        if (item == object) {
            return true;
        }
    }
    return false;
}

/* Takes the sound out of the list. */
static void soundObjectUnlink(SoundObject *object)
{
    for (SoundObject *item = g_asdSoundStatus.objects; item != NULL; item = item->next) {
        if (item == object) {
            if (object->prev != NULL) {
                object->prev->next = object->next;
                if (object->next != NULL) {
                    object->next->prev = object->prev;
                }
            } else {
                g_asdSoundStatus.objects = object->next;
                if (g_asdSoundStatus.objects != NULL) {
                    g_asdSoundStatus.objects->prev = NULL;
                }
            }
            break;
        }
    }
    --g_asdSoundStatus.objectCount;
}

/* Releases one sound: unlinks it and frees its voice and memory. */
static void soundObjectRelease(SoundObject *object)
{
    if (object != NULL) {
        nn_os_CriticalSection_Enter(g_asdSoundStatus.lock);
        if (soundObjectIsLive(object)) {
            soundObjectUnlink(object);
        }
        if (object->memory != NULL) {
            asdMemFree(object->memory);
        }
        if (object->voice != 0) {
            sndVoiceFree(object->voice);
        }
        asdMemFree(object);
        nn_os_CriticalSection_Leave(g_asdSoundStatus.lock);
    }
}

/* Shuts the sound layer's object list down: tells the sound thread to stop taking requests and
 * releases every live sound. */
extern "C" void FUN_0010bf78(void)
{
    if (g_asdSoundStatus.ready != 0) {
        SoundThreadView *soundThread = _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv();
        soundThread->requestLow = 0;
        nn::os::DataMemoryBarrier();
        soundThread->requestHigh = 0;
        for (s32 i = 0; i < g_asdSoundStatus.objectCount; ++i) {
            soundObjectRelease(soundObjectAt(i));
        }
        g_asdSoundStatus.ready = 0;
        g_asdSoundStatus.unk10 = -1;
    }
}
