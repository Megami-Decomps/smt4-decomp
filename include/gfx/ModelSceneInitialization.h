#ifndef GFX_MODELSCENEINITIALIZATION_H
#define GFX_MODELSCENEINITIALIZATION_H
#include "common.h"
#include <stddef.h>
struct ModelSceneConfiguration {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u32 bufferBytes;
    /* 0x84 */ u16 format;
    /* 0x86 */ u16 unk86;
    /* 0x88 */ u32 flags;
};
struct ModelScenePoolDescription {
    u16 format;
    u16 unk02;
    u32 bufferBytes;
    u32 entryCount;
    u32 unk0C;
    u32 unk10;
    u16 options;
    u16 unk16;
    u32 buffers;
    u32 lists;
    u32 alignment;
};
struct ModelSceneCapacity {
    u32 modelCount;
    u32 nodeCount;
    u32 materialCount;
    u8 unk0C[8];
    u32 listCount;
    u8 unk18[8];
    u32 auxiliaryCount;
    u8 unk24[12];
    u32 resourceCount;
    u32 bufferBytes;
    u32 flags;
};
struct ModelSceneInitialization {
    ModelSceneCapacity scenes[2];
    u32 enabled;
    u32 commandBytes;
};
typedef char ModelSceneInitializationLayoutCheck[(sizeof(ModelSceneCapacity) == 0x3C && offsetof(ModelSceneInitialization, enabled) == 0x78 && sizeof(ModelScenePoolDescription) == 0x24) ? 1 : -1];
#endif
