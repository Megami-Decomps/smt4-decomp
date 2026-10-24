/* NON_MATCHING: camera move step (mode 0 linear step, 1 approach, 2 eased, 3 stepped then renormalised); retail keeps frames/frame as a pair load, uses one d8 spill and applies each vec3 update component by component through memory, built schedules the loads together */
#include "common.h"

struct CameraVec3 {
    f32 x;
    f32 y;
    f32 z;
};

/* A camera pose: position followed by its look/up vector. */
struct CameraPose {
    CameraVec3 position;
    CameraVec3 direction;
};

struct CameraMove {
    /* 0x00 */ CameraPose start;
    /* 0x18 */ CameraPose target;
    /* 0x30 */ CameraPose current;
    /* 0x48 */ s32 mode;
    /* 0x4C */ s32 frames;       /* length of the move */
    /* 0x50 */ s32 frame;        /* current frame */
    /* 0x54 */ CameraPose step;  /* per-frame delta for the stepped modes */
    /* 0x6C */ f32 approach;     /* divisor for mode 1 */
};

struct CameraOwner {
    /* 0x000 */ u8 unk000[0x224];
    /* 0x224 */ CameraMove move;
};

struct CameraGlobals {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ CameraOwner *owner;
};

#define CAMERA_MODE_STEP 0
#define CAMERA_MODE_EASED 2
#define CAMERA_MODE_STEP_NORMALIZED 3

extern "C" {
extern CameraGlobals DAT_005806a0;

f32 FUN_001f3f34(f32 from, f32 to, f32 duration, f32 elapsed);
void FUN_00330108(CameraVec3 *a, CameraVec3 *b, CameraVec3 *out);

static __inline void cameraPoseAdd(CameraPose *pose, const CameraPose *delta)
{
    pose->position.x += delta->position.x;
    pose->position.y += delta->position.y;
    pose->position.z += delta->position.z;
    pose->direction.x += delta->direction.x;
    pose->direction.y += delta->direction.y;
    pose->direction.z += delta->direction.z;
}

/* Moves `current` towards `target` by 1/divisor of the remaining distance. */
static __inline void cameraVecApproach(CameraVec3 *current, const CameraVec3 *target, f32 divisor)
{
    f32 scale = 1.0f / divisor;
    CameraVec3 delta;
    delta.x = (target->x - current->x) * scale;
    delta.y = (target->y - current->y) * scale;
    delta.z = (target->z - current->z) * scale;
    current->x += delta.x;
    current->y += delta.y;
    current->z += delta.z;
}

/* Advances the camera move by one frame. Returns 1 when the move has finished. */
u32 FUN_0033a374(void)
{
    CameraMove *move = &DAT_005806a0.owner->move;
    if (move->frame >= move->frames) {
        move->current = move->target;
        return 1;
    }

    if (move->mode == CAMERA_MODE_STEP) {
        cameraPoseAdd(&move->current, &move->step);
    } else if (move->mode == CAMERA_MODE_EASED) {
        f32 total = (f32)move->frames;
        f32 frame = (f32)move->frame;
        CameraPose eased;
        eased.position.x = FUN_001f3f34(move->start.position.x, move->target.position.x, total, frame);
        eased.position.y = FUN_001f3f34(move->start.position.y, move->target.position.y, total, frame);
        eased.position.z = FUN_001f3f34(move->start.position.z, move->target.position.z, total, frame);
        eased.direction.x = FUN_001f3f34(move->start.direction.x, move->target.direction.x, total, frame);
        eased.direction.y = FUN_001f3f34(move->start.direction.y, move->target.direction.y, total, frame);
        eased.direction.z = FUN_001f3f34(move->start.direction.z, move->target.direction.z, total, frame);
        move->current = eased;
    } else if (move->mode == CAMERA_MODE_STEP_NORMALIZED) {
        cameraPoseAdd(&move->current, &move->step);
        CameraVec3 normal;
        FUN_00330108(&move->current.direction, &move->current.position, &normal);
        move->current.direction = normal;
    } else {
        cameraVecApproach(&move->current.position, &move->target.position, move->approach);
        cameraVecApproach(&move->current.direction, &move->target.direction, move->approach);
    }
    move->frame++;
    return 0;
}

} /* extern "C" */
