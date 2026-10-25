#ifndef OBJ42242C_H
#define OBJ42242C_H

#include "classes/ObjBase3c2ef0.h"

/* The object whose vtable is at 0x42242c (named after it until its real name is known): another
 * window on the ObjBase3c2ef0 layer, like Obj4223ac. Its destructor (D0) only runs the base's. */
class Obj42242c : public ObjBase3c2ef0 {
public:
    virtual ~Obj42242c();
    virtual void initialize(const void *source); /* +0x08 */
    virtual void vfunc10(u32 arg);
    virtual void vfunc14();
    virtual void vfunc18();
    virtual void vfunc1c();

    /* 0x64 */ void *rectangle;
};

typedef char Obj42242cLayoutCheck[
    sizeof(Obj42242c) == 0x68 && offsetof(Obj42242c, rectangle) == 0x64 ? 1 : -1];

#endif
