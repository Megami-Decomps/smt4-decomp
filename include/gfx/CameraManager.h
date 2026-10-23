#ifndef GFX_CAMERA_MANAGER_H
#define GFX_CAMERA_MANAGER_H
#include "common.h"
#include <stddef.h>

struct ManagedCamera {
    /* 0x000 */ u8 data[0x50C];
};
struct CameraManagerWork {
    /* 0x000 */ u8 unk000[0x80];
    /* 0x080 */ ManagedCamera *active[2];
    /* 0x088 */ ManagedCamera cameras[2];
};
struct CameraManager {
    /* 0x00 */ u32 job;
    /* 0x04 */ CameraManagerWork *work;
};
/* IV's camera record is four bytes shorter than Apocalypse's. */
struct ManagedCameraIV {
    /* 0x000 */ u8 data[0x508];
};
struct CameraManagerWorkIV {
    /* 0x000 */ u8 unk000[0x80];
    /* 0x080 */ ManagedCameraIV *active[2];
    /* 0x088 */ ManagedCameraIV cameras[2];
};
struct CameraManagerIV {
    /* 0x00 */ u32 job;
    /* 0x04 */ CameraManagerWorkIV *work;
};
typedef char CameraManagerWorkIVOffsets[
    sizeof(ManagedCameraIV) == 0x508 &&
    offsetof(CameraManagerWorkIV, active) == 0x80 &&
    offsetof(CameraManagerWorkIV, cameras) == 0x88 &&
    sizeof(CameraManagerWorkIV) == 0xA98 &&
    offsetof(CameraManagerIV, work) == 4 ? 1 : -1];
struct CameraDefaultVector { f32 x, y, z; };
struct CameraDefaultLookAt {
    CameraDefaultVector eye;
    CameraDefaultVector target;
    CameraDefaultVector up;
};
typedef char CameraManagerWorkOffsets[
    sizeof(ManagedCamera) == 0x50C &&
    offsetof(CameraManagerWork, active) == 0x80 &&
    offsetof(CameraManagerWork, cameras) == 0x88 &&
    sizeof(CameraManagerWork) == 0xAA0 &&
    offsetof(CameraManager, work) == 4 ? 1 : -1];
#endif
