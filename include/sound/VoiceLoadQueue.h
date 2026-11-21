#ifndef SOUND_VOICELOADQUEUE_H
#define SOUND_VOICELOADQUEUE_H
#include "common.h"
#include <stddef.h>

struct VoiceLoadRequest {
    u8 active;
    char path[0x4F];
    u32 group;
    u32 id;
    f32 gains[2];
    u8 unk60[8];
    u32 counter;
    u8 unk6C[8];
    u8 flags;
    u8 kind;
    u8 unk76;
    u8 priority;
};
struct VoiceLoadQueue {
    VoiceLoadRequest entries[4];
    /* 0x1E0 */ u8 unk1E0[4];
    /* 0x1E4 */ u8 voiceFlags;   /* messageVoiceFlagsGet */
    /* 0x1E5 */ u8 voiceBank;    /* messageVoiceBankGet */
    /* 0x1E6 */ u8 disabled;
};
/* The voice load queue at 0x61978C. */
extern VoiceLoadQueue g_soundObjectTable;
typedef char VoiceLoadQueueOffsets[
    sizeof(VoiceLoadRequest) == 0x78 && offsetof(VoiceLoadRequest, path) == 1 &&
    offsetof(VoiceLoadRequest, group) == 0x50 && offsetof(VoiceLoadRequest, id) == 0x54 &&
    offsetof(VoiceLoadRequest, gains) == 0x58 && offsetof(VoiceLoadRequest, counter) == 0x68 &&
    offsetof(VoiceLoadRequest, flags) == 0x74 && offsetof(VoiceLoadRequest, kind) == 0x75 &&
    offsetof(VoiceLoadRequest, priority) == 0x77 && offsetof(VoiceLoadQueue, voiceFlags) == 0x1E4 && offsetof(VoiceLoadQueue, voiceBank) == 0x1E5 &&
    offsetof(VoiceLoadQueue, disabled) == 0x1E6 ? 1 : -1];

/* The request in slot `index`, NULL past the four slots. */
static __inline VoiceLoadRequest *voiceLoadRequestAt(VoiceLoadQueue *queue, u32 index)
{
    return index < 4 ? &queue->entries[index] : NULL;
}
/* The first inactive request slot, -1 when all four are busy. */
static __inline s32 findFreeVoiceLoadRequest(VoiceLoadQueue *queue)
{
    for (s32 index = 0; index < 4; ++index) {
        if (voiceLoadRequestAt(queue, index)->active == 0)
            return index;
    }
    return -1;
}

#endif
