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
    AsdSceneObject(AsdAllocatorObject *allocator) : allocator(allocator) {}
    virtual ~AsdSceneObject();
    /* 0x04 */ AsdAllocatorObject *allocator;

    void destroy()
    {
        this->~AsdSceneObject();
        allocator->release(this);
    }
};

/* The scene objects the root's builders make (FUN_0011ffc0, FUN_0012cef8, asdSceneCreateQueueComponent, FUN_001200e8 and their
 * smt4a twins), named after their smt4 vtables until their real names are known. Each vtable lists only the
 * destructor. */

/* The 12-byte object FUN_0011ffc0 builds; its destructor (FUN_00367528) is empty. */
class Obj421264 : public AsdSceneObject {
public:
    Obj421264(AsdAllocatorObject *allocator) : AsdSceneObject(allocator), unk08(0) {}
    virtual ~Obj421264();
    /* 0x08 */ u32 unk08;
};

/* The 8-byte object FUN_0012cef8 builds; its destructor (FUN_003680fc) is empty. */
class Obj421374 : public AsdSceneObject {
public:
    Obj421374(AsdAllocatorObject *allocator) : AsdSceneObject(allocator) {}
    virtual ~Obj421374();
};

/* The 8-byte queue component asdSceneCreateQueueComponent builds; its destructor (smt4 0x36a100, smt4a _ZN9Obj4214ecD1Ev) is empty. */
class Obj4214ec : public AsdSceneObject {
public:
    Obj4214ec(AsdAllocatorObject *allocator) : AsdSceneObject(allocator) {}
    virtual ~Obj4214ec();
};
typedef char Obj4214ecSizeCheck[sizeof(Obj4214ec) == 8 ? 1 : -1];

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

/* The 16-byte object FUN_001200e8 builds: it takes over the list the list builder made, which its destructor
 * (FUN_003683d4) destroys. */
class Obj4213d4 : public AsdSceneObject {
public:
    Obj4213d4(AsdAllocatorObject *allocator, AsdSceneObject *list) : AsdSceneObject(allocator), list(list) {}
    virtual ~Obj4213d4();
    /* 0x08 */ AsdSceneMovePtr<AsdSceneObject> list;
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

/* The scene objects' builders: each allocates its object from `allocator` and returns it, or NULL if the
 * allocation failed (smt4 names; smt4a FUN_0015d31c, FUN_00172088, asdSceneCreateQueueComponent, FUN_0015d444). */
extern "C" {
AsdSceneObject *FUN_0011ffc0(AsdSceneLargeDescription *description, AsdAllocatorObject *allocator);
AsdSceneObject *FUN_0012cef8(AsdSceneSmallDescription *description, AsdAllocatorObject *allocator);
AsdSceneObject *asdSceneCreateQueueComponent(AsdSceneSmallDescription *description, AsdAllocatorObject *allocator);
AsdSceneObject *FUN_001200e8(AsdSceneObject **list, AsdAllocatorObject *allocator);
AsdSceneObject *FUN_0015d31c(AsdSceneLargeDescription *description, AsdAllocatorObject *allocator);
AsdSceneObject *FUN_00172088(AsdSceneSmallDescription *description, AsdAllocatorObject *allocator);
AsdSceneObject *FUN_0015d444(AsdSceneObject **list, AsdAllocatorObject *allocator);
} /* extern "C" */

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
