#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDENV_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDENV_H

#include "common.h"

struct AsdEnvironmentCommands {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 size;
    /* 0x10 */ s32 dataOffset;
};

#endif
