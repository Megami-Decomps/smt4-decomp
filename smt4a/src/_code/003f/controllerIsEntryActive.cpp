#include "common.h"

extern "C" {

struct EntryResource {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 flags;
};
struct Entry {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ EntryResource *resource;
    /* 0x10 */ u8 unk10[0x10];
    /* 0x20 */ u8 kind;
    /* 0x21 */ u8 unk21[0xf];
};
struct EntryOwner {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ s32 index;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ Entry entries[1];
};

s32 controllerIsEntryActive(EntryOwner *owner)
{
    Entry *entry = &owner->entries[owner->index];
    if (entry != NULL) {
        if (entry->kind == 2) {
            if (entry->resource->flags & 1) {
                return 1;
            }
        } else if (entry->kind == 1) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
