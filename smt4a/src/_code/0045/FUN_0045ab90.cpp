/* NON_MATCHING: Sentinel hoisting, dictionary receiver addressing, and special-target branch layout differ. */
#include "gfx/ResourceNameBinding.h"

extern "C" {
u32 libc_strlen(const char *text);
u32 FUN_001a7a20(ResourceNameDictionary *dictionary, const char *name, u32 length);

/* Binds named targets, preserving sentinel entries and reporting partial or total failure. */
u32 FUN_0045ab90(ResourceNameBinding *binding, ResourceNameTargets *source,
                 ResourceNameDictionaryOwner *owner)
{
    bool missing = false;
    bool bound = false;
    if (binding->capacity < source->count) {
        return 0x80000001;
    }
    for (u32 index = 0; index < source->count; ++index) {
        ResourceNamedTarget *target = source->targets[index];
        if (target->kind != 51) {
            const char *name = target->name;
            u32 length = libc_strlen(name);
            u32 resolved = FUN_001a7a20(&owner->dictionary, name, length);
            if (resolved == 0xFFFF) {
                missing = true;
                binding->indices[index] = 0xFFFF;
            } else {
                bound = true;
                binding->indices[index] = (u16)resolved;
            }
        } else {
            bound = true;
            binding->indices[index] = 0;
        }
    }
    for (u32 index = source->count; binding->capacity > index; ++index) {
        binding->indices[index] = 0xFFFF;
    }
    if (!bound) {
        return 0x80008000;
    }
    return missing ? 0x4000 : 0;
}
}
