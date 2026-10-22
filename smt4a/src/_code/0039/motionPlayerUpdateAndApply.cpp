#include "shard/W9_W9Match1_MotionPlayer.h"

extern "C" {
void FUN_00300e5c(MotionPlayer *player);
void quadSourceCopyOut(MotionSource *source, f32 *offset);
void quadHolderCopyOut(MotionSource *source, f32 *translation);
void FUN_003626bc(u32 target, f32 *translation, f32 *rotation, f32 weight);
void FUN_00322984(u32 sound, f32 speed);
void FUN_003380a0(u32 target, u16 frame);

// Update a motion player, then apply its transform and frame to both targets.
void motionPlayerUpdateAndApply(MotionPlayer *player)
{
    f32 translation[4];
    f32 rotation[4];
    FUN_00300e5c(player);
    if (player->active == NULL || player->source->keyCount <= 1) {
        return;
    }
    MotionTargets *targets = player->targets;
    MotionInfo *info = player->source->info;
    if (player->source->flags & 1) {
        quadSourceCopyOut(player->source, rotation);
        quadHolderCopyOut(player->source, translation);
        FUN_003626bc(targets->first, translation, rotation, 1.0f);
        FUN_003626bc(targets->second, translation, rotation, 1.0f);
    }
    if (player->sound != 0) {
        FUN_00322984(player->sound, player->speed * 0.1f);
    }
    u16 frame = info->frame;
    FUN_003380a0(targets->first, frame);
    FUN_003380a0(targets->second, frame);
}
}
