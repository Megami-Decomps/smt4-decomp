/* NON_MATCHING: 76 vs 79 rows (115 diff lines); single-struct view and mode-1 early return match push {r4-sl} and ldm/stm copies; remaining: retail shares one base across adjacent static globals (Unoffset - 24, Start + 12) and targetStart uses ldm/stm instead of ldr/str writeback. */
#include "shard/W5_W5Match8_CameraTransition.h"
#include "battle/btlCamera.h"

extern "C" {
extern BtlCameraStatics g_btlCamera;
extern W5Match8Vec3 g_cameraAlternateProgressStart;
extern W5Match8Vec3 g_cameraAlternateProgressPrevious;
extern W5Match8Vec3 g_cameraUnoffsetStartPosition;

struct PositionTail {
    /* 0x000 */ u8 unk000[0x7C];
    /* 0x07C */ W5Match8Vec3 position;
    /* 0x088 */ u8 unk088[0x554];
    /* 0x5DC */ W5Match8Vec3 alternateTarget;
    /* 0x5E8 */ u8 unk5E8[0x20];
    /* 0x608 */ W5Match8Vec3 targetStart;
    /* 0x614 */ u8 unk614[0x38];
    /* 0x64C */ u32 flags;
    /* 0x650 */ u8 unk650[0x204];
    /* 0x854 */ W5Match8Vec3 positionProgress;
    /* 0x860 */ u8 unk860[0x24];
    /* 0x884 */ W5Match8Vec3 progress;
    /* 0x890 */ u8 unk890[0x18];
    /* 0x8A8 */ u32 duration;
    /* 0x8AC */ u32 frame;
    /* 0x8B0 */ u32 mode;
};

/* Clears a 3D vector in reverse component order (same pattern as btlCameraSetFormationSlot and smt4 FUN_003d6644). */
static __inline void clearVec(W5Match8Vec3 *v)
{
    v->z = 0.0f;
    v->y = 0.0f;
    v->x = 0.0f;
}

/* Sets all three components of a 3D vector (3 call sites below). */
static __inline void setVec(W5Match8Vec3 *v, f32 x, f32 y, f32 z)
{
    v->x = x;
    v->y = y;
    v->z = z;
}

/* Start the camera's alternate position transition, preserving progress in alternate modes. */
void FUN_004f1b2c(W5Match8CameraTransition *camera, u32 duration, u32 mode,
                  f32 x, f32 y, f32 z)
{
    PositionTail *transition = (PositionTail *)camera;
    if (g_btlCamera.routingMode == 2) {
        g_cameraUnoffsetStartPosition = transition->position;
        g_cameraAlternateProgressStart = transition->progress;
        setVec(&transition->alternateTarget, x, y, z);
        transition->targetStart = transition->positionProgress;
    } else if (g_btlCamera.routingMode == 1) {
        g_cameraAlternateProgressStart = transition->progress;
        setVec(&transition->alternateTarget, x, y, z);
        g_cameraAlternateProgressPrevious = g_cameraAlternateProgressStart;
        clearVec(&transition->progress);
        transition->targetStart = transition->positionProgress;
        transition->mode = mode;
        transition->duration = duration;
        transition->frame = 0;
        transition->flags |= 0x2000;
        return;
    } else {
        setVec(&transition->alternateTarget, x, y, z);
        clearVec(&transition->progress);
    }
    transition->mode = mode;
    transition->duration = duration;
    transition->frame = 0;
    transition->flags |= 0x2000;
}
} /* extern "C" */
