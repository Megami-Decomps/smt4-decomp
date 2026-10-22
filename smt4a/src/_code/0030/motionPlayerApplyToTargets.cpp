#include "shard/W9_W9Match1_MotionPlayer.h"

extern "C" {


void quadSourceCopyOut(MotionSource *source, f32 *offset);
void quadHolderCopyOut(MotionSource *source, f32 *rotation);
void FUN_003626bc(u32 target, f32 *rotation, f32 *offset, f32 weight);
void FUN_00322984(u32 sound, f32 speed);
void FUN_003380a0(u32 target, u16 frame);

/* Applies the source's motion to both targets and syncs them to its current frame. */
void motionPlayerApplyToTargets(MotionPlayer *player)
{
    f32 rotation[4];
    f32 offset[4];

    if (player->active == NULL || player->source->keyCount <= 1) {
        return;
    }
    MotionTargets *targets = player->targets;
    MotionInfo *info = player->source->info;
    if (player->source->flags & 1) {
        quadSourceCopyOut(player->source, offset);
        quadHolderCopyOut(player->source, rotation);
        FUN_003626bc(targets->first, rotation, offset, 1.0f);
        FUN_003626bc(targets->second, rotation, offset, 1.0f);
    }
    if (player->sound != 0) {
        FUN_00322984(player->sound, player->speed * 0.1f);
    }
    u16 frame = info->frame;
    FUN_003380a0(targets->first, frame);
    FUN_003380a0(targets->second, frame);
}

} /* extern "C" */
