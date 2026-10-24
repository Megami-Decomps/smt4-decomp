#ifndef CLASSES_OBJ557FA8_H
#define CLASSES_OBJ557FA8_H

#include "common.h"

/* The object whose vtable is at 0x557fa8 (named after it until its real name is known): it holds
 * a handle object at +4 that its destructor releases. The deleting destructor and the other
 * slots live elsewhere. */
class Obj557fa8 {
public:
    virtual ~Obj557fa8();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void *vfunc18();   /* returns the handle object */

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ void *handle;
};

#endif
