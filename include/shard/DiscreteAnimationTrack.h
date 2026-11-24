/* A discrete animation track: each key supplies the value until the next key. */
#ifndef SHARD_DISCRETE_ANIMATION_TRACK_H
#define SHARD_DISCRETE_ANIMATION_TRACK_H

#include "common.h"
#include <stddef.h>

template <class T>
struct DiscreteAnimationKey {
    /* 0x00 */ f32 time;
    /* 0x04 */ T value;
};

template <class T>
struct DiscreteAnimationTrack {
    /* 0x00 */ u16 keyCount;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ f32 keyRate;  /* Scales playback time to the first key index to try. */
    /* 0x08 */ DiscreteAnimationKey<T> keys[1];
};

typedef char DiscreteAnimationTrackLayoutCheck[
    sizeof(DiscreteAnimationKey<s32>) == 8 && sizeof(DiscreteAnimationKey<f32>) == 8 &&
    offsetof(DiscreteAnimationTrack<s32>, keys) == 8 &&
    offsetof(DiscreteAnimationTrack<f32>, keys) == 8 ? 1 : -1];

/* Finds the latest key at or before time, starting at an estimated index. Before the first key,
 * returns that key. This is the same search as curveSampleLinear uses before interpolating. */
template <class T>
static __inline const DiscreteAnimationKey<T> *discreteAnimationFindKey(const DiscreteAnimationTrack<T> *track, f32 time)
{
    const DiscreteAnimationKey<T> *key = track->keys;
    if (key->time > time) {
        return key;
    }
    key = &track->keys[track->keyCount - 1];
    if (key->time <= time) {
        return key;
    }
    u32 estimate = (u32)(track->keyRate * ((f32)(track->keyCount - 1) * time));
    key = &track->keys[estimate];
    if (key->time > time) {
        do {
            --key;
        } while (key->time > time);
    } else {
        do {
            ++key;
        } while (key->time <= time);
        --key;
    }
    return key;
}

#endif
