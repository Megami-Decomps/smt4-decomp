#ifndef GFX_MOVE_CAMERA_CTRL_H
#define GFX_MOVE_CAMERA_CTRL_H
#include "gfx/CameraManager.h"
#include "shard/S1Mover.h"

struct MoveCameraTrackKey {
    u8 prefix[0x1C];
    Vec3f position;
    u8 padding[8];
    Vec3f *target;
};
struct MoveCameraTrack {
    u8 prefix[0x48];
    MoveCameraTrackKey **keys;
    u16 frameCount;
    u8 padding[0x46];
    u16 auxiliaryCount;
};
struct MoveCameraResource {
    u8 prefix[0x34];
    MoveCameraTrack *track;
    u8 suffix[0x10];
};
struct MoveCameraCtrlWork {
    s32 frameCount;
    s32 frame;
    u32 auxiliaryCount;
    u8 prefix[0x44];
    ManagedCamera camera;
    Vec3f eye;
    Vec3f target;
    f32 roll;
    f32 fieldOfView;
    f32 nearClip;
    f32 farClip;
    Vec3f up;
    f32 distance;
    MoveCameraResource *resource;
    s32 selectedKey;
    u8 padding[0x18];
    Vec3f initialPosition;
    Vec3f initialTarget;
};
typedef char MoveCameraCtrlLayoutCheck[sizeof(MoveCameraResource) == 0x48 &&
    offsetof(MoveCameraTrack, frameCount) == 0x4C &&
    offsetof(MoveCameraTrack, auxiliaryCount) == 0x94 &&
    offsetof(MoveCameraCtrlWork, camera) == 0x50 &&
    offsetof(MoveCameraCtrlWork, eye) == 0x55C &&
    offsetof(MoveCameraCtrlWork, up) == 0x584 &&
    offsetof(MoveCameraCtrlWork, resource) == 0x594 &&
    offsetof(MoveCameraCtrlWork, initialPosition) == 0x5B4 &&
    offsetof(MoveCameraCtrlWork, initialTarget) == 0x5C0 &&
    sizeof(MoveCameraCtrlWork) == 0x5CC ? 1 : -1];
#endif
