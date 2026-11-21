/* NON_MATCHING: registers only in the binding loop (the name and the kind-51 store), and the sentinel fill loop keeps
   the old index in its own register. */
#include "gfx/ResourceNameBinding.h"

extern "C" {
u32 libc_strlen(const char *text);
u32 nameTableLookupEntry(ResourceNameDictionary *dictionary, const char *name, u32 length);

/* Looks a name up in a name list. FUN_001a79e8 performs the same lookup on its own list, and both functions
   form the list's address first and the dictionary's (+4) from it, the sign of a call on the list. */
static u32 nameListFind(ResourceNameList *list, const char *name)
{
    return nameTableLookupEntry(&list->dictionary, name, libc_strlen(name));
}

/* Binds named targets, preserving sentinel entries and reporting partial or total failure. */
u32 resourceNameBindingBind(ResourceNameBinding *binding, ResourceNameTargets *source,
                 ResourceNameDictionaryOwner *owner)
{
    bool missing = false;
    bool bound = false;
    if (binding->capacity < source->count) {
        return 0x80000001;
    }
    for (u32 index = 0; index < source->count; ++index) {
        ResourceNamedTarget *target = source->targets[index];
        if (target->kind == 51) {
            bound = true;
            binding->indices[index] = 0;
        } else {
            u32 resolved = nameListFind(&owner->names, target->name);
            if (resolved == 0xFFFF) {
                missing = true;
                binding->indices[index] = 0xFFFF;
            } else {
                bound = true;
                binding->indices[index] = (u16)resolved;
            }
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
