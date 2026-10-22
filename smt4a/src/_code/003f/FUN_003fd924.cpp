/* NON_MATCHING: retail keeps a zero in r10 for the null resource and the blending flag, stores the flag through player + 8, and saves r9/r10. */
#include "common.h"

extern "C" {

typedef struct MotionSet {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ void **motions;
    /* 0x64 */ u16 motionCount;
} MotionSet;

typedef struct MotionResourceBody {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ MotionSet *motionSet;
} MotionResourceBody;

typedef struct MotionResource {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ MotionResourceBody body;
} MotionResource;

typedef struct MotionSlot {
    /* 0x00 */ u32 index;
    /* 0x04 */ f32 frame;
    /* 0x08 */ f32 startFrame;
    /* 0x0C */ void *motion;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u8 state[0xC];
    /* 0x20 */ u8 loop;
    /* 0x21 */ u8 unk21[0xF];
} MotionSlot;

typedef struct MotionPlayer {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ f32 blendDuration;
    /* 0x018 */ f32 blendTime;
    /* 0x01C */ u32 current; // index of the active slot
    /* 0x020 */ u8 blending;
    /* 0x021 */ u8 unk021[3];
    /* 0x024 */ MotionSlot slots[2];
    /* 0x084 */ u8 unk084[0x84];
    /* 0x108 */ u32 unk108;
    /* 0x10C */ u8 unk10C[0x100];
    /* 0x20C */ MotionResource *resource;
    /* 0x210 */ u32 model;
} MotionPlayer;

void FUN_00193c08(u32 model, u32 arg);
void FUN_0045aca8(u8 *state, void *motion, u32 model);

/* Starts motion `index` in the other slot, blending from the current one over `blend` frames. */
void FUN_003fd924(MotionPlayer *player, u32 index, u8 loop, f32 frame, f32 blend)
{
    MotionResourceBody *body = player->resource != NULL ? &player->resource->body : NULL;
    MotionSet *set = body->motionSet;
    void *motion;
    MotionSlot *slot;

    if (index >= set->motionCount) {
        return;
    }
    motion = set->motions[index];
    if (motion == NULL) {
        return;
    }
    player->current ^= 1;
    FUN_00193c08(player->model, player->unk108);
    slot = &player->slots[player->current];
    slot->index = index;
    slot->frame = frame;
    slot->startFrame = frame;
    slot->motion = motion;
    FUN_0045aca8(slot->state, motion, player->model);
    slot->loop = loop;
    player->blendTime = 0.0f;
    player->blendDuration = blend;
    if (blend > 0.0f && player->slots[player->current ^ 1].motion != NULL) {
        player->blending = 1;
    } else {
        player->blending = 0;
    }
}

} /* extern "C" */
