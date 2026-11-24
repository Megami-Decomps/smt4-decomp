#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDMODELSCENE_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDMODELSCENE_H

#include "common.h"
#include "nw/gfx/TransformNodeBuilder.h"

struct AsdModelNodeCapacity {
    /* 0x00 */ u32 children;
    /* 0x04 */ u32 callbacks;
};

/* Capacities for the five configurable nodes in one scene pass. */
struct AsdModelSceneCapacities {
    /* 0x00 */ AsdModelNodeCapacity root;
    /* 0x08 */ AsdModelNodeCapacity group;
    /* 0x10 */ AsdModelNodeCapacity slots[3];
};
typedef char AsdModelSceneCapacitiesLayout[sizeof(AsdModelSceneCapacities) == 0x28 ? 1 : -1];

extern "C" {
void asdModelCreateSceneTrees(const AsdModelSceneCapacities *first, const AsdModelSceneCapacities *second);
void asdModelCreateSceneTrees(const AsdModelSceneCapacities *first, const AsdModelSceneCapacities *second);
} /* extern "C" */

#endif
