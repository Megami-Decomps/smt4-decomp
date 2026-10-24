#ifndef CLASSES_OBJ422564_H
#define CLASSES_OBJ422564_H

#include "common.h"

struct SelectionValueRecord;

/* The pool object whose vtable is at 0x422564 (named after it until its real name is known): a
 * sibling of Obj422540 with the same interface and no node pools of its own. FUN_003aff9c makes
 * it for the 0x100000 kind. Its methods are declared but not defined here; the destructor is the
 * key function, so no unit emits the vtable. */
class Obj422564 {
public:
    Obj422564() : size(0x14)
    {
        kind = 0x100000;
    }
    virtual ~Obj422564();
    virtual void vfunc08();
    virtual s32 decode(const u8 *, u32);
    virtual s32 vfunc10() const;
    virtual s32 equals(const SelectionValueRecord *) const;
    virtual void copyFlags(const SelectionValueRecord *);
    /* 0x04 */ u32 kind;
    /* 0x08 */ u32 size;
    /* 0x0C */ u8 unk0c[0x14];
};

#endif
