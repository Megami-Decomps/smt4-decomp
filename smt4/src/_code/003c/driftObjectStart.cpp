#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {

/* A drifting effect object. */
struct DriftObject {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 active;
    /* 0x4C */ u32 unk4C;
    /* 0x50 */ u8 unk50[0x50];
    /* 0xA0 */ u32 mode;
    /* 0xA4 */ f32 speed;
    /* 0xA8 */ u8 unkA8[8];
    /* 0xB0 */ u32 offset;
    /* 0xB4 */ u8 unkB4[4];
    /* 0xB8 */ f32 direction;
    /* 0xBC */ u8 unkBC[0x20];
    /* 0xDC */ f32 baseSpeed;
};


/* Starts the drift with a speed chosen by type and a random direction. */
void driftObjectStart(DriftObject *object, s32 type)
{
    object->active = 1;
    object->unk4C = 0;
    object->mode = 5;
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
    if (randNextInRange(1) == 0) {
        object->direction = 1.0f;
    } else {
        object->direction = -1.0f;
    }
    object->offset = 0;
    object->baseSpeed = object->speed;
}

} /* extern "C" */
