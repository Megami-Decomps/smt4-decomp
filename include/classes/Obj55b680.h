#ifndef CLASSES_OBJ55B680_H
#define CLASSES_OBJ55B680_H

#include "classes/AsdAllocatorObject.h"

/* The resource record a scene object is built from; each subclass views it as its own kind. */
struct Obj55b680Res {
    u8 unk00[0xc];
    /* 0x0C */ s32 dataOffset;   /* offset from this field to the resource's data block, 0 if none */
};

/* Releases a resource a scene object did not take over: its data block, then the record. */
static __inline void Obj55b680ReleaseRes(AsdAllocatorObject *allocator, Obj55b680Res *res)
{
    u8 *base = (u8 *)&res->dataOffset;
    s32 offset = res->dataOffset;
    u8 *data = offset != 0 ? base + offset : NULL;
    if (data != NULL) {
        allocator->release(data);
    }
    allocator->release(res);
}

/* A resource and the allocator it came from; the scene object that takes it over (with take())
 * leaves the creator's handle empty so the creator does not destroy it. */
template <class Res> struct Obj55b680ResHandle {
    Res *res;
    AsdAllocatorObject *allocator;
    Obj55b680ResHandle take()
    {
        Obj55b680ResHandle taken = *this;
        res = NULL;
        return taken;
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

#endif
