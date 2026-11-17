#include "common.h"
#include "gfx/Vec4.h"

extern "C" {

extern void asd3dSoundActorSetPosition(u32 handle, Vec4 *value);

/* Forwards the handle with its by-value vector argument passed by address. */
void vec4Forward(u32 handle, Vec4 value)
{
    asd3dSoundActorSetPosition(handle, &value);
}

} /* extern "C" */
