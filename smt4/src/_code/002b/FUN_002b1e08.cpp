/* NON_MATCHING: interpolation cold branch and sequence reset paths are merged differently; VFP allocation differs. */
#include "ui/UiSpriteState.h"

extern "C" {
// Advance the vertical interpolation key and its optional sequence.
void FUN_002b1e08(UiSpriteState *sprite)
{
    if (sprite->completion.vertical != 0 || sprite->verticalKeys == NULL)
        return;
    UiSpriteScalarKey *key = &sprite->verticalKeys[sprite->mode];
    if (sprite->verticalTrack.frame < key->duration) {
        f32 delta;
        if (sprite->verticalTrack.reverse)
            delta = (key->first - key->last) / (f32)(u32)key->duration;
        else
            delta = (key->last - key->first) / (f32)(u32)key->duration;
        ++sprite->verticalTrack.frame;
        sprite->unk20 += delta;
        return;
    }
    if (key->loop != 0) {
        sprite->unk20 = sprite->verticalTrack.reverse ? key->last : key->first;
        sprite->verticalTrack.frame = 0;
        return;
    }
    sprite->unk20 = sprite->verticalTrack.reverse ? key->first : key->last;
    if (sprite->sequence.enabled && sprite->sequenceSteps != NULL &&
        sprite->sequenceSteps[sprite->sequence.step].key != -1) {
        ++sprite->sequence.step;
        UiSpriteSequenceStep *step = &sprite->sequenceSteps[sprite->sequence.step];
        if (step->key != -1 && step->key != -3) {
            if (step->key == -2) {
                sprite->sequence.step = 0;
                step = sprite->sequenceSteps;
            }
            sprite->mode = step->key;
            sprite->verticalTrack.frame = 0;
            sprite->verticalTrack.reverse = step->reverse;
            sprite->completion.complete = 0;
            key = &sprite->verticalKeys[sprite->mode];
            sprite->unk20 = sprite->verticalTrack.reverse ? key->last : key->first;
            return;
        }
    }
    sprite->completion.vertical = 1;
}
}
