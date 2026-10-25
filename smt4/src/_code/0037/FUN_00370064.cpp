/* NON_MATCHING: relative-pointer null tests and cached-zero/register allocation differ; 59 built versus 63 retail rows. */
#include "gfx/RelativeResourceClone.h"
#include <string.h>

extern "C" void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
extern "C" void *FUN_0036ebc0(AsdAllocatorObject *allocator, void *source);
extern "C" void FUN_00370244(RelativeCloneResource *resource, AsdAllocatorObject *allocator);

extern "C" RelativeCloneResource *FUN_00370064(
    const RelativeCloneResource *source, AsdAllocatorObject *allocator)
{
    RelativeCloneResource *copy = static_cast<RelativeCloneResource *>(
        allocator->allocate(sizeof(RelativeCloneResource), 4));
    if (!copy) {
        return NULL;
    }
    __aeabi_memcpy4(copy, source, sizeof(*copy));
    void *child = source->child.get();
    if (child) {
        void *childCopy = FUN_0036ebc0(allocator, child);
        if (!childCopy) {
            FUN_00370244(copy, allocator);
            return NULL;
        }
        copy->child.set(childCopy);
    }
    RelativeCloneStorage *storage = static_cast<RelativeCloneStorage *>(source->storage.get());
    if (storage && !(storage->flags & 0x80000000)) {
        storage = NULL;
    }
    if (storage) {
        RelativeCloneStorage *storageCopy = static_cast<RelativeCloneStorage *>(
            allocator->allocate(sizeof(RelativeCloneStorage), 4));
        if (!storageCopy) {
            FUN_00370244(copy, allocator);
            return NULL;
        }
        memcpy(storageCopy, storage, sizeof(*storageCopy));
        copy->storage.set(storageCopy);
        storageCopy->owner.set(copy);
    }
    return copy;
}
