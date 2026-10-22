/* NON_MATCHING: reverse-slide setup and completion-byte branch layout differ. */
#include "common.h"

struct SlidingSprite {
    u8 unk00[0xC];
    s32 offset;
    u8 unk10[0x42];
    s16 frame;
    u8 unk54[0x31];
    u8 dirty;
    u8 channels[4];
    s8 finished;
    u8 unk8B;
};
struct ScaleController;
extern "C" {
void FUN_002b1e08(SlidingSprite *);
void controllerUpdateUniformScaleTrack(ScaleController *);
void spriteSequencePlayerAdvance(SlidingSprite *);
}

extern "C" s32 FUN_002b8ee0(SlidingSprite *sprite, s32 reverse)
{
    s32 frame = sprite->frame;
    if (frame == 0) {
        sprite->offset = reverse ? -320 * 4096 : 320 * 4096;
    }
    s32 step = 55;
    if (frame > 0) {
        step = 55 - frame * 5;
        if (step < 0) step = 0;
    }
    if (reverse) step = -step;
    sprite->offset -= step * 4096;
    s32 position = sprite->offset >> 12;
    if (reverse ? position >= 0 : position <= 0) {
        sprite->offset = 0;
        sprite->channels[0] = 1;
    } else {
        sprite->finished = 0;
    }
    ++sprite->frame;
    FUN_002b1e08(sprite);
    controllerUpdateUniformScaleTrack(reinterpret_cast<ScaleController *>(sprite));
    spriteSequencePlayerAdvance(sprite);
    sprite->finished = sprite->channels[0] && sprite->channels[1] &&
                       sprite->channels[2] && sprite->channels[3];
    sprite->dirty = 1;
    return sprite->finished;
}
