#ifndef SHARD_W5_W5MATCH7_CONTROLLERPOSE_H
#define SHARD_W5_W5MATCH7_CONTROLLERPOSE_H
#include "shard/W5_W5Match7_SceneState.h"
struct ControllerPose {
    /* 0x000 */ union {
        u8 unk000[0x1b4];
        struct {
            u32 unk000;
            u32 value; /* 0x004 */
        } flags;
    };
    /* 0x1b4 */ MapVector destination;
    /* 0x1c0 */ u8 unk1c0[0x30];
    /* 0x1f0 */ MapVector position;
};
#endif
