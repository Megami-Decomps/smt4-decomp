#ifndef GFX_CAMERA_VECTOR3_H
#define GFX_CAMERA_VECTOR3_H

#include "common.h"

/* A point or direction in camera space. */
struct AsdCameraVec3 {
    f32 x;
    f32 y;
    f32 z;
};
typedef char AsdCameraVec3SizeCheck[sizeof(AsdCameraVec3) == 0x0c ? 1 : -1];

/* A camera's independently initialized starting position. */
struct CameraPosition : AsdCameraVec3 {
    CameraPosition(f32 initialX, f32 initialY, f32 initialZ)
    {
        x = initialX;
        y = initialY;
        z = initialZ;
    }
};
typedef char CameraPositionSizeCheck[sizeof(CameraPosition) == 0x0c ? 1 : -1];

#endif
