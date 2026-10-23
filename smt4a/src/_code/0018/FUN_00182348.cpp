/* NON_MATCHING: endpoint/sequence register lifetimes, cold completion exit and interpolation scheduling differ; redundant mirror stores are omitted. */
#include "ui/UiSpriteState.h"

struct UiSpriteScaleSequenceStep {
    u8 unk00[0x14];
    s32 key;
    s8 reverse;
    u8 unk19[3];
};
// A private view of the scale channel, whose sequence uses a different key
// displacement from the vertical and frame sequence formats.
struct SpriteScaleTrackView {
    u8 prefix[0x64];
    UiSpriteScalarKey *keys;
    s16 key;
    u16 elapsed;
    s8 reverse;
    u8 unk6D[0xB];
    UiSpriteScaleSequenceStep *sequence;
    u8 unk7C[4];
    s16 step;
};
typedef char SpriteScaleTrackViewOffsets[
    offsetof(SpriteScaleTrackView, keys) == 0x64 &&
    offsetof(SpriteScaleTrackView, reverse) == 0x6C &&
    offsetof(SpriteScaleTrackView, sequence) == 0x78 &&
    offsetof(SpriteScaleTrackView, step) == 0x80 &&
    sizeof(UiSpriteScaleSequenceStep) == 0x1C ? 1 : -1];

static __inline void uiSpriteBeginScaleStep(UiSpriteState *sprite, s16 index, s8 reverse)
{
    SpriteScaleTrackView *track = (SpriteScaleTrackView *)sprite;
    track->key = index;
    track->elapsed = 0;
    track->reverse = reverse;
    sprite->animationFlags.completed = 0;
    const UiSpriteScalarKey *key = &track->keys[index];
    sprite->unk24 = reverse ? key->last : key->first;
}

extern "C" void FUN_00182348(UiSpriteState *sprite, f32 rate)
{
    SpriteScaleTrackView *track = (SpriteScaleTrackView *)sprite;
    if (sprite->completion.scale || track->keys == NULL) {
        sprite->completion.scale = 1;
        return;
    }
    const UiSpriteScalarKey *key = &track->keys[track->key];
    f32 current = sprite->unk24;
    f32 delta = key->last - key->first;
    f32 direction = track->reverse ? key->first - key->last : delta;
    f32 target = track->reverse ? key->first : key->last;
    bool reached = direction < 0.0f ? target >= current : target <= current;
    if (reached) {
        if (key->loop) {
            sprite->unk24 = track->reverse ? key->last : key->first;
            track->elapsed = 0;
        } else {
            sprite->unk24 = target;
            if (sprite->sequence.enabled && track->sequence != NULL &&
                track->sequence[track->step].key != -1) {
                UiSpriteScaleSequenceStep *sequence = track->sequence;
                ++track->step;
                const UiSpriteScaleSequenceStep *step = &sequence[track->step];
                if (step->key == -1 || step->key == -3) {
                    sprite->completion.scale = 1;
                } else if (step->key == -2) {
                    track->step = 0;
                    uiSpriteBeginScaleStep(sprite, (s16)sequence[0].key, sequence[0].reverse);
                } else {
                    uiSpriteBeginScaleStep(sprite, (s16)step->key, step->reverse);
                }
            } else {
                sprite->completion.scale = 1;
            }
        }
    } else {
        f32 duration = (f32)(u32)key->duration / rate;
        if (track->reverse)
            delta = key->first - key->last;
        sprite->unk24 = delta / duration + current;
        ++track->elapsed;
    }
    sprite->unk28 = sprite->unk24;
    sprite->unk2C = sprite->unk24;
}
