#ifndef CLASSES_OBJ422540_H
#define CLASSES_OBJ422540_H

#include "common.h"

struct SelectionValueRecord;

/* The allocator the pool objects take their nodes from. */
struct OwnerAllocator {
    virtual void *allocate(u32 size) = 0;
    virtual void release(void *item) = 0;
};

/* The base of the pool objects with vtables at 0x4224b0, 0x4224d4, 0x4224f8 and 0x42251c (named
 * after its own vtable, 0x422540, until its real name is known). Its destructor tears down two
 * node pools and their auxiliary halfword buffers. */
class Obj422540 {
public:
    Obj422540(OwnerAllocator *allocator, void *storage, u32 size)
        : allocator(allocator), storage(storage), type(-1)
    {
        this->size = size;
    }
    virtual ~Obj422540();
    virtual void vfunc08();
    virtual s32 decode(const u8 *, u32);
    virtual s32 vfunc10() const;
    virtual s32 equals(const SelectionValueRecord *) const;
    virtual void copyFlags(const SelectionValueRecord *);
    /* 0x04 */ u32 kind;
    /* 0x08 */ u32 size;
    /* 0x0C */ OwnerAllocator *allocator;
    /* 0x10 */ void *storage;
    /* 0x14 */ s32 type;
};

#endif
