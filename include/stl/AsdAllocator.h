#ifndef STL_ASDALLOCATOR_H
#define STL_ASDALLOCATOR_H

#include "common.h"
#include <memory>

extern "C" void *rt_malloc(u32 bytes);
extern "C" void asdOperatorDeleteArray(void *allocation);

/* The allocator the game's containers are instantiated with: storage comes from the engine's global operator new / delete[] (rt_malloc, asdOperatorDeleteArray). */
template <class T>
class AsdAllocator {
public:
    typedef u32 size_type;
    typedef s32 difference_type;
    typedef T value_type;
    typedef T *pointer;
    typedef const T *const_pointer;
    typedef T &reference;
    typedef const T &const_reference;

    template <class U>
    struct rebind {
        typedef AsdAllocator<U> other;
    };

    AsdAllocator() {}
    template <class U>
    AsdAllocator(const AsdAllocator<U> &) {}
    template <class U>
    AsdAllocator &operator=(const AsdAllocator<U> &) { return *this; }

    pointer address(reference x) const { return &x; }
    const_pointer address(const_reference x) const { return &x; }

    pointer allocate(size_type n, std::allocator<void>::const_pointer = 0);
    void deallocate(pointer p, size_type) { asdOperatorDeleteArray(p); }

    size_type max_size() const { return size_type(~0) / sizeof(T) ? size_type(size_type(~0) / sizeof(T)) : size_type(1); }
    void construct(pointer p, const_reference value) { new (p) T(value); }
    void destroy(pointer p) { p->~T(); }
};

template <class T>
typename AsdAllocator<T>::pointer AsdAllocator<T>::allocate(size_type n, std::allocator<void>::const_pointer)
{
    return static_cast<pointer>(rt_malloc(n * sizeof(T)));
}

template <class T, class U>
inline bool operator==(const AsdAllocator<T> &, const AsdAllocator<U> &) { return true; }
template <class T, class U>
inline bool operator!=(const AsdAllocator<T> &, const AsdAllocator<U> &) { return false; }

#endif
