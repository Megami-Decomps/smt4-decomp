/* NON_MATCHING: structure matches (switch, allocator call, placement-new null check, per-class stores); retail hoists the constants 0/1/2/6/-1 and the Obj4224d4 vtable into callee-saved registers and stores [0xC..0x14] by stm then size, then vptr+kind, while armcc here merges the size into the first stm and hoists only -1. Needs _ZTV9Obj422564 (0x422564, size 0x24) so the fifth vptr reads as that symbol +8 instead of DAT_0042256c. */
#include "classes/Obj4224b0.h"
#include "classes/Obj4224d4.h"
#include "classes/Obj4224f8.h"
#include "classes/Obj42251c.h"
#include "classes/Obj422564.h"
#include <new>

/* The owner of a pool: the allocator its objects are made from. */
struct PoolObjectOwner {
    OwnerAllocator *allocator;
};

extern "C" {

// Make the pool object for a selection kind (NULL when the kind is unknown or the allocation fails).
void *FUN_003aff9c(PoolObjectOwner *owner, s32 kind, void *storage)
{
    switch (kind) {
    case 1: {
        void *memory = owner->allocator->allocate(sizeof(Obj4224d4));
        return memory != NULL ? new (memory) Obj4224d4(owner->allocator, storage) : NULL;
    }
    case 2: {
        void *memory = owner->allocator->allocate(sizeof(Obj4224b0));
        return memory != NULL ? new (memory) Obj4224b0(owner->allocator, storage) : NULL;
    }
    case 3: {
        void *memory = owner->allocator->allocate(sizeof(Obj42251c));
        return memory != NULL ? new (memory) Obj42251c(owner->allocator, storage) : NULL;
    }
    case 4: {
        void *memory = owner->allocator->allocate(sizeof(Obj4224f8));
        return memory != NULL ? new (memory) Obj4224f8(owner->allocator, storage) : NULL;
    }
    case 0x100000: {
        void *memory = owner->allocator->allocate(sizeof(Obj422564));
        return memory != NULL ? new (memory) Obj422564() : NULL;
    }
    }
    return NULL;
}

}
