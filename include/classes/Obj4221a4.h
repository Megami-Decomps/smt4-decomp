#ifndef CLASSES_OBJ4221A4_H
#define CLASSES_OBJ4221A4_H

#include "classes/ObjBase3c2ef0.h"

/* A table entry's size pair. */
struct Obj4221a4Size {
    /* 0x00 */ s16 width;
    /* 0x02 */ s16 height;
};

/* A row of table 58: a position and a pointer to a size. */
struct Obj4221a4Entry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ Obj4221a4Size *size;
};

/* A window (vtable at 0x4221a4, named after it until its real name is known) like Obj4223ac: it
 * shares ObjBase3c2ef0::vfunc0c and only runs the base's destructor. */
class Obj4221a4 : public ObjBase3c2ef0 {
public:
    virtual ~Obj4221a4();
    virtual void initialize(const void *source); /* +0x08: places the three table parts */
    virtual void vfunc10(u32 alpha); /* +0x10 */
    virtual void vfunc14();
    virtual void vfunc18();
    virtual void vfunc1c();

    /* 0x64 */ u8 ready;
};

typedef char Obj4221a4LayoutCheck[
    sizeof(Obj4221a4) == 0x68 && offsetof(Obj4221a4, ready) == 0x64 ? 1 : -1];

#endif
