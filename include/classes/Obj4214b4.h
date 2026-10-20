#ifndef CLASSES_OBJ4214B4_H
#define CLASSES_OBJ4214B4_H

#include "classes/AsdAllocatorObject.h"

/* An object that holds one resource of the allocator it was made from (vtable at 0x4214b4, named
 * after it until its real name is known). FUN_0013e8b4 makes one in C form. */
class Obj4214b4 {
public:
    virtual ~Obj4214b4();

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ AsdAllocatorObject *owner;
    /* 0x08 */ u8 flag;
    /* 0x0C */ void *resource;
};

#endif
