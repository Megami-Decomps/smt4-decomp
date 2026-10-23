#ifndef ASDSDK_GFX_MODEL_ASDMODELRENDER_H
#define ASDSDK_GFX_MODEL_ASDMODELRENDER_H

#include "common.h"
#include <stddef.h>

struct AsdModelRenderPass {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *target;
    /* 0x08 */ s32 cameraIndex;
    /* 0x0C */ u32 flags;
};
typedef char AsdModelRenderPassSizeCheck[sizeof(AsdModelRenderPass) == 0x10 &&
    offsetof(AsdModelRenderPass, cameraIndex) == 8 ? 1 : -1];

#endif
