#ifndef MODEL_MODEL_ACTIVATION_GROUP_H
#define MODEL_MODEL_ACTIVATION_GROUP_H
#include "shard/Shard0040.h"
#include <stddef.h>

struct ModelActivationPosition { f32 x, y, z; };
struct ModelActivationGroup {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1C */ LockedObj *models[3];
    /* 0x28 */ ModelActivationPosition positions[3];
    /* 0x4C */ ModelActivationPosition scale;
};
typedef char ModelActivationGroupLayout[offsetof(ModelActivationGroup, models) == 0x1c &&
    offsetof(ModelActivationGroup, positions) == 0x28 &&
    offsetof(ModelActivationGroup, scale) == 0x4c && sizeof(ModelActivationGroup) == 0x58 ? 1 : -1];
#endif
