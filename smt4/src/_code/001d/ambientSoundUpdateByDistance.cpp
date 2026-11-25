#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {

struct SoundListener {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ SoundActorQueuePosition position;
};

extern SoundActorQueue DAT_004bd710;
extern SoundListener *g_mapCamera;

/* The ambient module's initialized data starts at the queue pointer (0x448C20).
 * Its startup initializer sets the two words at +0x08 to -1, clears the two at
 * +0x10, and initializes the queue's first entry. The radii follow at 0x448C38. */
struct AmbientSoundQueueState {
    /* 0x00 */ SoundActorQueue *queue;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ s32 unk08[2];
    /* 0x10 */ u32 unk10[2];
};
typedef char AmbientSoundQueueStateLayout[offsetof(AmbientSoundQueueState, unk08) == 8 &&
    offsetof(AmbientSoundQueueState, unk10) == 0x10 && sizeof(AmbientSoundQueueState) == 0x18 ? 1 : -1];

static AmbientSoundQueueState s_ambientQueueState = { &DAT_004bd710, 0, { 0, 0 }, { 0, 0 } };
static f32 s_ambientSoundRadii[8] = { 2000.0f, 2500.0f, 1500.0f, 3000.0f, 2000.0f, 1500.0f, 2500.0f, 2500.0f };
enum { FIRST_AMBIENT_SOUND_ID = 0x1000260 };

/* Plain static: armcc inlines the repeated queue lookup late. */
static SoundActorQueue *getAmbientSoundQueue(void)
{
    return s_ambientQueueState.queue;
}

f32 mathDistanceBetweenPoints(SoundActorQueuePosition from, SoundActorQueuePosition to);
void resourceHandleRelease(u32 handle);
s32 asd3dSoundActorIsPlaying(u32 handle);

/* Starts the positional actor sounds the listener comes within hearing range of and stops the ones
 * it has moved well out of (or that finished) for more than eight frames. */
void ambientSoundUpdateByDistance(void)
{
    if (getAmbientSoundQueue()->pending) {
        return;
    }
    for (s32 i = 0; i < getAmbientSoundQueue()->count; ++i) {
        SoundActorQueueEntry *entry = &getAmbientSoundQueue()->entries[i];
        if (!entry->active || entry->positional != 1) {
            continue;
        }
        f32 radius = s_ambientSoundRadii[entry->soundId - FIRST_AMBIENT_SOUND_ID];
        f32 distance = mathDistanceBetweenPoints(g_mapCamera->position, entry->position);
        if (!entry->started) {
            if (distance < radius) {
                entry->handle = soundActorStartOnFreeChannel(entry->soundId, entry->position);
                entry->started = 1;
                entry->inactiveFrames = 0;
            }
        } else {
            u32 handle = entry->handle;
            if (distance > radius + 50.0f) {
                resourceHandleRelease(handle);
                entry->started = 0;
                entry->inactiveFrames = 0;
                entry->handle = 0;
            } else if (!asd3dSoundActorIsPlaying(handle)) {
                entry->inactiveFrames = entry->inactiveFrames + 1;
                if (entry->inactiveFrames > 8) {
                    resourceHandleRelease(entry->handle);
                    entry->started = 0;
                    entry->inactiveFrames = 0;
                }
            }
        }
    }
}

} /* extern "C" */
