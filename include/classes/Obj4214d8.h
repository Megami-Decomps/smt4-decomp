#ifndef CLASSES_OBJ4214D8_H
#define CLASSES_OBJ4214D8_H

#include "classes/AsdAllocatorObject.h"

/* An object with two arrays of sixteen slots and one resource of its owner (vtable at 0x4214d8,
 * named after it until its real name is known). Its constructor is FUN_00149fd4. */
class Obj4214d8 {
public:
    virtual ~Obj4214d8();
    virtual void vfunc08() = 0;
    virtual void vfunc0c() = 0;
    virtual void vfunc10() = 0;

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ struct { u32 object; u32 unk04; u32 unk08; } entries[16];
    /* 0xD0 */ u8 unkd0[0x14];
    /* 0xE4 */ struct { u32 first; u32 second; } pairs[16];
    /* 0x164 */ u8 unk164[0x50];
    /* 0x1B4 */ AsdAllocatorObject *owner;
    /* 0x1B8 */ void *handle;
};

#endif
