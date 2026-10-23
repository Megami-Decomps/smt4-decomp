/* NON_MATCHING: key-search registers, decoded argument evaluation order and Hermite tail-call lowering differ. */
#include "gfx/QuantizedHermiteTrack.h"

static inline f32 decodeKeyValue(const QuantizedHermiteTrack *track, const QuantizedHermiteKey *key)
{
    u32 value = key->valueLow + ((key->packed & 15) << 8);
    return track->valueBias + static_cast<f32>(value) * track->valueScale;
}
static inline f32 decodeKeyTangent(const QuantizedHermiteKey *key)
{
    s32 tangent = key->tangentHigh * 16 + (key->packed >> 4);
    return static_cast<f32>(tangent) * (1.0f / 32.0f);
}

extern "C" {
f32 nn_math_ARMv6_HermiteC_FAST(f32, f32, f32, f32, f32, f32);

f32 FUN_005193c0(const QuantizedHermiteTrack *track, f32 frame)
{
    const QuantizedHermiteKey *first = track->keys;
    const QuantizedHermiteKey *last = first + track->count - 1;
    u32 discreteFrame = static_cast<u32>(frame / track->frameScale);
    const QuantizedHermiteKey *key = first;
    if (key->frame <= discreteFrame) {
        key = last;
        if (discreteFrame < key->frame) {
            u32 index = static_cast<u32>(track->inverseDuration *
                (static_cast<f32>(track->count - 1) * frame));
            key = first + index;
            if (discreteFrame < key->frame) {
                do {
                    --key;
                } while (discreteFrame < key->frame);
            } else {
                do {
                    ++key;
                } while (key->frame <= discreteFrame);
                --key;
            }
        }
    }
    f32 keyFrame = static_cast<f32>(key->frame) * track->frameScale;
    if (keyFrame == frame || key == last)
        return decodeKeyValue(track, key);
    f32 nextFrame = static_cast<f32>(key[1].frame) * track->frameScale;
    return nn_math_ARMv6_HermiteC_FAST(
        decodeKeyValue(track, key), decodeKeyTangent(key),
        decodeKeyValue(track, key + 1), decodeKeyTangent(key + 1),
        frame - keyFrame, nextFrame - keyFrame);
}
}
