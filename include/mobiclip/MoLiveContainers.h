#ifndef MOBICLIP_MOLIVECONTAINERS_H
#define MOBICLIP_MOLIVECONTAINERS_H

#include "common.h"
#include <map>
#include <memory>

namespace MoLive {

/* Memory source of the MoLive containers: abstract allocator with a failure report. */
class Allocator {
public:
    virtual void *allocate(u32 bytes) = 0;
    virtual void release(void *memory) = 0;
    virtual void report(const char *format, ...) = 0;
};

extern "C" const char g_moLiveOutOfMemoryMessage[]; /* "MoLive::Allocator: not enough memory to allocate %d bytes !!!\n" */

/* STL allocator that draws from a MoLive::Allocator, reporting when it runs dry. */
/* The allocator state shared by every StlAllocator<T>. */
struct AllocatorHandle {
    Allocator *source;
};

template <class T>
class StlAllocator : public AllocatorHandle {
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
        typedef StlAllocator<U> other;
    };

    StlAllocator() { source = NULL; }
    explicit StlAllocator(Allocator *owner) { source = owner; }
    template <class U>
    StlAllocator(const StlAllocator<U> &other) : AllocatorHandle(other) {}

    pointer address(reference value) const { return &value; }
    const_pointer address(const_reference value) const { return &value; }

    pointer allocate(size_type count, std::allocator<void>::const_pointer = 0)
    {
        void *memory = source->allocate(count * sizeof(T));
        if (memory == NULL)
            source->report(g_moLiveOutOfMemoryMessage, count * sizeof(T));
        return static_cast<pointer>(memory);
    }
    void deallocate(pointer memory, size_type) { if (memory != NULL) source->release(memory); }
    size_type max_size() const { return size_type(~0) / sizeof(T) ? size_type(size_type(~0) / sizeof(T)) : size_type(1); }
    void construct(pointer p, const_reference value) { new (p) T(value); }
    void destroy(pointer p) { p->~T(); }
};

template <class T, class U>
inline bool operator==(const StlAllocator<T> &left, const StlAllocator<U> &right) { return left.source == right.source; }
template <class T, class U>
inline bool operator!=(const StlAllocator<T> &left, const StlAllocator<U> &right) { return left.source != right.source; }

/* Object owned by a ring of ObjectHandles. */
class ManagedObject {
public:
    virtual ~ManagedObject() {}
};

/* Shared owner of a ManagedObject: the handles sharing one object form a circular list; the last one to go destroys the object and gives its memory back. */
class ObjectHandle {
public:
    ObjectHandle(const ObjectHandle &source) : allocator(source.allocator), object(source.object)
    {
        next = source.next;
        next->previous = this;
        previous = const_cast<ObjectHandle *>(&source);
        const_cast<ObjectHandle &>(source).next = this;
    }
    ~ObjectHandle()
    {
        if (previous == NULL || previous == this) {
            if (object != NULL) {
                object->~ManagedObject();
                allocator->release(object);
            }
        } else {
            previous->next = next;
            next->previous = previous;
            previous = NULL;
            next = NULL;
        }
        object = NULL;
    }

    /* Gives the handle up: the last holder returns the object's memory (without running its destructor); the handle then stands alone. */
    void detach()
    {
        if (previous == NULL || previous == this) {
            if (object != NULL) {
                allocator->release(object);
            }
        } else {
            previous->next = next;
            next->previous = previous;
            previous = NULL;
            next = NULL;
        }
        object = NULL;
        previous = this;
        next = this;
    }

    /* 0x00 */ Allocator *allocator;
    /* 0x04 */ ManagedObject *object;
    /* 0x08 */ ObjectHandle *previous;
    /* 0x0c */ ObjectHandle *next;
};

typedef std::pair<const u32, ObjectHandle> ObjectHandleEntry;
typedef StlAllocator<ObjectHandleEntry> ObjectHandleAllocator;
typedef std::map<u32, ObjectHandle, std::less<u32>, ObjectHandleAllocator> ObjectHandleMap;

} /* namespace MoLive */

#endif
