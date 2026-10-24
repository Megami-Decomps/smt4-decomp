/* NON_MATCHING: retail splits the 12-byte point copies as ldrd/stm {x,y} + str z and places the index==0 (home) arm after the epilogue; built copies whole Vec3s with ldm/stm and keeps the arm inline */
#include "common.h"

extern "C" {

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

typedef struct CameraPoint {
    Vec3 position;
    Vec3 look;
} CameraPoint;

typedef struct CameraNode {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ Vec3 position;
    /* 0x28 */ u8 unk28[8];
    /* 0x30 */ Vec3 *look;
} CameraNode;

typedef struct CameraNodeTable {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ CameraNode **nodes;
} CameraNodeTable;

typedef struct CameraSource {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ CameraNodeTable *table;
} CameraSource;

typedef struct CameraTarget {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 handle;
} CameraTarget;

typedef struct CameraController {
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ s32 progress;
    /* 0x014 */ u8 moving;
    /* 0x015 */ u8 hasSecond;
    /* 0x016 */ u8 unk016[6];
    /* 0x01C */ CameraTarget *target;
    /* 0x020 */ u8 unk020[0x574];
    /* 0x594 */ CameraSource *source;
    /* 0x598 */ u8 unk598[4];
    /* 0x59C */ CameraPoint step;
    /* 0x5B4 */ CameraPoint current;
    /* 0x5CC */ CameraPoint destination;
    /* 0x5E4 */ CameraPoint home;
    /* 0x5FC */ Vec3 secondStep;
    /* 0x608 */ Vec3 secondCurrent;
    /* 0x614 */ Vec3 secondDestination;
    /* 0x620 */ Vec3 secondTable[1];
} CameraController;

void FUN_00407598(CameraController *controller);
void controllerSetDestination(u32 handle, Vec3 *destination);

/* Moves the camera toward the node's point: at once when `immediate`, otherwise in ten steps; the optional second point follows. */
void FUN_00407eb0(CameraController *ctrl, s32 index, s32 immediate)
{
    if (immediate != 0) {
        CameraNode *node = ctrl->source->table->nodes[index];
        Vec3 position = node->position;
        Vec3 look = *node->look;
        ctrl->destination.position = position;
        ctrl->destination.look = look;
        ctrl->current.position = position;
        ctrl->current.look = look;
        FUN_00407598(ctrl);
        if (ctrl->hasSecond != 0) {
            ctrl->secondDestination = ctrl->secondTable[index];
            ctrl->secondCurrent = ctrl->secondDestination;
            controllerSetDestination(ctrl->target->handle, &ctrl->secondCurrent);
        }
    } else {
        ctrl->progress = 0;
        ctrl->moving = 1;
        if (index != 0) {
            CameraNode *node = ctrl->source->table->nodes[index];
            ctrl->destination.position = node->position;
            ctrl->destination.look = *node->look;
        } else {
            ctrl->destination.position = ctrl->home.position;
            ctrl->destination.look = ctrl->home.look;
        }
        ctrl->step.position.x = (ctrl->destination.position.x - ctrl->current.position.x) * 0.1f;
        ctrl->step.position.y = (ctrl->destination.position.y - ctrl->current.position.y) * 0.1f;
        ctrl->step.position.z = (ctrl->destination.position.z - ctrl->current.position.z) * 0.1f;
        ctrl->step.look.x = (ctrl->destination.look.x - ctrl->current.look.x) * 0.1f;
        ctrl->step.look.y = (ctrl->destination.look.y - ctrl->current.look.y) * 0.1f;
        ctrl->step.look.z = (ctrl->destination.look.z - ctrl->current.look.z) * 0.1f;
        if (ctrl->hasSecond != 0) {
            ctrl->secondDestination = ctrl->secondTable[index];
            ctrl->secondStep.x = (ctrl->secondDestination.x - ctrl->secondCurrent.x) * 0.1f;
            ctrl->secondStep.y = (ctrl->secondDestination.y - ctrl->secondCurrent.y) * 0.1f;
            ctrl->secondStep.z = (ctrl->secondDestination.z - ctrl->secondCurrent.z) * 0.1f;
        }
    }
}

} /* extern "C" */
