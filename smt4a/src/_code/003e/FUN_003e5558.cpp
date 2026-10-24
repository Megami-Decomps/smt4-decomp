#include "shard/W5_W5Match7_ControllerPose.h"

/* A link to a controller; the controller handle is at +4. */
struct ControllerLink {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ControllerPose *controller;
};

/* One of the three 0x5c-byte slots of the work block; only its link pointer is named. */
struct ControllerSlot {
    /* 0x00 */ ControllerLink *link;
    /* 0x04 */ u8 unk04[0x58];
};

struct ControllerGroup {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ControllerLink *mainLink;
    /* 0x0C */ u8 unk0C[0x18];
    /* 0x24 */ ControllerSlot slots[3];
};

extern "C" {

void controllerSetPosition(ControllerPose *controller, f32 x, f32 y, f32 z);

/* Moves the group's main controller and the controllers of its three slots to the given position. */
void FUN_003e5558(ControllerGroup *group, f32 x, f32 y, f32 z)
{
    if (group->mainLink->controller != NULL) {
        controllerSetPosition(group->mainLink->controller, x, y, z);
    }
    for (s32 i = 0; i < 3; i++) {
        ControllerLink *link = group->slots[i].link;
        if (link != NULL && link->controller != NULL) {
            controllerSetPosition(link->controller, x, y, z);
        }
    }
}

} /* extern "C" */
