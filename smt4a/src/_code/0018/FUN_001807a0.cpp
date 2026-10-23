/* NON_MATCHING: scalar-track narrow-index casts, reverse-byte loads and interpolation VFP allocation differ from retail. */
#include "ui/UiSpriteState.h"

static inline void uiBeginSpriteScalarKey(UiSpriteState *sprite, s16 index, s8 reverse)
{
    sprite->mode = index;
    sprite->verticalTrack.frame = 0;
    sprite->verticalTrack.reverse = reverse;
    sprite->completion.complete = 0;
    const UiSpriteScalarKey *key = &sprite->verticalKeys[index];
    sprite->unk20 = reverse ? key->last : key->first;
}

extern "C" void FUN_001807a0(UiSpriteState *sprite, f32 rate)
{
    if (!sprite->completion.vertical && sprite->verticalKeys) {
        const UiSpriteScalarKey *key = &sprite->verticalKeys[sprite->mode];
        u16 duration = (u32)((f32)(u32)key->duration / rate);
        if (sprite->verticalTrack.frame >= duration) {
            if (key->loop) {
                sprite->unk20 = sprite->verticalTrack.reverse ? key->last : key->first;
                sprite->verticalTrack.frame = 0;
                return;
            }
            sprite->unk20 = sprite->verticalTrack.reverse ? key->first : key->last;
            if (sprite->sequence.enabled && sprite->sequenceSteps &&
                sprite->sequenceSteps[sprite->sequence.step].key != -1) {
                UiSpriteSequenceStep *steps = sprite->sequenceSteps;
                ++sprite->sequence.step;
                UiSpriteSequenceStep *next = &steps[sprite->sequence.step];
                if (next->key != -1 && next->key != -3) {
                    if (next->key != -2) {
                        uiBeginSpriteScalarKey(sprite, next->key, next->reverse);
                    } else {
                        sprite->sequence.step = 0;
                        uiBeginSpriteScalarKey(sprite, steps[0].key, steps[0].reverse);
                    }
                    return;
                }
            }
        } else {
            f32 frames = (f32)(u32)key->duration / rate;
            f32 step;
            if (sprite->verticalTrack.reverse)
                step = (key->first - key->last) / frames;
            else
                step = (key->last - key->first) / frames;
            ++sprite->verticalTrack.frame;
            sprite->unk20 += step;
            return;
        }
    }
    sprite->completion.vertical = 1;
}
