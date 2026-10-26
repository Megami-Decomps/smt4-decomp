#ifndef W5_W5MATCH8_CAMERA_TRANSITION_H
#define W5_W5MATCH8_CAMERA_TRANSITION_H
#include "common.h"
#include <stddef.h>
struct W5Match8Vec3 { f32 x, y, z; };
struct W5Match8CameraTransition {
    union {
        /* 0x000 */ u8 unk000[0x5BC];
        struct {
            u8 prefix[0x5a4];
            W5Match8Vec3 position; /* 0x5a4 */
        } reference;
    };
    /* 0x5BC */ u32 source;
    /* 0x5C0 */ u8 unk5C0[0x4];
    /* 0x5C4 */ W5Match8Vec3 target;
    /* 0x5D0 */ u8 unk5D0[0xC];
    /* 0x5DC */ W5Match8Vec3 alternateTarget;
    /* 0x5E8 */ u8 unk5E8[0x18];
    /* 0x600 */ f32 distance;
    /* 0x604 */ f32 angle;
    /* 0x608 */ union {
        u8 unk608[0x3C];
        W5Match8Vec3 targetStart;
    };
    /* 0x644 */ u32 savedSource;
    /* 0x648 */ u8 unk648[0x4];
    /* 0x64C */ u32 flags;
    /* 0x650 */ u8 unk650[0xD4];
    /* 0x724 */ f32 distanceProgress;
    /* 0x728 */ u32 distanceDuration;
    /* 0x72C */ u32 distanceFrame;
    /* 0x730 */ u32 distanceMode;
    /* 0x734 */ u8 unk734[0x4];
    /* 0x738 */ W5Match8Vec3 targetProgress;
    /* 0x744 */ u32 targetDuration;
    /* 0x748 */ union { u8 unk748[4]; u32 targetFrame; };
    /* 0x74C */ u32 targetMode;
    /* 0x750 */ W5Match8Vec3 alternateProgress;
    /* 0x75C */ u32 alternateDuration;
    /* 0x760 */ u32 alternateFrame;
    /* 0x764 */ u32 alternateMode;
    /* 0x768 */ union {
        u8 unk768[0x48];
        struct {
            u8 unk768[0x18];
            /* 0x780 */ u32 duration;
            /* 0x784 */ u32 frame;
            /* 0x788 */ u32 mode;
            /* 0x78C */ union { u8 unk78C[4]; s32 shift; };
            /* 0x790 */ s32 offset;
        } arc;
        struct {
            W5Match8Vec3 target;   /* 0x768 */
            W5Match8Vec3 position; /* 0x774 */
        } lookAt;
    };
    /* 0x7B0 */ W5Match8Vec3 rotation;
    /* 0x7BC */ u32 rotationDuration;
    /* 0x7C0 */ u32 rotationFrame;
    /* 0x7C4 */ u32 rotationMode;
    /* 0x7C8 */ u8 unk7C8[0x14];
    /* 0x7DC */ W5Match8Vec3 rotationProgress;
    /* 0x7E8 */ union {
        u8 unk7E8[0x18];
        struct {
            W5Match8Vec3 start;
            W5Match8Vec3 end;
        } ground;
    };
    /* 0x800 */ f32 primaryProgress;
    /* 0x804 */ u8 unk804[0x8];
    /* 0x80C */ u32 primaryDuration;
    /* 0x810 */ u32 primaryFrame;
    /* 0x814 */ u32 primaryMode;
    /* 0x818 */ f32 angleProgress;
    /* 0x81C */ u8 unk81C[0x8];
    /* 0x824 */ u32 angleDuration;
    /* 0x828 */ u32 angleFrame;
    /* 0x82C */ u32 angleMode;
    /* 0x830 */ u8 unk830[0xC];
    /* 0x83C */ f32 secondaryProgress;
    /* 0x840 */ u8 unk840[0x8];
    /* 0x848 */ u32 secondaryDuration;
    /* 0x84C */ u32 secondaryFrame;
    /* 0x850 */ u32 secondaryMode;
    /* 0x854 */ W5Match8Vec3 positionProgress;
    /* 0x860 */ u8 unk860[0x18];
    /* 0x878 */ u32 positionDuration;
    /* 0x87C */ u32 positionFrame;
    /* 0x880 */ u32 positionMode;
};
struct CameraTransitionGlobals {
    /* 0x00 */ W5Match8CameraTransition *camera;
    /* 0x04 */ u8 unk04[0x24];
    /* 0x28 */ s32 mode;
};

/* Additive view of the position-transition fields inside the camera object. */
struct CameraPositionTransitionView {
    /* 0x000 */ u8 unk000[0x7C];
    /* 0x07C */ W5Match8Vec3 position;
    /* 0x088 */ u8 unk088[0x554];
    /* 0x5DC */ W5Match8Vec3 target;
    /* 0x5E8 */ u8 unk5e8[0x20];
    /* 0x608 */ W5Match8Vec3 targetStart;
    /* 0x614 */ u8 unk614[0x38];
    /* 0x64C */ u32 flags;
    /* 0x650 */ u8 unk650[0xE8];
    /* 0x738 */ W5Match8Vec3 primaryProgress;
    /* 0x744 */ u32 duration;
    /* 0x748 */ u32 frame;
    /* 0x74C */ u32 mode;
    /* 0x750 */ W5Match8Vec3 alternateProgress;
    /* 0x75C */ u8 unk75c[0x74];
    /* 0x7D0 */ W5Match8Vec3 offset;
};
typedef char CameraPositionTransitionViewSizeCheck[sizeof(CameraPositionTransitionView) == 0x7DC ? 1 : -1];
typedef char CameraArcTransitionOffsets[offsetof(W5Match8CameraTransition, targetStart) == 0x608 &&
    offsetof(W5Match8CameraTransition, arc.duration) == 0x780 &&
    offsetof(W5Match8CameraTransition, arc.offset) == 0x790 &&
    offsetof(W5Match8CameraTransition, ground.start) == 0x7E8 &&
    offsetof(W5Match8CameraTransition, ground.end) == 0x7F4 &&
    sizeof(W5Match8CameraTransition) == 0x884 ? 1 : -1];
typedef char CameraLookAtOffsets[
    offsetof(W5Match8CameraTransition, lookAt.target) == 0x768 &&
    offsetof(W5Match8CameraTransition, lookAt.position) == 0x774 &&
    sizeof(W5Match8CameraTransition) == 0x884 ? 1 : -1];
typedef char CameraTargetFrameOffsets[
    offsetof(W5Match8CameraTransition, reference.position) == 0x5a4 &&
    offsetof(W5Match8CameraTransition, targetFrame) == 0x748 &&
    sizeof(W5Match8CameraTransition) == 0x884 ? 1 : -1];

#endif
