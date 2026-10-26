/* NON_MATCHING: the per-slot resource switch now matches retail; remaining: register assignment of the binding index (retail r8, build r7) and the duplicate-search loop (retail compares signed, `gt`, without peeling; the build compares unsigned, `hi`). */
#include "gfx/MaterialNameSelection.h"

/* The named resource of slot `slot` (0..2) of a material, or NULL for any other slot. */
static __inline MaterialNamedResource *materialGetResource(const NamedMaterialRecord *material, s32 slot)
{
    switch (slot) {
    case 0:
        return material->resources[0];
    case 1:
        return material->resources[1];
    case 2:
        return material->resources[2];
    }
    return NULL;
}

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
            MaterialNamedResource *resource = materialGetResource(material, resourceIndex);
            if (resource != NULL && FUN_00102c30(resource->name, pattern) != NULL) {
                u32 match;
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
