/* NON_MATCHING: LDRD combines buffer-owner/begin loads and narrows the saved frame; O2 may restore retail's scalar load/store scheduling. */
#include "shard/W6_W6Match7_OwnedCollections.h"

namespace {
inline void destroyCollection(AllocatorOwnedCollection*& slot)
{
    AllocatorOwnedCollection* collection = slot;
    if (collection == NULL) {
        return;
    }
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
