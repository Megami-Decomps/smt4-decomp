/* NON_MATCHING: collection clear/release body matches; only retail's unused fp/r3 frame push and pre-vptr sl zeroing differ. */
#include "shard/W6_W6Match7_OwnedCollections.h"

namespace {
inline void clearCollection(AllocatorOwnedCollection* collection)
{
    AllocatorOwnedCollectionEntry** end = collection->end;
    for (AllocatorOwnedCollectionEntry** current = collection->begin; current != end; ++current) {
        AllocatorOwnedCollectionEntry* entry = *current;
        AsdAllocatorObject* owner = entry->owner;
        if (owner != NULL) {
            entry->destroy();
            owner->release(entry);
        }
    }
    collection->end = collection->begin;
}

inline void destroyCollection(AllocatorOwnedCollection*& slot)
{
    AllocatorOwnedCollection* collection = slot;
    if (collection == NULL) {
        return;
    }
    clearCollection(collection);
    if (collection->bufferOwner != NULL && collection->begin != NULL) {
        collection->bufferOwner->release(collection->begin);
    }
    collection->owner->release(collection);
    slot = NULL;
}
}

/* The allocator owns both the element storage and the collection headers. */
Obj55bc90::~Obj55bc90()
{
    destroyCollection(first);
    destroyCollection(second);
}
