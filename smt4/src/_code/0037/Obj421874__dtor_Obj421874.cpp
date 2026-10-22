/* NON_MATCHING: allocator-owned collection load scheduling is not yet matched. */
#include "classes/Obj421874.h"

namespace {
inline void destroyCollection(AllocatorOwnedCollection *&slot)
{
    AllocatorOwnedCollection *collection = slot;
    if (collection == NULL) {
        return;
    }
    AllocatorOwnedCollectionEntry **end = collection->end;
    for (AllocatorOwnedCollectionEntry **current = collection->begin; current != end; ++current) {
        AllocatorOwnedCollectionEntry *entry = *current;
        AsdAllocatorObject *owner = entry->owner;
        if (owner != NULL) {
            entry->destroy();
            owner->release(entry);
        }
    }
    collection->end = collection->begin;
    if (collection->bufferOwner != NULL && collection->begin != NULL) {
        collection->bufferOwner->release(collection->begin);
    }
    collection->owner->release(collection);
    slot = NULL;
}
}

/* Releases both collections through the allocators that own them. */
Obj421874::~Obj421874()
{
    destroyCollection(first);
    destroyCollection(second);
}
