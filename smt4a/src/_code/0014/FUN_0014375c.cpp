#include "common.h"

struct SoundStereoMix {
    /* 0x00 */ f32 left;
    /* 0x04 */ f32 right;
    /* 0x08 */ u8 unk08[0x28];
};
struct SoundVoiceMixWork {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ void *voices[2];
    /* 0x70 */ SoundStereoMix mix[2];
    /* 0xD0 */ u8 unkD0[0x1C];
    /* 0xEC */ u32 mixMode;
};

static inline bool soundMixIsNormalized(f32 value)
{
    return 0.0f <= value && value <= 1.0f;
}
extern "C" {
void nn_snd_CTR_Voice_SetMixParam(void *voice, const SoundStereoMix *parameters);

/* Sets normalized stereo levels for the single-voice or split-voice mix. */
void FUN_0014375c(SoundVoiceMixWork *work, f32 left, f32 right)
{
    if (work == NULL) {
        return;
    }
    if (!soundMixIsNormalized(right)) {
        return;
    }
    if (!soundMixIsNormalized(left)) {
        return;
    }
    work->mix[0].left = left;
    if (work->mixMode != 1) {
        nn_snd_CTR_Voice_SetMixParam(work->voices[0], &work->mix[0]);
        work->mix[1].right = right;
        nn_snd_CTR_Voice_SetMixParam(work->voices[1], &work->mix[1]);
    } else {
        work->mix[0].right = right;
        nn_snd_CTR_Voice_SetMixParam(work->voices[0], &work->mix[0]);
    }
}
}
