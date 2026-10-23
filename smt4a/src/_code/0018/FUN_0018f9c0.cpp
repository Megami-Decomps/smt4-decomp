/* NON_MATCHING: directory-name index base folding, scan-loop comparisons, and saved binding registers differ. */
#include "gfx/NamedSubresourceSelection.h"
#include "gfx/NamedResourceBindings.h"

extern "C" {
u32 wstrlen(const u16 *);
u32 FUN_001a7a20(const void *, const u16 *, u32);
s32 libc_strcmp(const char *, const char *);
}

static __inline NamedSubresourceEntry *findSubresource(NamedSubresourceGroup *group, const char *name)
{
    if (name) {
        NamedSubresourceEntry *entry = group->entries;
        NamedSubresourceEntry *end = entry + group->count;
        for (; entry != end; ++entry) {
            if (libc_strcmp(entry->name, name) == 0)
                break;
        }
        if (entry != group->entries + group->count)
            return entry;
    }
    return NULL;
}

extern "C" u32 FUN_0018f9c0(NamedSubresourceSelection *selection, NamedResourceBindingOwner *owner)
{
    // The grouped subresource table is beyond the directory prefix recovered in the shared header.
    struct DirectoryView {
        u8 prefix[0x30];
        NamedSubresourceGroup **groups;
        u8 nameIndex[4];
    };
    u32 status = 0;
    if (!selection->primary && selection->primaryGroup && selection->primaryName) {
        DirectoryView *directory = reinterpret_cast<DirectoryView *>(owner->directory);
        const u16 *name = selection->primaryGroup;
        u32 index = FUN_001a7a20(directory->nameIndex, name, wstrlen(name));
        if (index == 0xFFFF)
            status |= 0x80000020;
        else
            selection->primary = findSubresource(reinterpret_cast<DirectoryView *>(owner->directory)->groups[index], selection->primaryName);
    }
    if (!selection->secondary && selection->secondaryGroup && selection->secondaryName) {
        DirectoryView *directory = reinterpret_cast<DirectoryView *>(owner->directory);
        const u16 *name = selection->secondaryGroup;
        u32 index = FUN_001a7a20(directory->nameIndex, name, wstrlen(name));
        if (index == 0xFFFF)
            status |= 0x80000020;
        else
            selection->secondary = findSubresource(reinterpret_cast<DirectoryView *>(owner->directory)->groups[index], selection->secondaryName);
    }
    return status;
}
