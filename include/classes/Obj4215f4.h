#ifndef CLASSES_OBJ4215F4_H
#define CLASSES_OBJ4215F4_H

#include "classes/AsdAllocatorObject.h"

/* An object that holds one resource of the allocator it was made from and four parameters (vtable
 * at 0x4215f4, named after it until its real name is known). Its factory is in C form, so the
 * fields are public. */
class Obj4215f4 {
public:
    virtual ~Obj4215f4();
    virtual void vfunc08() = 0;
    virtual void buildProjectionMatrices(f32 *, f32 *);
    virtual void *getResource() const;
    virtual void vfunc14();
    virtual s32 getCategory() const;
    s32 getValue() const;

    /* 0x00: vtable pointer */
    /* 0x04 */ AsdAllocatorObject *owner;
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 ownsResource;   /* the destructor gives the resource back only when set */
    /* 0x0A */ u8 unk0a[2];
    /* 0x0C */ f32 param[4];      /* start at 0.5 */
    /* 0x1C */ void *resource;
};

#endif
