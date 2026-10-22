#ifndef CLASSES_OBJ4214B4_H
#define CLASSES_OBJ4214B4_H

#include "classes/AsdAllocatorObject.h"

/* Nonpolymorphic owner state is initialized before the derived view installs its vptr. */
class Obj4214b4OwnerState {
protected:
    Obj4214b4OwnerState(AsdAllocatorObject *allocator) : owner(allocator), flag(0) {}

    /* 0x00 (view +0x04) */ AsdAllocatorObject *owner;
    /* 0x04 (view +0x08) */ u8 flag;
};

/* An object that holds one resource of the allocator it was made from (vtable at 0x4214b4, named
 * after it until its real name is known). FUN_0013e8b4 makes one in C form. */
class Obj4214b4 : protected Obj4214b4OwnerState {
public:
    Obj4214b4(AsdAllocatorObject *allocator, u32 value)
        : Obj4214b4OwnerState(allocator), resource((void *)value) {}
    static void *operator new(u32, void *memory) throw() { return memory; }
    virtual ~Obj4214b4();
    virtual const void *getTypeDescriptor() const;
    virtual void buildViewMatrix(f32 *matrix, u32 index, const f32 *offset);
    virtual u32 getHandle() const;
    virtual void vfunc14();
    virtual s32 getCategory() const;
    u32 implementationId() const;
    void *getResource() const { return resource; }

protected:
    /* 0x00: vtable pointer */
    /* 0x0C */ void *resource;
};

#endif
