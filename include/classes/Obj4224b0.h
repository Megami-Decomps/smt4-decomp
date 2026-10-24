#ifndef CLASSES_OBJ4224B0_H
#define CLASSES_OBJ4224B0_H

#include "classes/Obj422540.h"

/* A pool object (vtable at 0x4224b0, named after it until its real name is known) with nothing of its
 * own to destroy. FUN_003aff9c makes it. */
class Obj4224b0 : public Obj422540 {
public:
    Obj4224b0(OwnerAllocator *allocator, void *storage) : Obj422540(allocator, storage, 0x6)
    {
        kind = 2;
    }
    virtual ~Obj4224b0();
    /* 0x18 */ u8 unk18[0xc];
};

#endif
