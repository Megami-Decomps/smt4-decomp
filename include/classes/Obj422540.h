#ifndef CLASSES_OBJ422540_H
#define CLASSES_OBJ422540_H

#include "common.h"

struct SelectionValueRecord;

/* The base of the pool objects with vtables at 0x4224b0, 0x4224d4, 0x4224f8 and 0x42251c (named
 * after its own vtable, 0x422540, until its real name is known). Its destructor tears down two
 * node pools and their auxiliary halfword buffers. */
class Obj422540 {
public:
    virtual ~Obj422540();
    virtual void vfunc08() = 0;
    virtual s32 decode(const u8 *, u32);
    virtual s32 vfunc10() const;
    virtual s32 equals(const SelectionValueRecord *) const;
    virtual void copyFlags(const SelectionValueRecord *);
    /* 0x04 */ u8 unk04[0xc];
    /* 0x10 */ void *storage;
};

#endif
