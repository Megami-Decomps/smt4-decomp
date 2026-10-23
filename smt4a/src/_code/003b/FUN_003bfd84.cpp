/* NON_MATCHING: all loop and binding operations match, but saved-register allocation and the uniqueness-count comparison differ. */
#include "gfx/ModelDummyBindings.h"
#include "shard/W6_W6Match7_MaterialAnimationFlags.h"

extern "C" s32 FUN_00102c30(const char *name, const char *substring);
extern "C" const char DAT_005271f4[];

static inline bool containsDummyNode(const ModelDummyBindings *output, const ModelDummyNodeBinding *binding)
{
    for (s32 index = 0; index < output->count; ++index) {
        if (output->bindings[index].node == binding->node) {
            return true;
        }
    }
    return false;
}

static inline ModelNamedPart *getDummyPart(const ModelDummyNode *node, s32 index)
{
    switch (index) {
    case 0: return node->first;
    case 1: return node->second;
    case 2: return node->third;
    default: return NULL;
    }
}

// Collect the first part named "dami" for each distinct bound model node.
extern "C" void FUN_003bfd84(ModelDummyBindings *output, MaterialMergeResource *resource)
{
    // These binding arrays lie beyond the established metadata prefix.
    struct MetadataView {
        u8 unk00[0x34];
        ModelDummyNode *nodes;
        u8 unk38[8];
        ModelDummyNodeBinding *bindings;
        s32 count;
    };
    typedef char MetadataOffsetsCheck[offsetof(MetadataView, nodes) == 0x34 &&
        offsetof(MetadataView, bindings) == 0x40 && offsetof(MetadataView, count) == 0x44 ? 1 : -1];
    output->primaryCount = 0;
    output->count = 0;
    s32 count = ((MetadataView *)resource->metadata)->count;
    for (s32 index = 0; index < count; ++index) {
        MetadataView *metadata = (MetadataView *)resource->metadata;
        ModelDummyNodeBinding *binding = &metadata->bindings[index];
        ModelDummyNode *node = &metadata->nodes[binding->node];
        for (s32 partIndex = 0; partIndex < 3; ++partIndex) {
            ModelNamedPart *part = getDummyPart(node, partIndex);
            if (part != NULL && FUN_00102c30(part->name, DAT_005271f4) != 0) {
                if (!containsDummyNode(output, binding)) {
                    output->bindings[output->count].node = binding->node;
                    output->bindings[output->count].part = partIndex;
                    ++output->count;
                }
            }
        }
    }
}
