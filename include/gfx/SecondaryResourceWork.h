#ifndef GFX_SECONDARY_RESOURCE_WORK_H
#define GFX_SECONDARY_RESOURCE_WORK_H
#include "common.h"
#include <stddef.h>

struct SecondaryResourceWork {
    /* 0x000 */ u32 job;
    /* 0x004 */ u8 unk004[0xC];
    /* 0x010 */ void *auxiliary;
    /* 0x014 */ u8 unk014[0x14];
    /* 0x028 */ void *resourceData;
    /* 0x02C */ void *scriptData;
    /* 0x030 */ void *textureData;
    /* 0x034 */ void *scriptProcess;
    /* 0x038 */ u8 unk038[0x110];
    /* 0x148 */ u16 touchRegionCount;
    /* 0x14A */ u8 unk14A[0x48E];
    /* 0x5D8 */ u32 memorySlot;
};
typedef char SecondaryResourceWorkOffsets[
    offsetof(SecondaryResourceWork, job) == 0 &&
    offsetof(SecondaryResourceWork, auxiliary) == 0x10 &&
    offsetof(SecondaryResourceWork, resourceData) == 0x28 &&
    offsetof(SecondaryResourceWork, scriptData) == 0x2C &&
    offsetof(SecondaryResourceWork, textureData) == 0x30 &&
    offsetof(SecondaryResourceWork, scriptProcess) == 0x34 &&
    offsetof(SecondaryResourceWork, touchRegionCount) == 0x148 &&
    offsetof(SecondaryResourceWork, memorySlot) == 0x5D8 &&
    sizeof(SecondaryResourceWork) == 0x5DC ? 1 : -1];
#endif
