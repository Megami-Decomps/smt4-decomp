#ifndef ADDON_SCENERESOURCE_H
#define ADDON_SCENERESOURCE_H

#include "common.h"

struct SceneResource;
struct SceneResourceWork {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 unk04[0x14];
    /* 0x18 */ u8 readyToRelease;
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ SceneResource *resource;
};

#endif
