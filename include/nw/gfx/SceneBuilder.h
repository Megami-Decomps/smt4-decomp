#ifndef NW_GFX_SCENEBUILDER_H
#define NW_GFX_SCENEBUILDER_H

#include <stddef.h>
#include "nw/gfx/SceneNode.h"

struct AsdAllocator;
struct ModelBoneMatrixProvider;
struct RelativeResourceRecord;

namespace nw {
namespace gfx {

/* Parameters shared by the SceneBuilder object factories. */
struct SceneBuilderParams {
    /* 0x00 */ RelativeResourceRecord *resource;
    /* 0x04 */ u8 enabled;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ s32 unk08;
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 unk14;
    /* 0x18 */ s32 unk18;
    /* 0x1C */ s32 unk1C;
    /* 0x20 */ s32 unk20;
    /* 0x24 */ u8 unk24;
};

/* Skeletal model builder input. An existing skeleton can be shared with the new model. */
struct SkeletalModelParams {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 unk08;
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 unk14;
    /* 0x18 */ s32 unk18;
    /* 0x1C */ ModelBoneMatrixProvider *sharedSkeleton;
};

typedef char SceneBuildParamsLayoutCheck[sizeof(SceneBuilderParams) == 0x28 && offsetof(SceneBuilderParams, unk24) == 0x24 &&
    sizeof(SkeletalModelParams) == 0x20 && offsetof(SkeletalModelParams, sharedSkeleton) == 0x1C ? 1 : -1];

} /* namespace gfx */
} /* namespace nw */

extern "C" nw::gfx::SceneNode *nw_gfx_SceneBuilder_CreateObject(nw::gfx::SceneBuilderParams *params,
    AsdAllocator *allocator, AsdAllocator *deviceAllocator);

#endif
