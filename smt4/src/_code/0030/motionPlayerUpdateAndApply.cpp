#include "shard/W9_W9Match1_MotionPlayer.h"

extern "C" {
void FUN_0021a70c(MotionPlayer *player);
void FUN_0024f890(MotionSource *source, f32 *offset);
void FUN_0024f880(MotionSource *source, f32 *translation);
void FUN_0024f7d4(u32 target, f32 *translation, f32 *rotation, f32 weight);
void FUN_00267d84(u32 sound, f32 speed);
void FUN_0024f5ec(u32 target, u16 frame);

// Update a motion player, then apply its transform and frame to both targets.
void motionPlayerUpdateAndApply(MotionPlayer *player)
{
    f32 translation[4];
    f32 rotation[4];
    FUN_0021a70c(player);
    if (player->active == NULL || player->source->keyCount <= 1) {
        return;
    }
    MotionTargets *targets = player->targets;
    MotionInfo *info = player->source->info;
    if (player->source->flags & 1) {
        FUN_0024f890(player->source, rotation);
        FUN_0024f880(player->source, translation);
        FUN_0024f7d4(targets->first, translation, rotation, 1.0f);
        FUN_0024f7d4(targets->second, translation, rotation, 1.0f);
    }
    if (player->sound != 0) {
        FUN_00267d84(player->sound, player->speed * 0.1f);
    }
    u16 frame = info->frame;
    FUN_0024f5ec(targets->first, frame);
    FUN_0024f5ec(targets->second, frame);
}
}
