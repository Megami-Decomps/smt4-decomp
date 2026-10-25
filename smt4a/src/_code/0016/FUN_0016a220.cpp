/* NON_MATCHING: outer/mixer register bases, sample-count hoisting and callback tail guards differ. */
#include "common.h"
#include <stddef.h>

/* One of the two tracks: its volume, handle and playback parameters. */
struct CrossfadeTrack {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ f32 volume;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 handle;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u8 params[0x1C];
};

/* The mix buffer and the fade timing. */
struct CrossfadeMix {
    /* 0x00 */ f32 *data;          /* `count` samples */
    /* 0x04 */ s32 count;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ f32 duration;
    /* 0x10 */ f32 elapsed;
    /* 0x14 */ s32 current;
    /* 0x18 */ u8 fading;
    /* 0x19 */ u8 unk19[3];
};

/* A crossfader between two tracks, mixing into a shared buffer. */
struct Crossfade {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ CrossfadeMix mixer;
    /* 0x024 */ CrossfadeTrack tracks[2];
    /* 0x084 */ u8 unk084[0x84];
    /* 0x108 */ u32 owner;
    /* 0x10C */ u8 unk10C[0x104];
    /* 0x210 */ u32 channel;
    /* 0x214 */ u8 unk214[0x48];
    /* 0x25C */ u32 onFinished;
};

typedef char CrossfadeLayoutCheck[
    sizeof(CrossfadeTrack) == 0x30 && sizeof(CrossfadeMix) == 0x1C &&
    offsetof(Crossfade, tracks) == 0x24 && offsetof(Crossfade, owner) == 0x108 &&
    offsetof(Crossfade, onFinished) == 0x25C && sizeof(Crossfade) == 0x260 ? 1 : -1];

extern "C" {
s32 trackAdvance(CrossfadeTrack *track, f32 deltaTime);
void FUN_001882fc(void);
void FUN_00193c08(u32 channel, u32 owner);
void FUN_00198144(CrossfadeMix *mix, u32 owner);
void FUN_001981d8(u32 handle, u32 owner, const u8 *params, f32 volume);
void FUN_00198360(u32 handle, u32 owner, CrossfadeMix *mix, const u8 *params, f32 volume, f32 weight);

/* Advances the crossfade: while fading, mixes both tracks into the buffer by their weights, ends the
 * fade at its duration and then steps both tracks; otherwise just plays the current track. */
void FUN_0016a220(Crossfade *fade, f32 deltaTime)
{
    CrossfadeMix *mixer = &fade->mixer;
    if (mixer->fading) {
        f32 elapsed = mixer->elapsed;
        if (mixer->duration <= elapsed) {
            mixer->fading = 0;
            fade->tracks[mixer->current ^ 1].handle = 0;
        } else {
            f32 weight = elapsed / mixer->duration;
            if (weight > 1.0f)
                weight = 1.0f;
            u32 i = 0;
            do {
                mixer->data[i] = 0.0f;
                i++;
            } while (i <= (u32)mixer->count - 1);
            CrossfadeTrack *track = &fade->tracks[mixer->current];
            if (weight > 0.0f)
                FUN_00198360(track->handle, fade->owner, mixer, track->params, track->volume, weight);
            track = &fade->tracks[mixer->current ^ 1];
            if (1.0f - weight > 0.0f)
                FUN_00198360(track->handle, fade->owner, mixer, track->params, track->volume, 1.0f - weight);
            FUN_00198144(mixer, fade->owner);
        }
    }
    if (!mixer->fading) {
        CrossfadeTrack *track = &fade->tracks[mixer->current];
        if (track->handle != 0) {
            FUN_00193c08(fade->channel, fade->owner);
            FUN_001981d8(track->handle, fade->owner, track->params, track->volume);
        }
    }
    if (mixer->fading) {
        mixer->elapsed += deltaTime;
        if (trackAdvance(&fade->tracks[mixer->current], deltaTime) && fade->onFinished)
            FUN_001882fc();
        trackAdvance(&fade->tracks[mixer->current ^ 1], deltaTime);
        return;
    }
    if (trackAdvance(&fade->tracks[mixer->current], deltaTime) && fade->onFinished)
        FUN_001882fc();
}

} /* extern "C" */
