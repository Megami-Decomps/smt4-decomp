#include "common.h"
#include "code/Code0022_Smt4.h"

extern "C" {

struct Vec3 {
    f32 x, y, z;
};

struct ModelNode {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *node;
};

/* A model controller: a state at 0x10, a follow flag at 0x15, its model at 0x20 and a position that follows a target. */
struct ModelController {
    /* 0x0000 */ u8 unk0000[0x10];
    /* 0x0010 */ u32 state;
    /* 0x0014 */ u8 selected;
    /* 0x0015 */ u8 follow;
    /* 0x0016 */ u8 unk0016[0xA];
    /* 0x0020 */ ModelNode *model;
    /* 0x0024 */ u8 unk0024[0x1634];
    /* 0x1658 */ Vec3 position;
    /* 0x1664 */ Vec3 target;
};

void FUN_00152ed8(ModelController *controller);
void modelSelectionActivate(ModelController *controller, u32 a, u32 b);
void nodeSetTranslation(void *node, s32 index, Vec3 *translation);

/* Activates the model selection and, when following, snaps the node to the target position. */
void FUN_0022afc4(ModelController *controller, u32 a, u32 b)
{
    controller->state = 0;
    controller->selected = 0;
    FUN_00152ed8(controller);
    modelSelectionActivate(controller, a, b);
    if (controller->follow != 0) {
        controller->position = controller->target;
        nodeSetTranslation(controller->model->node, 0, &controller->position);
    }
}

} /* extern "C" */
