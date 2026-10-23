#ifndef GFX_MODELMEMORYREQUIREMENTS_H
#define GFX_MODELMEMORYREQUIREMENTS_H
#include "common.h"
struct ModelBufferRequirements {
    s32 count;
    u32 bytes;
};
struct ModelObjectRequirements {
    s32 modelCount;
    s32 instanceCount;
    s32 animationCount;
    s32 unk0C;
    s32 unk10;
    s32 materialCount;
};
#endif
