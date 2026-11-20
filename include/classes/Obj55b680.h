#ifndef CLASSES_OBJ55B680_H
#define CLASSES_OBJ55B680_H

#include "classes/AsdAllocatorObject.h"
#include "shard/W6_W6Match4_RelativeResourceGraph.h"

/* The resource record a scene object is built from; each subclass views it as its own kind. */
struct Obj55b680Res {
    u8 unk00[0xc];
    /* 0x0C */ ResourceRelativePointer<u8> data;   /* the resource's data block (a self-relative offset, 0 if none) */

    static void destroy(AsdAllocatorObject *allocator, Obj55b680Res *res);
};

/* The default deleter: releases a resource no scene object took over, its data block, then the
 * record. */
inline void Obj55b680Res::destroy(AsdAllocatorObject *allocator, Obj55b680Res *res)
{
    if (res->data.get() != NULL) {
        allocator->release(res->data.get());
    }
    allocator->release(res);
}

/* The deleter an owning resource pointer carries: the allocator the resource came from, which
 * destroys it through Res::destroy. */
template <class Res> struct Obj55b680ResDeleter {
    AsdAllocatorObject *allocator;

    Obj55b680ResDeleter(AsdAllocatorObject *allocator = NULL) : allocator(allocator) {}
    void operator()(Res *res) const
    {
        Res::destroy(allocator, res);
    }
};

/* An owning pointer to a resource (a move-only pointer with an allocator deleter): copying it moves
 * the resource to the copy and leaves the source empty, and a pointer still holding its resource
 * when it goes out of scope destroys it. A creator keeps the resource in one until the scene object
 * built from it has taken it over. */
template <class Res> struct Obj55b680ResHandle {
    Res *res;
    Obj55b680ResDeleter<Res> deleter;

    Obj55b680ResHandle() : res(NULL), deleter() {}
    Obj55b680ResHandle(Res *res, AsdAllocatorObject *allocator) : res(res), deleter(allocator) {}
    Obj55b680ResHandle(const Obj55b680ResHandle &other) : res(other.res), deleter(other.deleter)
    {
        const_cast<Obj55b680ResHandle &>(other).res = NULL;
    }
    ~Obj55b680ResHandle()
    {
        if (res != NULL) {
            deleter(res);
        }
    }
};

/* Common base of the scene objects built from a resource (lights, fog, ...); vtable at 0x55b680,
 * named after it until its real name is known. Sized 0x148 here (the derived classes start there). */
class Obj55b680 {
public:
    Obj55b680(AsdAllocatorObject *allocator, Obj55b680Res *res, void *owner);
    virtual ~Obj55b680();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void vfunc18();
    virtual void vfunc1c();
    virtual void vfunc20();
    virtual void initialize(AsdAllocatorObject *allocator);   /* +0x24 */

    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ Obj55b680Res *res;
    /* 0x0C */ u8 unk0c[0x13c];
};

typedef char Obj55b680SizeCheck[sizeof(Obj55b680) == 0x148 ? 1 : -1];

/* The part the four light kinds (Obj55b4a8, Obj55b4e4, Obj55b5a8, Obj55b704) share between the
 * scene object and their own resource handle. Its constructor runs inline in theirs (retail clears
 * these two words before the derived vtable store), so it has no vtable of its own in the image. */
class Obj55b680Light : public Obj55b680 {
public:
    Obj55b680Light(AsdAllocatorObject *allocator, Obj55b680Res *res, void *owner)
        : Obj55b680(allocator, res, owner), unk148(0), unk170(0)
    {
    }

    /* 0x148 */ u32 unk148;
    /* 0x14C */ u8 unk14c[0x24];
    /* 0x170 */ u32 unk170;
};

typedef char Obj55b680LightSizeCheck[sizeof(Obj55b680Light) == 0x174 ? 1 : -1];

#endif
