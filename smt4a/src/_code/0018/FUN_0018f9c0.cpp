/* NON_MATCHING: directory subobject addressing and scan-loop control match; saved binding/status registers and the first error assignment differ. */
#include "gfx/NamedSubresourceSelection.h"
#include "gfx/NamedResourceBindings.h"
#include <string.h>

extern "C" {
u32 libc_strlen(const char *);
u32 nameTableLookupEntry(const void *, const char *, u32);
}

static __inline NamedSubresourceEntry *findSubresource(NamedSubresourceGroup *group, const char *name)
{
    if (name) {
        NamedSubresourceEntry *entry = group->entries;
        NamedSubresourceEntry *end = entry + group->count;
        while (entry != end && strcmp(entry->name, name) != 0)
            ++entry;
        if (entry != group->entries + group->count)
            return entry;
    }
    return NULL;
}

extern "C" u32 FUN_0018f9c0(NamedSubresourceSelection *selection, NamedResourceBindingOwner *owner)
{
    u32 status = 0;
    if (!selection->primary && selection->primaryGroup && selection->primaryName) {
        NamedSubresourceDirectoryData *directory = &owner->directory->subresources;
        const char *name = selection->primaryGroup;
        u32 index = nameTableLookupEntry(directory->nameIndex, name, libc_strlen(name));
        if (index == 0xFFFF)
            status |= 0x80000020;
        else
            selection->primary = findSubresource(owner->directory->subresources.groups[index], selection->primaryName);
    }
    if (!selection->secondary && selection->secondaryGroup && selection->secondaryName) {
        NamedSubresourceDirectoryData *directory = &owner->directory->subresources;
        const char *name = selection->secondaryGroup;
        u32 index = nameTableLookupEntry(directory->nameIndex, name, libc_strlen(name));
        if (index == 0xFFFF)
            status |= 0x80000020;
        else
            selection->secondary = findSubresource(owner->directory->subresources.groups[index], selection->secondaryName);
    }
    return status;
}
