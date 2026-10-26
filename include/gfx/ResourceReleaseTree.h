/* A loaded model resource's relocatable index: self-relative offsets leading from the owner's root
 * down to groups of entries, released one group at a time. Shared by both games' resource teardown. */
#ifndef GFX_RESOURCERELEASETREE_H
#define GFX_RESOURCERELEASETREE_H

#include "common.h"
#include "shard/S1NwGfx.h"

/* The object a group's resources were registered with; slot 3 releases a registration. */
class ResourceRegistry {
public:
    virtual ~ResourceRegistry();
    virtual void unk08();
    virtual void release();
};

/* A 32-bit offset from its own address to its target; 0 means none. */
typedef RelativePointer SelfOffset;

template <class T> static T *offsetTarget(SelfOffset *slot)
{
    return static_cast<T *>(slot->get());
}

/* One loaded resource. */
struct ResourceEntry {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 registration;      /* non-zero while registered with the group's registry */
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 dataSize;
    /* 0x24 */ u32 data;              /* the block handed to the release callback */
};

/* A group: `count` entries (offsets from +4) and their data blocks (offset from +0xC). */
struct ResourceGroup {
    /* 0x00 */ u32 count;
    /* 0x04 */ SelfOffset entries;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ SelfOffset blocks;
    /* 0x10 */ u32 flags;             /* bit 0: loaded */
    /* 0x14 */ ResourceRegistry *registry;
};

/* The header behind an owner: `groupCount` group offsets starting at +0x10. */
struct ResourceTreeRoot {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 groupCount;
    /* 0x10 */ SelfOffset groups;
};

struct ResourceTreeOwner {
    /* 0x00 */ ResourceTreeRoot *root;
};

#endif
