/* The perspective a stereo camera keeps, which stereoCameraSetPerspective (smt4 0x2c1e30, smt4a 0x1523b8) takes
 * by value as stereoCameraSetPerspective(view, pivot, perspective): its four floats travel in s0-s3. */
#ifndef GFX_CAMERAPERSPECTIVE_H
#define GFX_CAMERAPERSPECTIVE_H

#include "common.h"

/* A perspective projection: vertical field of view in degrees, clip planes and aspect ratio. */
typedef struct CameraPerspective {
    /* 0x00 */ f32 fovy;
    /* 0x04 */ f32 nearZ;
    /* 0x08 */ f32 farZ;
    /* 0x0C */ f32 aspect;
} CameraPerspective;
typedef char CameraPerspectiveSize[sizeof(CameraPerspective) == 0x10 ? 1 : -1];

#endif
