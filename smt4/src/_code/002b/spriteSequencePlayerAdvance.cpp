/* NON_MATCHING: frame index/elapsed and zero/-1 constants use different registers; queued-sequence addressing and the final finished store also schedule differently. */
#include "common.h"

struct SpriteSequenceFrame {
    /* 0x00 */ s16 frame;
    /* 0x02 */ u16 duration;
};

struct SpriteSequenceResource {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u16 frameBytes;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ SpriteSequenceFrame *frames;
};

struct SpriteQueuedSequence {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 sequence;
    /* 0x0c */ u8 unk0c[0x10];
};

struct SpriteSequencePlayer {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 frame;
    /* 0x08 */ s32 cachedFrame;
    /* 0x0c */ u8 unk0c[0x3c];
    /* 0x48 */ SpriteSequenceResource *resource;
    /* 0x4c */ u8 unk4c[0x24];
    /* 0x70 */ SpriteSequenceFrame *frames;
    /* 0x74 */ s16 index;
    /* 0x76 */ s16 elapsed;
    /* 0x78 */ SpriteQueuedSequence *queue;
    /* 0x7c */ u8 unk7c[6];
    /* 0x82 */ s16 queueIndex;
    /* 0x84 */ u8 queued;
    /* 0x85 */ u8 unk85[4];
    /* 0x89 */ u8 finished;
    /* 0x8a */ u8 restarted;
};

static __inline SpriteSequenceFrame *findSpriteSequence(SpriteSequenceResource *resource, s16 sequence)
{
    s32 current = 0;
    for (u32 i = 0; i < (resource->frameBytes >> 2); ++i) {
        if (current == sequence)
            return &resource->frames[i];
        if (resource->frames[i].frame == -1)
            ++current;
    }
    return NULL;
}

extern "C" {
// Advance sprite frames, looping or switching to a queued sequence at a terminator.
void spriteSequencePlayerAdvance(SpriteSequencePlayer *player)
{
    if (!player->finished && player->frames != NULL) {
        SpriteSequenceFrame *frames = player->frames;
        if (player->elapsed < frames[player->index].duration) {
            ++player->elapsed;
        } else {
            player->elapsed = 0;
            ++player->index;
            s32 frame = frames[player->index].frame;
            if (frame == -1) {
                if (player->queued && player->queue &&
                    player->queue[player->queueIndex].sequence != -1) {
                    ++player->queueIndex;
                    s32 sequence = player->queue[player->queueIndex].sequence;
                    if (sequence != -1 && sequence != -3) {
                        frames = findSpriteSequence(player->resource, sequence);
                        player->frames = frames;
                        if (frames == NULL)
                            return;
                        player->index = 0;
                        player->elapsed = 0;
                        player->finished = 0;
                        player->restarted = 0;
                        player->frame = frames[0].frame;
                        player->cachedFrame = -1;
                        return;
                    }
                }
                player->finished = 1;
                return;
            }
            if (frame == -2) {
                player->index = 0;
                player->frame = frames[0].frame;
                player->cachedFrame = -1;
            } else {
                player->frame = frame;
                player->cachedFrame = -1;
            }
        }
    }
}
}
