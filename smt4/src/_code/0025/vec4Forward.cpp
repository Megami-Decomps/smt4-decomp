#include "common.h"

extern "C" {

typedef struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

extern void asd3dSoundActorSetPosition(u32 handle, Vec4 *value);

/* Forwards the handle with its by-value vector argument passed by address. */
void vec4Forward(u32 handle, Vec4 value)
{
    asd3dSoundActorSetPosition(handle, &value);
}

} /* extern "C" */
