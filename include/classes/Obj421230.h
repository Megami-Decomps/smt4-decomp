#ifndef CLASSES_OBJ421230_H
#define CLASSES_OBJ421230_H

#include "classes/AsdAllocatorObject.h"

/* The resource record a scene object is built from; each subclass views it as its own kind. */
struct Obj421230Res {
    u8 unk00[0xc];
    /* 0x0C */ s32 dataOffset;   /* offset from this field to the resource's data block, 0 if none */
};

/* Releases a resource a scene object did not take over: its data block, then the record. */
static __inline void Obj421230ReleaseRes(AsdAllocatorObject *allocator, Obj421230Res *res)
{
    s32 offset = res->dataOffset;
    void *data = offset != 0 ? (void *)((u8 *)&res->dataOffset + offset) : NULL;
    if (data != NULL) {
        allocator->release(data);
    }
    allocator->release(res);
}

/* A resource and the allocator it came from; the scene object that takes it over (with take())
 * leaves the creator's handle empty so the creator does not destroy it. */
template <class Res> struct Obj421230ResHandle {
    Res *res;
    AsdAllocatorObject *allocator;
    Obj421230ResHandle take()
    {
        Obj421230ResHandle taken = *this;
        res = NULL;
        return taken;
    }
};

/* Common base of the scene objects built from a resource (lights, fog, ...); vtable at 0x421230,
 * named after it until its real name is known. Sized 0x148 here (the derived classes start there). */
class Obj421230 {
public:
    Obj421230(AsdAllocatorObject *allocator, Obj421230Res *res, void *owner);
    virtual ~Obj421230();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void vfunc18();
    virtual void vfunc1c();
    virtual void vfunc20();
    virtual void initialize(AsdAllocatorObject *allocator);   /* +0x24 */

    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ Obj421230Res *res;
    /* 0x0C */ u8 unk0c[0x13c];
};

typedef char Obj421230SizeCheck[sizeof(Obj421230) == 0x148 ? 1 : -1];

#endif
