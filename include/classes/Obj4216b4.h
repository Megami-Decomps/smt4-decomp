#ifndef CLASSES_OBJ4216B4_H
#define CLASSES_OBJ4216B4_H

#include "classes/AsdAllocatorObject.h"

/* An object that holds one resource of the allocator it was made from and four parameters (vtable
 * at 0x4216b4, named after it until its real name is known). Its factory is in C form, so the
 * fields are public. */
class Obj4216b4 {
public:
    virtual ~Obj4216b4();

    /* 0x00: vtable pointer */
    /* 0x04 */ AsdAllocatorObject *owner;
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 ownsResource;   /* the destructor gives the resource back only when set */
    /* 0x0A */ u8 unk0a[2];
    /* 0x0C */ f32 param[4];      /* start at 0.5 */
    /* 0x1C */ void *resource;
};

#endif
