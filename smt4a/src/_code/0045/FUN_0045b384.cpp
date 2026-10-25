/* NON_MATCHING: binding-loop layout, flag spilling and trailing-array clearing differ. */
#include "gfx/NamedResourceBindings.h"

extern "C" {
u32 libc_strlen(const char* string);
u32 FUN_001a7a20(const void* index, const char* name, u32 length);

// Fill unresolved resource bindings, distinguishing complete failure from partial success.
u32 FUN_0045b384(NamedResourceBindingArray* bindings,
                  const NamedResourceBindingRequest* request,
                  const NamedResourceBindingOwner* owner)
{
    u8 missing = 0;
    u8 found = 0;
    if (request->count > bindings->capacity)
        return 0x80000001;

    for (u32 index = 0; index < request->count; ++index) {
        if (bindings->resources[index] == NULL) {
            NamedResourceDirectoryData* directory = &owner->directory->data;
            void* resource = NULL;
            const char* name = request->names[index];
            u32 resourceIndex = FUN_001a7a20(directory->nameIndex, name, libc_strlen(name));
            if (resourceIndex != 0xFFFF)
                resource = owner->directory->data.resources[resourceIndex];
            if (resource == NULL)
                missing = 1;
            else
                found = 1;
            bindings->resources[index] = resource;
        }
    }
    u32 index = request->count;
    while (index < bindings->capacity)
        bindings->resources[index++] = NULL;

    if (found) {
        if (missing)
            return 0x4000;
    } else if (missing) {
        return 0x80008000;
    }
    return 0;
}
}
