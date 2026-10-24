#ifndef CLASSES_OBJ4224F8_H
#define CLASSES_OBJ4224F8_H

#include "classes/Obj422540.h"

/* A pool object (vtable at 0x4224f8, named after it until its real name is known) with nothing of its
 * own to destroy. FUN_003aff9c makes it. */
class Obj4224f8 : public Obj422540 {
public:
    Obj4224f8(OwnerAllocator *allocator, void *storage) : Obj422540(allocator, storage, 0x2)
    {
        kind = 4;
    }
    virtual ~Obj4224f8();
    /* 0x18 */ u8 unk18[4];
};

#endif
