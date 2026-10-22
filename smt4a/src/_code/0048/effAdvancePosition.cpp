/* Advances the effect's position by its velocity, and every 10 ticks runs the periodic update. */
#include "common.h"

extern "C" {

typedef struct Motion {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ f32 x;
    /* 0x08 */ f32 y;
    /* 0x0C */ f32 z;
} Motion;

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ Motion motion;
    /* 0x38 */ u8 unk38[0x24];
    /* 0x5C */ s32 tick;
} Owner;

typedef struct Effect {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ Owner *owner;
    /* 0x10 */ f32 velX;
    /* 0x14 */ f32 velY;
    /* 0x18 */ f32 velZ;
} Effect;

extern void FUN_00481dd8(Effect *effect);

void effAdvancePosition(Effect *effect)
{
    Owner *owner = effect->owner;
    Motion *motion = &owner->motion;

    if (owner->tick % 10 == 0) {
        FUN_00481dd8(effect);
    }
    motion->x += effect->velX;
    motion->y += effect->velY;
    motion->z += effect->velZ;
}

}
