#ifndef UI_SCENEEXITTRANSITION_H
#define UI_SCENEEXITTRANSITION_H
#include "common.h"
#include "shard/S3SceneWidget.h"
#include <stddef.h>

/* Observed prefix of the scene's exit-transition work. */
struct SceneExitTransition {
    /* 0x000 */ u32 flags;
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 phase;
    /* 0x00C */ u8 unk00C[0x374];
    /* 0x380 */ f32 position[2];
    /* 0x388 */ u8 unk388[0x20];
    /* 0x3A8 */ u8 transition[0xAC];
    /* 0x454 */ SceneSprite animation;
};
typedef char SceneExitTransitionAnimationOffset[(offsetof(SceneExitTransition, animation) == 0x454) ? 1 : -1];
#endif
