/* NON_MATCHING: resource slots use indexed access instead of retail's switch and duplicate-search loop is peeled/unrolled. */
#include "gfx/MaterialNameSelection.h"

extern "C" {
extern MaterialNameSelection *DAT_0057f2c4;
char *FUN_00102c30(char *text, const char *pattern);

// Collect each material whose resource name contains the requested substring.
void FUN_003d2a00(const char *pattern)
{
    MaterialNameSelection *selection = DAT_0057f2c4;
    selection->current = 0;
    selection->count = 0;
    s32 bindingCount = selection->owner->model->metadata->bindingCount;
    for (s32 index = 0; index < bindingCount; ++index) {
        MaterialSelectionMetadata *metadata = selection->owner->model->metadata;
        const MaterialBindingRecord *binding = &metadata->bindings[index];
        NamedMaterialRecord *material = &metadata->materials[binding->materialIndex];
        for (s32 resourceIndex = 0; resourceIndex < 3; ++resourceIndex) {
            MaterialNamedResource *resource = material->resources[resourceIndex];
            if (resource != NULL && FUN_00102c30(resource->name, pattern) != NULL) {
                s32 match;
                for (match = 0; match < selection->count; ++match) {
                    if (selection->matches[match].materialIndex == binding->materialIndex)
                        break;
                }
                if (match == selection->count) {
                    selection->matches[selection->count].materialIndex = binding->materialIndex;
                    selection->matches[selection->count].resourceIndex = resourceIndex;
                    ++selection->count;
                }
            }
        }
    }
}
}
