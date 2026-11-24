#ifndef NW_GFX_TRANSFORMNODEBUILDER_H
#define NW_GFX_TRANSFORMNODEBUILDER_H

#include "common.h"
#include <stddef.h>

struct AsdAllocator;

namespace nw {
namespace gfx {

class SceneNode;

/* The TransformNode dynamic builder's fixed-capacity options. Camera::DynamicBuilder
 * has the same option prefix ahead of its view and projection updaters. */
struct TransformNodeBuilder {
    /* 0x00 */ bool isFixedSizeMemory;
    /* 0x01 */ bool isAnimationEnabled;
    /* 0x04 */ u32 maxCallbacks;
    /* 0x08 */ u32 maxChildren;
    /* 0x0C */ u32 maxAnimObjectsPerGroup;

    TransformNodeBuilder()
        : isFixedSizeMemory(true), isAnimationEnabled(true), maxCallbacks(4), maxChildren(8), maxAnimObjectsPerGroup(1)
    {
    }
};

typedef char TransformNodeBuilderLayoutCheck[offsetof(TransformNodeBuilder, maxCallbacks) == 4 &&
    offsetof(TransformNodeBuilder, maxChildren) == 8 &&
    offsetof(TransformNodeBuilder, maxAnimObjectsPerGroup) == 0xC && sizeof(TransformNodeBuilder) == 0x10 ? 1 : -1];

} /* namespace gfx */
} /* namespace nw */

extern "C" nw::gfx::SceneNode *nw_gfx_TransformNode_DynamicBuilder_Create(
    nw::gfx::TransformNodeBuilder *builder, AsdAllocator *allocator);

#endif
