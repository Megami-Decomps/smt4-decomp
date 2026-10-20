#include "shard/Shard0046.h"

extern "C" {

typedef struct VoiceState {
    /* 0x000 */ u8 unk000[0x98];
    /* 0x098 */ u8 state;
    /* 0x099 */ u8 unk099[0x9F];
    /* 0x138 */ u8 unk138;
    /* 0x139 */ u8 unk139[3];
    /* 0x13C */ u8 unk13C;
    /* 0x13D */ u8 unk13D;
    /* 0x13E */ u8 unk13E[0x6A];
    /* 0x1A8 */ s32 handle;
} VoiceState;

extern void nw_snd_internal_driver_Voice_SetPriority(s32 handle, s32 priority);

/* Drops an idle voice back to priority state 4 (lowering its driver priority when it has one). */
void voiceStateSetIdle(VoiceState *voice)
{
    if (voice->unk13D == 0) {
        if (voice->state != 4) {
            if (voice->handle != 0 && voice->unk13C == 0) {
                nw_snd_internal_driver_Voice_SetPriority(voice->handle, 1);
            }
            voice->state = 4;
        }
        voice->unk138 = 0;
    }
}

} /* extern "C" */
