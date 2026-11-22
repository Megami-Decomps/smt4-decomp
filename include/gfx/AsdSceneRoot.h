/* The model system's scene root (smt4 asdSceneRootCreate, smt4a asdSceneRootCreate build one per scene from the
 * AsdModelLimits table): the scene objects it builds from the allocator, their owning pointers and the
 * descriptions the builders take. Names are inferred from the code. */
#ifndef GFX_ASDSCENEROOT_H
#define GFX_ASDSCENEROOT_H

#include "common.h"
#include <stddef.h>
#include <new>
#include "classes/AsdAllocatorObject.h"

/* An object made from an allocator that it keeps at 0x04 and destroys itself through it. */
class AsdSceneObject {
public:
    virtual ~AsdSceneObject();
    /* 0x04 */ AsdAllocatorObject *allocator;

    void destroy()
    {
        this->~AsdSceneObject();
        allocator->release(this);
    }
};

/* An owning pointer to a scene object: assignment swaps, and a pointer still owning its object
 * destroys it. */
template <class T> struct AsdSceneMovePtr {
    T *ptr;
    bool owned;

    AsdSceneMovePtr() : ptr(NULL), owned(true) {}
    explicit AsdSceneMovePtr(T *ptr) : ptr(ptr), owned(true) {}
    ~AsdSceneMovePtr()
    {
        if (ptr != NULL && owned) {
            ptr->destroy();
        }
    }
    AsdSceneMovePtr &operator=(AsdSceneMovePtr other)
    {
        swap(other);
        return *this;
    }
    void swap(AsdSceneMovePtr &other)
    {
        if (this != &other) {
            T *otherPtr = other.ptr;
            bool otherOwned = other.owned;
            other.ptr = ptr;
            other.owned = owned;
            ptr = otherPtr;
            owned = otherOwned;
        }
    }
};

/* The limits the scene's updater is built with. */
struct AsdSceneUpdaterDescription {
    bool enabled;
    u32 values[15];

    AsdSceneUpdaterDescription() : enabled(true)
    {
        values[0] = 64;
        values[1] = 0;
        values[2] = 64;
        values[3] = 64;
        values[4] = 4;
        values[5] = 8;
        values[6] = 8;
        values[7] = 8;
        values[8] = 4;
        values[9] = 4;
        values[10] = 4;
        values[11] = 64;
        values[12] = 64;
        values[13] = 64;
        values[14] = 64;
    }
};

/* Descriptions the builders take whose fields the scene root leaves as they are (4 and 12 bytes). */
struct AsdSceneSmallDescription {
    u8 unk00[4];
};
struct AsdSceneLargeDescription {
    u8 unk00[12];
};

/* The three scene objects the queue builder takes over. */
struct AsdSceneQueueDescription {
    AsdSceneMovePtr<AsdSceneObject> first;
    AsdSceneMovePtr<AsdSceneObject> second;
    AsdSceneMovePtr<AsdSceneObject> third;
};

/* The list builder's description: whether the list is used and its capacity. */
struct AsdSceneListDescription {
    /* 0x00 */ bool enabled;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ u32 capacity;

    AsdSceneListDescription() : enabled(true), unk01(0), unk02(0), capacity(128) {}
};

/* The scene root (0x14 bytes): the allocator and the four objects built from it. */
struct AsdSceneRoot {
    /* 0x00 */ AsdAllocatorObject *allocator;
    /* 0x04 */ void *updater;
    /* 0x08 */ void *unk08;
    /* 0x0C */ void *queue;
    /* 0x10 */ void *list;

    static void *operator new(size_t size, void *memory) throw() { return memory; }
    AsdSceneRoot() : allocator(NULL), updater(NULL), unk08(NULL), queue(NULL), list(NULL) {}
};

#endif
