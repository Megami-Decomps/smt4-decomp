#ifndef GFX_MOVE_CAMERA_CTRL_H
#define GFX_MOVE_CAMERA_CTRL_H
#include "gfx/CameraManager.h"
#include "shard/S1Mover.h"
#include "map/MapVector.h"

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
class MoriModelContent;    /* Model/MoriModelContent.h */

/* Eye and target of one camera pose. */
struct MoveCameraPose {
    /* 0x00 */ Vec3f position;
    /* 0x0C */ Vec3f target;
};

/* mikado/moveCamera/MoveCameraCtrl.cpp (Apocalypse): the mikado scene's camera controller (0x7A0 bytes; the scene
 * allocates it as MikadoTalkWorkA, mikado/mikadoMain.h). moveCameraCtrlSetup loads the camera model, its camera
 * track and the point markers. */
struct MoveCameraCtrlWork {
    /* 0x000 */ s32 frameCount;
    /* 0x004 */ s32 frame;
    /* 0x008 */ u32 auxiliaryCount;
    /* 0x00C */ s32 pointCount;                /* the camera model's "Dum_" bones, kept in points[] */
    /* 0x010 */ u32 elapsed;                   /* cleared when the camera snaps to a key */
    /* 0x014 */ u8 moving;
    /* 0x015 */ u8 hasPoints;                  /* pointCount > 0: the two markers are loaded */
    /* 0x016 */ u8 unk016[2];
    /* 0x018 */ MoriModelContent *cameraModel;
    /* 0x01C */ MoriModelContent *pointModel;  /* mikado/point.bam, placed at pointPosition */
    /* 0x020 */ MoriModelContent *arrowModel;  /* mikado/yaji.bam */
    /* 0x024 */ u8 unk024[0x2C];
    /* 0x050 */ ManagedCamera camera;
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
    /* 0x59C */ MoveCameraPose poseStep;       /* per-frame change toward the selected key */
    /* 0x5B4 */ Vec3f initialPosition;
    /* 0x5C0 */ Vec3f initialTarget;
    /* 0x5CC */ MoveCameraPose destinationPose;
    /* 0x5E4 */ Vec3f firstKeyPosition;        /* the camera track's first key, as loaded */
    /* 0x5F0 */ Vec3f firstKeyTarget;
    /* 0x5FC */ MapVector pointStep;           /* per-frame change toward savedPointPosition */
    /* 0x608 */ MapVector pointPosition;       /* where the point marker stands */
    /* 0x614 */ MapVector savedPointPosition;  /* restored when the camera snaps to a key */
    /* 0x620 */ MapVector points[0x20];        /* positions of the "Dum_" bones */
};
typedef char MoveCameraCtrlLayoutCheck[sizeof(MoveCameraResource) == 0x48 &&
    offsetof(MoveCameraTrack, frameCount) == 0x4C &&
    offsetof(MoveCameraTrack, auxiliaryCount) == 0x94 &&
    offsetof(MoveCameraCtrlWork, camera) == 0x50 &&
    offsetof(MoveCameraCtrlWork, eye) == 0x55C &&
    offsetof(MoveCameraCtrlWork, up) == 0x584 &&
    offsetof(MoveCameraCtrlWork, resource) == 0x594 &&
    offsetof(MoveCameraCtrlWork, poseStep) == 0x59C &&
    offsetof(MoveCameraCtrlWork, initialPosition) == 0x5B4 &&
    offsetof(MoveCameraCtrlWork, initialTarget) == 0x5C0 &&
    offsetof(MoveCameraCtrlWork, destinationPose) == 0x5CC &&
    offsetof(MoveCameraCtrlWork, pointStep) == 0x5FC &&
    offsetof(MoveCameraCtrlWork, pointCount) == 0xC && offsetof(MoveCameraCtrlWork, hasPoints) == 0x15 &&
    offsetof(MoveCameraCtrlWork, cameraModel) == 0x18 && offsetof(MoveCameraCtrlWork, firstKeyPosition) == 0x5E4 &&
    offsetof(MoveCameraCtrlWork, pointPosition) == 0x608 && offsetof(MoveCameraCtrlWork, points) == 0x620 &&
    sizeof(MoveCameraCtrlWork) == 0x7A0 ? 1 : -1];

extern "C" void spatialCameraUpdateLookAt(MoveCameraCtrlWork *work);

/* Moves the camera to key `index` of its track, if the track has one: the camera takes the key's position and
 * target. `frameCount` is the number of keys, `frame` the key the camera is at and `selectedKey` the caller's mode
 * (-1 when the track is loaded). moveCameraCtrlSnapToNode and the track loader (moveCameraCtrlLoadTrack, key 0) inline it. */
static __inline void moveCameraSelectKey(MoveCameraCtrlWork *work, s32 index, s32 mode)
{
    if (index >= 0 && work->frameCount > index) {
        work->selectedKey = mode;
        work->frame = index;
        const MoveCameraTrackKey *key = work->resource->track->keys[index];
        /* The target pointer is read before the position copy: the copy's word stores may alias it, so reading
         * it afterwards would be another program (armcc reloads it there; retail reads it first, here and in
         * moveCameraCtrlSetup's first-key copy). */
        const Vec3f *target = key->target;
        work->initialPosition = key->position;
        work->initialTarget = *target;
        spatialCameraUpdateLookAt(work);
    }
}
#endif
