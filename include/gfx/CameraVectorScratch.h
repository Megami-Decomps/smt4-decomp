#ifndef GFX_CAMERA_VECTOR_SCRATCH_H
#define GFX_CAMERA_VECTOR_SCRATCH_H
#include "shard/W5_W5Match1_RecordKeys.h"
#include <stddef.h>

struct CameraVectorScratch {
    u8 unk000[0x100];
    Vector4 direction;
    Vector4 origin;
};
typedef char CameraVectorScratchOffsets[offsetof(CameraVectorScratch, direction) == 0x100 &&
    offsetof(CameraVectorScratch, origin) == 0x110 && sizeof(CameraVectorScratch) == 0x120 ? 1 : -1];
#endif
