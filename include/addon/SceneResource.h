#ifndef ADDON_SCENERESOURCE_H
#define ADDON_SCENERESOURCE_H

#include "common.h"
#include <stddef.h>

struct SceneResource;
struct SceneResourceWork {
    /* 0x00 */ u32 job;
    union {
        /* 0x04 */ u8 unk04[0x14];
        struct {
            /* 0x04 */ u8 unk04BeforeDraw[8];
            /* 0x0C */ u32 drawJob;
        } tasks;
    };
    /* 0x18 */ u8 readyToRelease;
    union {
        /* 0x19 */ u8 unk19[3];
        struct {
            /* 0x19 */ u8 resetChannels;
            /* 0x1A */ u8 pending;
        } state;
    };
    /* 0x1C */ SceneResource *resource;
};

typedef char SceneResourceWorkLayoutCheck[
    sizeof(SceneResourceWork) == 0x20 &&
    offsetof(SceneResourceWork, tasks.drawJob) == 0x0C &&
    offsetof(SceneResourceWork, state.resetChannels) == 0x19 &&
    offsetof(SceneResourceWork, state.pending) == 0x1A ? 1 : -1];

#endif
