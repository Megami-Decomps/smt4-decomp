/* NON_MATCHING: outer-loop index and binding pointer use opposite saved registers, and node lookup uses different scratch registers. */
#include "gfx/ModelDummyBindings.h"
#include "shard/W6_W6Match7_MaterialAnimationFlags.h"

extern "C" s32 FUN_00102c30(const char *name, const char *substring);
extern "C" const char DAT_005271f4[];

/* Collects the first part whose name contains "dami" for each distinct bound node. */
extern "C" void FUN_003bfd84(ModelDummyBindings *output, MaterialMergeResource *resource)
{
    output->primaryCount = 0;
    output->count = 0;
    s32 count = resource->metadata->dummyBindingCount;
    for (s32 index = 0; index < count; ++index) {
        MaterialMergeMetadata *metadata = resource->metadata;
        ModelDummyNodeBinding *binding = &metadata->dummyBindings[index];
        ModelDummyNode *node = &metadata->dummyNodes[binding->node];
        for (s32 partIndex = 0; partIndex < 3; ++partIndex) {
            ModelNamedPart *part;
            switch (partIndex) {
            case 0: part = node->first; break;
            case 1: part = node->second; break;
            case 2: part = node->third; break;
            default: part = NULL; break;
            }
            if (part != NULL && FUN_00102c30(part->name, DAT_005271f4) != 0) {
                bool existing = false;
                s32 foundIndex = 0;
                while (foundIndex < output->count) {
                    if (output->bindings[foundIndex].node == binding->node) {
                        existing = true;
                        break;
                    }
                    ++foundIndex;
                }
                if (!existing) {
                    output->bindings[output->count].node = binding->node;
                    output->bindings[output->count].part = partIndex;
                    ++output->count;
                }
            }
        }
    }
}
