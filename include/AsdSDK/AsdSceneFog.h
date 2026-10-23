#ifndef ASDSDK_ASDSCENEFOG_H
#define ASDSDK_ASDSCENEFOG_H

#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include <stddef.h>

struct AsdFogParameters {
    /* 0x00 */ u32 mode;
    /* 0x04 */ f32 start;
    /* 0x08 */ f32 end;
    /* 0x0c */ f32 density;
};

struct AsdFogResource {
    /* 0x00 */ u8 unk00[0xb4];
    /* 0xb4 */ f32 color[4];
    /* 0xc4 */ u8 unkC4[4];
    /* 0xc8 */ s32 parametersOffset;

    AsdFogParameters *parameters() {
        return parametersOffset != 0
            ? reinterpret_cast<AsdFogParameters *>(reinterpret_cast<u8 *>(&parametersOffset) + parametersOffset)
            : NULL;
    }
};

struct AsdFogObject {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ AsdFogResource *resource;
};

struct AsdFogCreateInfo {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 allocateResource;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u32 unk0C;
};

struct AsdSceneFog {
    /* 0x00 */ u8 id;
    /* 0x01 */ u8 enabled;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ AsdFogObject *object;
    /* 0x08 */ AsdFogResource *resource;
    /* 0x0c */ AsdFogParameters *parameters;
};

struct AsdSceneFogRegistry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ AsdSceneFog **entries;
};

typedef char AsdFogParametersSizeCheck[sizeof(AsdFogParameters) == 0x10 ? 1 : -1];
typedef char AsdFogResourceOffsetCheck[offsetof(AsdFogResource, color) == 0xb4 && offsetof(AsdFogResource, parametersOffset) == 0xc8 ? 1 : -1];
typedef char AsdFogObjectResourceOffsetCheck[offsetof(AsdFogObject, resource) == 8 ? 1 : -1];
typedef char AsdFogCreateInfoSizeCheck[sizeof(AsdFogCreateInfo) == 0x10 ? 1 : -1];
typedef char AsdSceneFogSizeCheck[sizeof(AsdSceneFog) == 0x10 && offsetof(AsdSceneFog, parameters) == 0xc ? 1 : -1];
typedef char AsdSceneFogRegistryOffsetCheck[offsetof(AsdSceneFogRegistry, entries) == 4 ? 1 : -1];

#endif
