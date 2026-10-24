/* NON_MATCHING: retail spills s0-s3 (vpush {d0-d1}) and passes the address of that spill to FUN_004f159c, so the fourth argument is a four-float aggregate in VFP registers; this softfp struct-by-value form does not reproduce that ABI */
#include "common.h"
#include <math.h>

struct CameraVec3 {
    f32 x;
    f32 y;
    f32 z;
};

/* Four floats passed by value (in s0-s3): the first is the shift distance. */
struct CameraShift {
    f32 distance;
    f32 unk04;
    f32 unk08;
    f32 unk0C;
};

/* The camera work area, reduced to the fields this setup reads and writes. */
struct CameraWork {
    /* 0x000 */ u8 unk000[0x608];
    /* 0x608 */ CameraVec3 position;
    /* 0x614 */ u8 unk614[0x38];
    /* 0x64C */ u32 flags;
    /* 0x650 */ u8 unk650[0xE8];
    /* 0x738 */ CameraVec3 targetPosition;
    /* 0x744 */ u8 unk744[0xC];
    /* 0x750 */ CameraVec3 alternatePosition;
    /* 0x75C */ u8 unk75C[0x24];
    /* 0x780 */ s32 mode;
    /* 0x784 */ s32 unk784;
    /* 0x788 */ s32 argument;
    /* 0x78C */ s32 shift;
    /* 0x790 */ s32 unk790;
    /* 0x794 */ u8 unk794[0x54];
    /* 0x7E8 */ f32 unk7E8;
    /* 0x7EC */ u8 unk7EC[4];
    /* 0x7F0 */ f32 unk7F0;
    /* 0x7F4 */ f32 unk7F4;
    /* 0x7F8 */ u8 unk7F8[4];
    /* 0x7FC */ f32 unk7FC;
};

extern "C" {
extern CameraVec3 g_cameraAlternateProgressStart;
void FUN_004f159c(CameraWork *camera, const CameraShift *shift, const CameraVec3 *position);

/* Starts a shifted camera move: records the mode and arguments and passes the shifted position on. */
void FUN_004f22a4(CameraWork *camera, s32 mode, s32 argument, CameraShift shift)
{
    camera->mode = mode;
    camera->unk784 = 0;
    camera->argument = argument;
    camera->shift = (s32)shift.distance;
    camera->flags |= 0x10000;
    camera->position = camera->targetPosition;
    g_cameraAlternateProgressStart = camera->alternatePosition;
    f32 dx = camera->unk7E8 - camera->unk7F4;
    f32 dz = camera->unk7F0 - camera->unk7FC;
    CameraVec3 offset;
    offset.x = dx;
    offset.y = 0.0f;
    offset.z = dz;
    f32 length = sqrtf(dx * dx + 0.0f * 0.0f + dz * dz);
    CameraVec3 position;
    position.x = camera->unk7F4 + (f32)camera->shift * 0.5f;
    position.y = 0.0f;
    position.z = camera->unk7FC + (f32)camera->unk790;
    FUN_004f159c(camera, &shift, &position);
}
}
