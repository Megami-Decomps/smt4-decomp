#ifndef ASDSDK_ASDSCENELIGHT_H
#define ASDSDK_ASDSCENELIGHT_H
#include "common.h"
#include "classes/AsdAllocatorObject.h"
#include <stddef.h>
struct AsdSceneLightParameters {
    u8 unk00[0x48];
    f32 position[3];
    union {
        u8 unk54[0x64];
        struct {
            u8 unk54[0x60];
            u8 enabled; // 0xB4
            u8 unkB5[3];
        } visibility;
    };
    u32 kind;
    f32 ambient[4];
    f32 diffuse[4];
    f32 direction[3];
    f32 attenuation[3];
    f32 intensity;
    f32 cutoff[2];
};
typedef char AsdSceneLightVisibilityOffset[offsetof(AsdSceneLightParameters, visibility.enabled) == 0xB4 ? 1 : -1];
struct AsdSceneLightObject {
    u8 unk00[8];
    AsdSceneLightParameters *parameters;
};
struct AsdSceneLight {
    s32 id;
    AsdSceneLightObject *object;
    AsdSceneLightParameters *parameters;
};
struct AsdSceneLightDescription {
    u8 enabled;
    u8 updateEnabled;
    u8 padding[2];
    u32 unk04;
    u32 unk08;
    u32 count;
};
typedef char AsdSceneLightOffsets[offsetof(AsdSceneLightParameters, kind) == 0xB8 && offsetof(AsdSceneLightParameters, ambient) == 0xBC && offsetof(AsdSceneLightParameters, attenuation) == 0xE8 && sizeof(AsdSceneLightParameters) == 0x100 && sizeof(AsdSceneLight) == 0xC && sizeof(AsdSceneLightDescription) == 0x10 ? 1 : -1];
#endif
