#ifndef SHARD_W8MATCH1_CONTROLLER_ROTATION_H
#define SHARD_W8MATCH1_CONTROLLER_ROTATION_H
#include "common.h"
struct ControllerEuler {
    f32 x; // 0x00
    f32 y; // 0x04
    f32 z; // 0x08
};
struct ControllerLink {
    void* owner; // 0x00
    void* controller; // 0x04
};
struct ControllerRotationChild {
    ControllerLink* link; // 0x00
    u8 unk04[0x58]; // 0x04
};
struct ControllerRotationOwner {
    u8 unk00[8]; // 0x00
    ControllerLink* primary; // 0x08
    ControllerEuler rotation; // 0x0C
    u8 unk18[0x0C]; // 0x18
    ControllerRotationChild children[3]; // 0x24
};
#endif
