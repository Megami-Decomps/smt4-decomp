#include "common.h"

extern "C" {

typedef struct Target {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ void *node;
} Target;

typedef struct Controller {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ Target *target;
} Controller;

extern void FUN_003fe86c(void *node, u32 id, s32 mode, f32 a, f32 b);

/* Forwards `id` and the timing `a` to the controller's target node, if it has one. */
void controllerTargetNodeStart(Controller *controller, u32 id, f32 a)
{
    void *node = controller->target->node;

    if (node != NULL) {
        FUN_003fe86c(node, id, 2, a, 0.0f);
    }
}

} /* extern "C" */
