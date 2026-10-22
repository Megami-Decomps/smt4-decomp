#include "common.h"

extern "C" {

typedef struct MotionInfo {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u32 frame;
} MotionInfo;

typedef struct MotionSource {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 flags;
    /* 0x10 */ s32 keyCount;
    /* 0x14 */ u8 unk14[0xC];
    /* 0x20 */ MotionInfo *info;
} MotionSource;

typedef struct MotionTargets {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 first;
    /* 0x14 */ u32 second;
} MotionTargets;

typedef struct MotionPlayer {
    /* 0x00 */ void *active;
    /* 0x04 */ u8 unk04[0x20];
    /* 0x24 */ f32 speed;
    /* 0x28 */ MotionTargets *targets;
    /* 0x2C */ u32 sound;
    /* 0x30 */ MotionSource *source;
} MotionPlayer;

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
