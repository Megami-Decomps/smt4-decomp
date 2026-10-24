#include "common.h"

extern "C" {

struct UnitTransform {
    /* 0x00 */ u32 kind;
    /* 0x04 */ u32 flags;
    /* 0x08 */ f32 offset;
    /* 0x0c */ f32 scaleX;
    /* 0x10 */ f32 scaleY;
};

/* Resets a transform to kind 1 with unit scale. */
void unitTransformReset(UnitTransform *transform)
{
    transform->kind = 1;
    transform->flags = 0;
    transform->offset = 0.0f;
    transform->scaleX = 1.0f;
    transform->scaleY = 1.0f;
}

} /* extern "C" */
