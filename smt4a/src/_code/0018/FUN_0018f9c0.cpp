/* NON_MATCHING: directory subobject addressing and scan-loop control match; saved binding/status registers and the first error assignment differ. */
#include "gfx/NamedSubresourceSelection.h"
#include "gfx/NamedResourceBindings.h"

extern "C" {
u32 libc_strlen(const char *);
u32 FUN_001a7a20(const void *, const char *, u32);
s32 libc_strcmp(const char *, const char *);
}

static __inline NamedSubresourceEntry *findSubresource(NamedSubresourceGroup *group, const char *name)
{
    if (name) {
        NamedSubresourceEntry *entry = group->entries;
        NamedSubresourceEntry *end = entry + group->count;
        while (entry != end && libc_strcmp(entry->name, name) != 0)
            ++entry;
        if (entry != group->entries + group->count)
            return entry;
    }
    return NULL;
}

extern "C" u32 FUN_0018f9c0(NamedSubresourceSelection *selection, NamedResourceBindingOwner *owner)
{
    // The grouped subresource table is beyond the directory prefix recovered in the shared header.
    struct DirectoryGroupData {
        NamedSubresourceGroup **groups;
        u8 nameIndex[4];
    };
    struct DirectoryView {
        u8 prefix[0x30];
        DirectoryGroupData data;
    };
    u32 status = 0;
    if (!selection->primary && selection->primaryGroup && selection->primaryName) {
        DirectoryGroupData *directory = &reinterpret_cast<DirectoryView *>(owner->directory)->data;
        const char *name = selection->primaryGroup;
        u32 index = FUN_001a7a20(directory->nameIndex, name, libc_strlen(name));
        if (index == 0xFFFF)
            status |= 0x80000020;
        else
            selection->primary = findSubresource(reinterpret_cast<DirectoryView *>(owner->directory)->data.groups[index], selection->primaryName);
    }
    if (!selection->secondary && selection->secondaryGroup && selection->secondaryName) {
        DirectoryGroupData *directory = &reinterpret_cast<DirectoryView *>(owner->directory)->data;
        const char *name = selection->secondaryGroup;
        u32 index = FUN_001a7a20(directory->nameIndex, name, libc_strlen(name));
        if (index == 0xFFFF)
            status |= 0x80000020;
        else
            selection->secondary = findSubresource(reinterpret_cast<DirectoryView *>(owner->directory)->data.groups[index], selection->secondaryName);
    }
    return status;
}
