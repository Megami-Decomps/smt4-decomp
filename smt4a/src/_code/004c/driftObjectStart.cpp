#include "common.h"

extern "C" {

/* A drifting effect object. */
struct DriftObject {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 active;
    /* 0x4C */ u32 unk4C;
    /* 0x50 */ u8 unk50[0x5C];
    /* 0xAC */ u32 mode;
    /* 0xB0 */ f32 speed;
    /* 0xB4 */ u8 unkB4[8];
    /* 0xBC */ u32 offset;
    /* 0xC0 */ u8 unkC0[4];
    /* 0xC4 */ f32 direction;
    /* 0xC8 */ u8 unkC8[0x20];
    /* 0xE8 */ f32 baseSpeed;
};

s32 randRange(u32 max);

/* Starts the drift with a speed chosen by type and a random direction. */
void driftObjectStart(DriftObject *object, s32 type)
{
    object->active = 1;
    object->unk4C = 0;
    object->mode = 15;
    switch (type) {
    case 1:
    case 2:
        object->speed = 1.7f;
        break;
    case 3:
        object->speed = 0.5f;
        break;
    default:
        object->speed = 1.4f;
        break;
    }
    if (randRange(1) == 0) {
        object->direction = 1.0f;
    } else {
        object->direction = -1.0f;
    }
    object->offset = 0;
    object->baseSpeed = object->speed;
}

} /* extern "C" */
