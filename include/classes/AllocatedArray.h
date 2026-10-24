#ifndef CLASSES_ALLOCATEDARRAY_H
#define CLASSES_ALLOCATEDARRAY_H

#include "classes/AsdAllocatorObject.h"
#include <memory>
#include <new>

/* Growable array whose storage comes from an allocator object (the unchecked variant: a failed
 * allocation is not tested). The top two bits of the capacity word say who owns the storage
 * (0x40000000: the array may reallocate). */
template <class T>
class AllocatedArray {
public:
    ~AllocatedArray();

    s32 size() const { return end - begin; }
    s32 capacity() const { return capacityFlags & 0x3fffffff; }

    /* Appends a copy; false when the array is full and cannot grow. */
    bool push_back(const T &value)
    {
        s32 current = capacity();
        bool added = true;
        if (current <= size()) {
            added = reserve(current != 0 ? current * 2 : 1);
        }
        if (added) {
            new (end) T(value);
            ++end;
        }
        return added;
    }

    void setCapacity(s32 newCapacity) { capacityFlags = (capacityFlags & 0xc0000000) | newCapacity; }

    /* Moves the elements into new storage of at least newCapacity elements. */
    bool reserve(s32 newCapacity)
    {
        if (newCapacity <= capacity()) {
            return true;
        }
        if (allocator == NULL || (capacityFlags & 0xc0000000) != 0x40000000) {
            return false;
        }
        T *storage = static_cast<T *>(allocator->allocate(newCapacity * sizeof(T), 0x20));
        s32 count = 0;
        T *from = begin;
        T *last = end;
        if (from != last) {
            std::uninitialized_copy(from, last, storage);
            count = size();
        }
        if (begin != NULL) {
            allocator->release(begin);
        }
        end = storage + count;
        begin = storage;
        setCapacity(newCapacity);
        return true;
    }

    /* 0x00 */ AsdAllocatorObject *allocator;
    /* 0x04 */ T *begin;
    /* 0x08 */ T *end;
    /* 0x0C */ u32 capacityFlags;
};

/* Destroys the elements and hands the storage back to the allocator. */
template <class T>
AllocatedArray<T>::~AllocatedArray()
{
    _RW::__rw_destroy(begin, end);
    end = begin;
    if (allocator != NULL && begin != NULL) {
        allocator->release(begin);
    }
}

#endif
