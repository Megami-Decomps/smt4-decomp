#ifndef CLASSES_OBJ4224D4_H
#define CLASSES_OBJ4224D4_H

#include "classes/Obj422540.h"

/* A pool object (vtable at 0x4224d4, named after it until its real name is known) with nothing of its
 * own to destroy. FUN_003aff9c makes it. */
class Obj4224d4 : public Obj422540 {
public:
    Obj4224d4(OwnerAllocator *allocator, void *storage) : Obj422540(allocator, storage, 0xc)
    {
        kind = 1;
    }
    virtual ~Obj4224d4();
    /* 0x18 */ u8 unk18[0x1c];
};

#endif
