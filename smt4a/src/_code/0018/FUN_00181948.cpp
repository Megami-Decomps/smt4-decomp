/* NON_MATCHING: loop/image branches merge, frame-set count shift is hoisted, and integer/VFP scratch registers differ. */
#include "ui/UiSpriteState.h"

static inline UiSpriteFrameKey *spriteFrameSet(UiSpriteSource *source, s16 requested)
{
    s32 section = 0;
    u32 count = source->frameAnimation.frameTableBytes >> 2;
    for (u32 i = 0; i < count; ++i) {
        if (section == requested) {
            return &source->frameKeys[i];
        }
        if (source->frameKeys[i].image == -1) {
            ++section;
        }
    }
    return NULL;
}

// Advance image keys, loop markers and the image channel's multi-sequence continuation.
extern "C" void FUN_00181948(UiSpriteState *sprite, f32 rate)
{
    if (sprite->frameFlags.completed != 0 || sprite->frameKeys == NULL) {
        sprite->frameFlags.completed = 1;
        return;
    }
    UiSpriteFrameKey *keys = sprite->frameKeys;
    u16 duration = (u32)((f32)keys[sprite->frameTrack.key].duration / rate);
    if (sprite->frameTrack.elapsed < duration) {
        ++sprite->frameTrack.elapsed;
        return;
    }
    sprite->frameTrack.elapsed = 0;
    ++sprite->frameTrack.key;
    s32 image = keys[sprite->frameTrack.key].image;
    if (image == -1) {
        if (sprite->frameSequenceState.enabled != 0 && sprite->frameSequence != NULL &&
            sprite->frameSequence[sprite->frameSequenceState.step].key != -1) {
            UiSpriteFrameSequenceStep *sequence = sprite->frameSequence;
            ++sprite->frameSequenceState.step;
            s32 next = sequence[sprite->frameSequenceState.step].key;
            if (next != -1 && next != -3) {
                keys = spriteFrameSet(sprite->source, (s16)next);
                sprite->frameKeys = keys;
                if (keys == NULL) {
                    return;
                }
                sprite->frameTrack.key = 0;
                sprite->frameTrack.elapsed = 0;
                sprite->frameFlags.completed = 0;
                sprite->completion.complete = 0;
                sprite->unk04 = keys->image;
                sprite->unk08 = ~0u;
                return;
            }
        }
        sprite->frameFlags.completed = 1;
        return;
    }
    if (image == -2) {
        sprite->frameTrack.key = 0;
        image = keys->image;
    }
    sprite->unk04 = image;
    sprite->unk08 = ~0u;
}
