#ifndef OBJ55C864_H
#define OBJ55C864_H

#include "classes/ObjBase3c2ef0.h"

extern "C" void asdOperatorDelete(void *block);

/* The object whose vtable is at 0x55c864 (named after it until its real name is known): another
 * window on the ObjBase3c2ef0 layer, allocated with asdOperatorNew. Its destructor (D0) only runs
 * the base's. */
class Obj55c864 : public ObjBase3c2ef0 {
public:
    virtual ~Obj55c864();
    virtual void initialize(const void *source); /* +0x08 */
    virtual void vfunc10(u32 arg);
    virtual void vfunc14();
    virtual void vfunc18();
    virtual void vfunc1c();
    static void operator delete(void *block) { asdOperatorDelete(block); }
};

#endif
