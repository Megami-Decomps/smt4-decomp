#ifndef MAP_AMBIENT_MOVEMENT_H
#define MAP_AMBIENT_MOVEMENT_H

#include "map/MapVector.h"
#include <stddef.h>

struct AmbientMovementTransform {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MapVector position;
    /* 0x10 */ u8 unk10[0x24];
    /* 0x34 */ s32 frame;
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 sound;
};

struct AmbientMovementActor {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ AmbientMovementTransform movement;
};

struct AmbientMovementWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ AmbientMovementActor *actor;
    /* 0x10 */ MapVector velocity;
    /* 0x1C */ s32 state;
    /* 0x20 */ f32 speed;
};

typedef char AmbientMovementOffsets[offsetof(AmbientMovementActor, movement.position) == 0x28 &&
    offsetof(AmbientMovementTransform, frame) == 0x34 && offsetof(AmbientMovementTransform, sound) == 0x3C &&
    offsetof(AmbientMovementWork, velocity) == 0x10 && offsetof(AmbientMovementWork, state) == 0x1C &&
    offsetof(AmbientMovementWork, speed) == 0x20 ? 1 : -1];

extern "C" void FUN_0039560c(AmbientMovementWork *work);

#endif
