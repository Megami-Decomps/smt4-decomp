#include "common.h"

extern "C" {

typedef struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

extern void FUN_002cc1c0(u32 handle, Vec4 *value);

/* Forwards the handle with its by-value vector argument passed by address. */
void vec4Forward(u32 handle, Vec4 value)
{
    FUN_002cc1c0(handle, &value);
}

} /* extern "C" */
