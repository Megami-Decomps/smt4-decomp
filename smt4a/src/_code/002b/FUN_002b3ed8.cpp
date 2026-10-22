/* NON_MATCHING: block-copy address temporaries use r5 instead of retail's lr. */
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void* memAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 blockAlignment, u32 mode);
void effMenuListAppend(EffMenuNode* node, u32 list);
u32 displayIsStereoActive(void);
void rt_memcpy_w(void* destination, const void* source, u32 size);

// Append a vector payload to the first eye and duplicate it for stereo rendering.
void FUN_002b3ed8(const Vector4* geometry, const Vector4* style, u32 resource, u32 options)
{
    // The second vector spans base-node unions; a kind-specific view avoids reshaping them.
    struct VectorNodeView {
        EffMenuNode* next;
        u32 kind;
        Vector4 geometry;
        Vector4 style;
        u32 resource;
        u32 options;
        u8 unk30[0x38];
    };
    typedef char VectorNodeOffsets[sizeof(VectorNodeView) == 0x68 &&
        offsetof(VectorNodeView, geometry) == 8 && offsetof(VectorNodeView, style) == 0x18 &&
        offsetof(VectorNodeView, resource) == 0x28 ? 1 : -1];
    asdDebugTrace("../Source/Gfx/Effect/effMenu.h", 712);
    VectorNodeView* node = static_cast<VectorNodeView*>(memAlloc(0x10000, 0x100, 0, sizeof(VectorNodeView), 0x10, 1));
    node->geometry = *geometry;
    node->style = *style;
    node->kind = 8;
    node->resource = resource;
    node->options = options;
    effMenuListAppend(reinterpret_cast<EffMenuNode*>(node), 1);
    if (displayIsStereoActive()) {
        asdDebugTrace("../Source/Gfx/Effect/effMenu.h", 724);
        VectorNodeView* copy = static_cast<VectorNodeView*>(memAlloc(0x10000, 0x100, 0, sizeof(VectorNodeView), 0x10, 1));
        rt_memcpy_w(copy, node, sizeof(VectorNodeView));
        effMenuListAppend(reinterpret_cast<EffMenuNode*>(copy), 2);
    }
}
}
